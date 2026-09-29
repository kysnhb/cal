/*
 * rt_engine.cpp — 원작 엔진 래퍼(kScene/kSprite/kFont/kDraw/SoundClip/kFile/kDate)를
 * Axmol 로 다시 구현한 층. 재컴파일된 게임 로직(gen/)이 부르는 이름·인자 규약 그대로다.
 *
 * 규약 (fixdecomp.py 와 동일)
 *  - 모든 인자는 uint64_t. 실수는 하위 32비트에 float 비트 패턴으로 실려 온다.
 *  - 원작 객체(kSprite* 등)는 게임 메모리에 포인터로 저장되므로, 원작이 직접 읽는 필드
 *    오프셋(+0x4c4 폭, +0x4c8 높이 등)을 가진 «기록 블록»을 만들어 그 주소를 돌려준다.
 *
 * 원작 동작 요약 (역변환 근거: re/decomp2/kSprite, kFont, kDraw, kScene)
 *  - 즉시모드 그리기: 매 틱 모든 스프라이트를 숨긴 뒤 drawScene 이 필요한 것만 다시 그린다.
 *  - 같은 이미지를 한 틱에 여러 번 그리면 복제 인스턴스를 쓴다(원작 getSprite).
 *  - 좌표계 960x640, y 는 위에서 아래(그릴 때 640-y). 기준점 좌상단(0,1).
 *  - 그리기 순서 = 호출 순서 (전역 zorder 증가).
 */
#include "axmol.h"
#include "audio/AudioEngine.h"
#include "base/UTF8.h"
#include "rt_engine.h"
#include "rt_ui_text.h"
#include "rt_visual_policy.h"
#include "rt_stickman_style.h"
#include "rt_sprite_pool.h"
#include "rt_wide_view.h"
#include "platform/GL.h"

extern "C" {
#include "gh.h"
}

#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>
#include <random>
#include <cstdio>
#include <ctime>

#ifdef __ANDROID__
#include <jni.h>
extern "C" JNIEXPORT void JNICALL
Java_com_kys_testapk1_AppActivity_nativeConfigureQa(JNIEnv *env, jclass, jstring name, jstring value)
{
    const char *n = env->GetStringUTFChars(name, nullptr);
    const char *v = env->GetStringUTFChars(value, nullptr);
    const char *allowed[] = {"AOS5_TAPS", "AOS5_SHOT_TICKS", "AOS5_EXIT_TICK", "AOS5_FAST", "AOS5_SAVE_DIR", "AOS5_HUMAN_TEXTURE_PROBE"};
    for (const char *candidate : allowed)
        if (strcmp(n, candidate) == 0) { setenv(n, v, 1); break; }
    env->ReleaseStringUTFChars(value, v);
    env->ReleaseStringUTFChars(name, n);
}
#endif

using namespace ax;

#define EXT extern "C"
typedef uint64_t A;

/* ------------------------------------------------------------------ */
/* 공용 도우미                                                          */
/* ------------------------------------------------------------------ */
static inline float F(A b) { return gh_b2f(b); }
static inline int I(A v) { return (int)(int32_t)v; }
template <class T> static inline T *P(A v) { return (T *)(uintptr_t)v; }
/* 원작 COW std::string 객체(char* 하나) → C 문자열 */
static inline const char *S(A strobj) { return strobj ? *(const char **)(uintptr_t)strobj : ""; }

static const float kScreenH = 640.0f;
static int g_zorder = 1;
static int g_cnt_sprite, g_cnt_label, g_cnt_rect, g_tick;
static bool g_trace_draw = false;
static Aos5Scene *g_scene = nullptr;

#ifdef __EMSCRIPTEN__
static aos5_wide::Insets g_safe_area;
static bool g_wide_hud = false, g_wide_timer = false;
static int wide_mode() { return g_scene && g_scene->game() ? *(int *)(g_scene->game() + 0x1ae8) : 0; }
static void wide_dimensions(uint8_t *game) {
    const bool world = aos5_wide::world(*(int *)(game + 0x1ae8));
    *(int *)(game + 0x1158) = world ? int(aos5_wide::width) : 960;
    *(int *)(game + 0x1160) = *(int *)(game + 0x1158) / 2;
}
// UI and hit logic retain their original coordinate system; the world camera,
// actors and map culling receive the wider viewport dimensions.
struct OriginalUiScope {
    uint8_t *game; int width, center; bool hud, timer;
    OriginalUiScope(uint8_t *g, bool drawHud = false, bool drawTimer = false) : game(g),
        width(*(int *)(g + 0x1158)), center(*(int *)(g + 0x1160)), hud(g_wide_hud), timer(g_wide_timer) {
        *(int *)(g + 0x1158) = 960; *(int *)(g + 0x1160) = 480;
        g_wide_hud = drawHud; g_wide_timer = drawTimer;
    }
    ~OriginalUiScope() { *(int *)(game + 0x1158) = width; *(int *)(game + 0x1160) = center; g_wide_hud = hud; g_wide_timer = timer; }
};
static void wide_project(float &x, float &y) {
    aos5_wide::Point p{x,y};
    if (g_wide_hud) p = (wide_mode() == 9 || wide_mode() == 8 || wide_mode() == 24)
        ? aos5_wide::menu(p) : aos5_wide::hud(p, g_safe_area, g_wide_timer);
    else if (!aos5_wide::world(wide_mode())) p = aos5_wide::menu(p);
    x = p.x; y = p.y;
}
EXT gh_long aos5_original_GameUIImg(A, A);
EXT gh_long aos5_original_ImgNumber(A,A,A,A,A,A,A,A,A,A,A);
EXT gh_long bzStateGame__GameUIImg_0041aa04(A game, A offset) {
    OriginalUiScope scope(P<uint8_t>(game), true);
    return aos5_original_GameUIImg(game, offset);
}
EXT gh_long bzStateGame__ImgNumber_003b376c(A game,A type,A style,A value,A x,A y,A r,A g,A b,A alpha,A scale) {
    if (!g_wide_hud && aos5_wide::world(wide_mode()) && I(type) == 2 && I(y) == 80) {
        x = (A)(I(x) - (*(int *)(P<uint8_t>(game) + 0x1160) - 480));
        OriginalUiScope scope(P<uint8_t>(game), true, true);
        return aos5_original_ImgNumber(game,type,style,value,x,y,r,g,b,alpha,scale);
    }
    return aos5_original_ImgNumber(game,type,style,value,x,y,r,g,b,alpha,scale);
}
#else
static void wide_project(float &, float &) {}
#endif

extern "C" void aos5_log(const char *fmt, ...);
extern "C" void aos5_diag_install(void);
extern "C" void aos5_log_stack(const char *why);
extern "C" void aos5_watch_write(void *addr);
static void rt_log(const char *fmt, ...)
{
    char buf[2048];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    aos5_log("%s", buf);
}

/* 가짜 vtable: 원작 코드가 우리 객체에 가상호출을 하면 어떤 슬롯인지 기록한다 */
template <int N> static gh_long vtrap(A self, A, A, A)
{
    rt_log("unexpected virtual call slot +0x%x on %p", N * 8, (void *)(uintptr_t)self);
    return 0;
}
template <int... N> struct VTab { static constexpr gh_long (*t[sizeof...(N)])(A, A, A, A) = {vtrap<N>...}; };
template <int... N> static auto make_vtab(std::integer_sequence<int, N...>) { return VTab<N...>{}; }
static void *g_vtab_trap[256];
static void init_vtab()
{
    auto t = make_vtab(std::make_integer_sequence<int, 256>{});
    for (int i = 0; i < 256; i++) g_vtab_trap[i] = (void *)decltype(t)::t[i];
}

/* ------------------------------------------------------------------ */
/* 스프라이트 (kSprite)                                                 */
/* ------------------------------------------------------------------ */
struct SpriteImpl {
    std::string path;
    Texture2D *tex = nullptr;
    float hd = 1.0f;              // 신규 그래픽 배율 (텍스처 크기 / 원본 크기)
    std::vector<Sprite *> inst;   // 0번 = 원본, 1번~ = 같은 틱 복제
    TextureSpritePool overrides; // Separate pools for cached art and UI replacements.
    int used = 0;
    int layer = 0;
    bool alive = true;
    aos5_stickman::Part stick = aos5_stickman::Part::None;
    bool recolor = false;         // 캐릭터 색 바꾸기 대상 (char_palette.tsv 의 경로 접두어)
    bool ui = false;              // UI 이미지 (img/UI/) — 새 UI 배치(ui_layout.tsv) 대상
};
/* 원작이 직접 읽는 kSprite 필드 */
enum { KS_COUNTER = 0x4b8, KS_RECT_X = 0x4bc, KS_RECT_Y = 0x4c0, KS_W = 0x4c4, KS_H = 0x4c8,
       KS_IMPL = 0x5f8, KS_SIZE = 0x600 };

static std::vector<SpriteImpl *> g_sprites;
static bool g_hp_frame_drawn = false;
static Sprite *g_hp_bitmap_caption = nullptr;
struct WeaponQuantityPass { Label *node; int slot; };
static std::vector<WeaponQuantityPass> g_weapon_quantities;
struct ShopItemPass { Sprite *node; int card; };
static std::vector<ShopItemPass> g_shop_items;
static std::vector<ShopItemPass> g_weapon_items;

// Optional art layers are enabled only when the gothic asset pack is present.
// They use the world drawing order, keeping controls and text unobscured.
struct AtmosphereLayer {
    bool checked = false;
    bool on = false;
    Sprite *farFog = nullptr, *nearFog = nullptr;
    std::vector<Sprite *> motes;
    int bgZ = 0, hudZ = 0;
    int skyZ = 0;
    int effectsZ = 0;
    bool indoorSky = false;
    float cloudSeconds = 0;
} g_atmosphere;

/* 원작 이미지 원본 크기표 (aos5core/img_sizes.tsv) — 신규 그래픽이 N배로 들어와도 원본 크기로 그린다 */
static std::unordered_map<std::string, std::pair<int, int>> g_img_sizes;
static void load_img_sizes()
{
    std::string t = FileUtils::getInstance()->getStringFromFile("aos5core/img_sizes.tsv");
    size_t i = 0;
    while (i < t.size()) {
        size_t e = t.find('\n', i);
        if (e == std::string::npos) e = t.size();
        std::string line = t.substr(i, e - i);
        size_t a = line.find('\t'), b = line.rfind('\t');
        if (a != std::string::npos && b != a)
            g_img_sizes[line.substr(0, a)] = {atoi(line.c_str() + a + 1), atoi(line.c_str() + b + 1)};
        i = e + 1;
    }
}
static float hd_factor(const std::string &path, Texture2D *tex)
{
    auto it = g_img_sizes.find(path);
    if (it == g_img_sizes.end() || it->second.first <= 0) return 1.0f;
    return tex->getPixelsWide() / (float)it->second.first;
}

/* 새 그래픽용 캐릭터 색 바꾸기 (aos5core/char_palette.tsv — 새 그래픽 리소스에만 둔다).
   원작은 캐릭터 조각(무채색)에 캐릭터 색을 «곱해서» 칠한다. 주인공 색이 검정이라 새 그림의 디테일이
   전부 검게 묻히므로, 그리는 단계에서만 색을 바꾼다 (게임 로직의 색 값은 그대로).
   형식:  경로접두어<TAB>원래색 r,g,b<TAB>바꿀색 r,g,b   (0~255)
          *boost<TAB>배율상한   — 그 밖의 색은 색상을 유지한 채 가장 밝은 채널이 1 이 되도록(상한까지) 밝힌다 */
struct PalRule { std::string prefix; float from[3], to[3]; };
static std::vector<PalRule> g_pal_rules;
static std::vector<std::string> g_pal_prefixes;
static float g_pal_boost = 0.0f;
static void load_char_palette()
{
    std::string t = FileUtils::getInstance()->getStringFromFile("aos5core/char_palette.tsv");
    size_t i = 0;
    while (i < t.size()) {
        size_t e = t.find('\n', i);
        if (e == std::string::npos) e = t.size();
        std::string line = t.substr(i, e - i);
        i = e + 1;
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (line.empty() || line[0] == '#') continue;
        char pre[256];
        float a0, a1, a2, b0, b1, b2, v;
        if (sscanf(line.c_str(), "*boost\t%f", &v) == 1) { g_pal_boost = v; continue; }
        if (sscanf(line.c_str(), "%255[^\t]\t%f,%f,%f\t%f,%f,%f", pre, &a0, &a1, &a2, &b0, &b1, &b2) == 7) {
            g_pal_rules.push_back({pre, {a0 / 255.f, a1 / 255.f, a2 / 255.f}, {b0 / 255.f, b1 / 255.f, b2 / 255.f}});
            if (std::find(g_pal_prefixes.begin(), g_pal_prefixes.end(), pre) == g_pal_prefixes.end())
                g_pal_prefixes.push_back(pre);
        }
    }
    if (!g_pal_rules.empty()) rt_log("char palette: %zu rules, boost %.2f", g_pal_rules.size(), g_pal_boost);
}
static bool pal_target(const std::string &path)
{
    for (auto &p : g_pal_prefixes)
        if (path.compare(0, p.size(), p) == 0) return true;
    return false;
}
static void pal_apply(const std::string &path, float c[3])
{
    for (auto &r : g_pal_rules)
        if (path.compare(0, r.prefix.size(), r.prefix) == 0 && fabsf(c[0] - r.from[0]) < 0.003f &&
            fabsf(c[1] - r.from[1]) < 0.003f && fabsf(c[2] - r.from[2]) < 0.003f) {
            c[0] = r.to[0]; c[1] = r.to[1]; c[2] = r.to[2];
            return;
        }
    float m = std::max(c[0], std::max(c[1], c[2]));
    if (g_pal_boost > 1.0f && m > 0.0f && m < 1.0f) {
        float k = std::min(1.0f / m, g_pal_boost);
        for (int j = 0; j < 3; j++) c[j] = std::min(1.0f, c[j] * k);
    }
}

/* 새 UI 배치 (aos5core/ui_layout.tsv — 새 그래픽 리소스에만 둔다).
   게임 로직·게임 메모리의 좌표는 그대로 두고 «화면에 그리는 위치»만 옮긴다.
   옮긴 영역을 누른 터치는 원래 영역의 같은 자리로 되돌려 게임에 전달하고, 비워진 원래 영역의 터치는 막는다.
   형식: 화면모드<TAB>x0,y0,x1,y1<TAB>새x,새y<TAB>배율<TAB>플래그
         - x0..x1, y0..y1 : 원래 영역 (960x640, 왼쪽 위 원점). 그리는 기준점이 이 안인 이미지·글자·사각형을 함께 옮긴다
         - 새x,새y        : 영역 왼쪽 위가 옮겨 갈 자리. 배율은 영역 왼쪽 위 기준
         - 플래그 (쉼표로 여러 개, 없으면 -)
             t      : 터치도 옮긴다 (버튼)
             a0.9   : 옮긴 이미지의 최소 불투명도 — 원작은 색 버튼을 늘 50% 로 그려 새 배지 그림이 파란 조작판과
                      섞여 흐려진다(빨강 → 보라)
             j      : 조준 상태(주인공 상태 15·59 — 게임이 주먹 버튼 자리에 조준 조이스틱을 그린다)에서는 끈다.
                      조이스틱의 그림·터치가 원래 자리 그대로 맞물리게
         - (선택) 이미지   : 이 이름이 들어간 이미지만 옮긴다 (예: MenuUi[139], 여러 개는 | 로) — 캐릭터가 지나다니는
                              높이의 버튼은 이것으로 좁힌다 (월드에 쓰이는 UI 이미지·글자를 끌고 가지 않게) */
struct LayoutRule : aos5_ui::LayoutGeometry {
    int mode; bool touch, no_aim; float min_a; std::vector<std::string> only;
    bool match(const std::string *path) const
    {
        if (only.empty()) return true;
        if (!path) return false;
        for (auto &o : only)
            if (path->find(o) != std::string::npos) return true;
        return false;
    }
};
static std::vector<LayoutRule> g_layout;
static void load_ui_layout()
{
    std::string t = FileUtils::getInstance()->getStringFromFile("aos5core/ui_layout.tsv");
    size_t i = 0;
    while (i < t.size()) {
        size_t e = t.find('\n', i);
        if (e == std::string::npos) e = t.size();
        std::string line = t.substr(i, e - i);
        i = e + 1;
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (line.empty() || line[0] == '#') continue;
        LayoutRule r{};
        char flags[16] = "", only[64] = "";
        int n = sscanf(line.c_str(), "%d\t%f,%f,%f,%f\t%f,%f\t%f\t%15s\t%63s", &r.mode, &r.x0, &r.y0, &r.x1, &r.y1, &r.nx,
                       &r.ny, &r.s, flags, only);
        if (n < 8) continue;
        r.touch = strchr(flags, 't') != nullptr;
        r.no_aim = strchr(flags, 'j') != nullptr;
        const char *ap = strchr(flags, 'a');
        r.min_a = ap ? (float)atof(ap + 1) : 0.0f;
        for (const char *o = only; *o;) {
            const char *bar = strchr(o, '|');
            size_t len = bar ? (size_t)(bar - o) : strlen(o);
            if (len) r.only.emplace_back(o, len);
            o += len + (bar ? 1 : 0);
        }
        g_layout.push_back(r);
    }
    if (!g_layout.empty()) rt_log("ui layout: %zu rules", g_layout.size());
}
static int g_buy_store_context = 0;
EXT void aos5_buy_store_context(int type) {
    g_buy_store_context = type;
    if (type > 0) g_shop_items.clear();
}
static int layout_mode() {
    int mode = g_scene && g_scene->game() ? *(int *)(g_scene->game() + 0x1ae8) : -1;
#ifdef __EMSCRIPTEN__
    // A goal/results overlay still draws the same combat HUD underneath.
    // Keep each icon, caption and touch-layout group together in those frames.
    if (g_wide_hud && aos5_wide::world(mode)) mode = 11;
#endif
    return aos5_ui::presentation_mode(mode, g_buy_store_context);
}
static int weapon_page() { return g_scene && g_scene->game() ? *(int *)(g_scene->game() + 0x32c994) : -1; }
/* 조준 상태: 주인공(캐릭터 슬롯 0) 상태 15·59 — 원작 GameUIImg 가 조준 조이스틱을 그리는 분기 */
static bool layout_aiming()
{
    if (!g_scene || !g_scene->game()) return false;
    int st = *(int *)(g_scene->game() + 0x8dae0);
    return st == 15 || st == 59;
}
static bool layout_rule_on(const LayoutRule &r, int mode, bool aiming) {
    if (mode == aos5_ui::buy_store_mode || mode == aos5_ui::special_buy_store_mode)
        return r.mode == 23 && r.y1 <= 65; // Only the common currency HUD moves.
    if (mode == 12 && weapon_page() == 3 && r.y0 >= 150 && r.y1 <= 435) return false;
    return r.mode == mode && !(r.no_aim && aiming);
}
/* 그리기: 기준점(x,y)을 옮기고 배율을 돌려준다. path = 이미지 경로 (글자·사각형은 nullptr).
   min_a 를 주면 그 규칙의 최소 불투명도(없으면 0)를 돌려준다 */
static float layout_apply(float &x, float &y, const std::string *path = nullptr, float *min_a = nullptr)
{
    if (g_layout.empty()) return 1.0f;
    int mode = layout_mode();
    bool aiming = layout_aiming();
    for (auto &r : g_layout)
        if (layout_rule_on(r, mode, aiming) && r.source(x, y) && r.match(path)) {
            r.draw(x, y);
            if (min_a) *min_a = r.min_a;
            return r.s;
        }
    return 1.0f;
}
/* 터치(960x640, 왼쪽 위 원점): 옮긴 영역이면 원래 좌표로. 비워진 원래 영역의 누름·끌기는 막는다(false) */
static bool layout_touch(float &x, float &y, int phase)
{
    // BuyStoreWin owns its original continuous coordinate system. In particular
    // its X must never pass through the underlying weapon-card inverse map.
    if (g_scene && g_scene->game() && *(int *)(g_scene->game() + 0x1af0) > 0) return true;
    if (g_layout.empty()) return true;
    int mode = layout_mode();
    bool aiming = layout_aiming();
    for (auto &r : g_layout) {
        if (!layout_rule_on(r, mode, aiming) || !r.touch) continue;
        if (r.target(x, y)) {
            r.aos5_ui::LayoutGeometry::touch(x, y);
            return true;
        }
    }
    if (phase != 2)
        for (auto &r : g_layout)
            if (layout_rule_on(r, mode, aiming) && r.touch && r.source(x, y)) return false;
    return true;
}

/* ------------------------------------------------------------------ */
/* 코믹 연출층 — 새 그래픽 전용 (리소스에 img/fx/*.png 가 있을 때만 켜진다) */
/* ------------------------------------------------------------------ */
/* 게임 로직·게임 메모리는 «읽기만» 한다. 매 틱 캐릭터 슬롯(게임+0x8dac8, 0x288 간격 — 0번 주인공, 30번~ 적)의
   체력(+0x24)·상태(+0x18)를 지난 틱과 비교해 그림을 덧그린다.
     적 체력 감소             → 타격 의성어 (POW·BAM·WHAM·ZAP 중 무작위)
     적 상태가 90(쓰러짐)으로  → KO!
     주인공 체력 감소          → OUCH
     주인공 상태 10(달리기)    → 등 뒤 속도선
   슬롯 +0 x·+4 발 y 는 화면 좌표(960x640, 왼쪽 위 원점, 카메라 반영), +0x10 = 보는 방향(0 오른쪽·1 왼쪽).
   화면모드 11(스테이지)·9(튜토리얼)에서만 보이고 다른 화면이 되면 모두 지운다. 게임 스프라이트 위에 그린다. */
namespace {
const int kSlotBase = 0x8dac8, kSlotSize = 0x288, kSlotCount = 200, kFirstEnemy = 30;
const int kStRun = 10, kStDown = 90;
struct FxPop { Sprite *s; int slot; float dx, dy, rise; };
struct FxLayer {
    bool checked = false, on = false;
    Texture2D *hit[4] = {}, *ko = nullptr, *ouch = nullptr, *speed = nullptr;
    std::vector<FxPop> pops;
    Sprite *speed_node = nullptr;
    float speed_op = 0;
    int prev_hp[kSlotCount] = {}, prev_st[kSlotCount] = {};
    float cool[kSlotCount] = {};
    bool prev_ok = false;
    unsigned rng = 0x2545f491u;
    int z = 0;
} g_fx;
}
static int fx_rand(int n)
{
    g_fx.rng = g_fx.rng * 1103515245u + 12345u;
    return (int)((g_fx.rng >> 16) % (unsigned)n);
}
static const int *fx_slot(uint8_t *game, int i) { return (const int *)(game + kSlotBase + i * kSlotSize); }
/* 몸 중심 x: 슬롯 x 는 보는 방향에 따라 몸의 한쪽 끝이다 (캐릭터 조각 그리기 위치 실측) */
static float fx_body_dx(const int *c) { return c[4] == 0 ? 15.0f : -25.0f; }
static void fx_place(FxPop &p, const int *c)
{
    p.s->setPosition(Vec2((float)c[0] + p.dx, kScreenH - ((float)c[1] - p.dy)));
}
// Existing event detection drives short, bounded artwork. No gameplay writes.
static void fx_pop(Texture2D *tex, int slot, const int *c, float up, aos5_visual::FxKind kind)
{
    if (!tex) return;
    const auto style = aos5_visual::fx_style(kind);
    for (auto &o : g_fx.pops)   // 같은 캐릭터의 앞 그림은 얼른 지운다 (연타·KO 가 겹쳐 보이지 않게)
        if (o.slot == slot && slot >= 0) {
            o.s->stopAllActions();
            o.s->runAction(FadeTo::create(0.08f, 0));
        }
    if (g_fx.pops.size() >= 12) {
        g_fx.pops.front().s->removeFromParent();
        g_fx.pops.front().s->release();
        g_fx.pops.erase(g_fx.pops.begin());
    }
    Sprite *s = Sprite::createWithTexture(tex);
    s->retain();
    FxPop p{s, slot, fx_body_dx(c) + (float)(fx_rand(13) - 6), up + (float)(fx_rand(9) - 4), style.rise};
    fx_place(p, c);
    s->setRotation((float)(fx_rand(25) - 12));
    float k = std::min(style.width / tex->getPixelsWide(), style.height / tex->getPixelsHigh());
    s->setScale(k * 0.82f);
    s->setOpacity((uint8_t)style.opacity);
    s->setLocalZOrder(g_atmosphere.effectsZ);
    g_scene->gameRoot()->addChild(s);
    s->runAction(Sequence::create(ScaleTo::create(style.appear, k), DelayTime::create(style.hold),
                                  FadeOut::create(style.fade), nullptr));
    if (g_trace_draw) rt_log("[fx] kind=%d slot=%d maxSize=(%.0f,%.0f) life=%.3f opacity=%d z=%d", (int)kind, slot, style.width, style.height, style.appear + style.hold + style.fade, style.opacity, g_atmosphere.effectsZ);
    g_fx.pops.push_back(p);
}
static void fx_clear()
{
    for (auto &p : g_fx.pops) {
        p.s->removeFromParent();
        p.s->release();
    }
    g_fx.pops.clear();
    if (g_fx.speed_node) g_fx.speed_node->setVisible(false);
    g_fx.speed_op = 0;
}
static void fx_tick(uint8_t *game, float dt)
{
    const float step = aos5_visual::effect_step(dt);
    if (!g_fx.checked) {
        g_fx.checked = true;
        if (FileUtils::getInstance()->isFileExist("img/fx/hit_pow.png")) {
            auto *tc = Director::getInstance()->getTextureCache();
            const char *hits[4] = {"img/fx/hit_pow.png", "img/fx/hit_bam.png", "img/fx/hit_wham.png", "img/fx/hit_zap.png"};
            for (int i = 0; i < 4; i++) g_fx.hit[i] = tc->addImage(hits[i]);
            g_fx.ko = tc->addImage("img/fx/ko.png");
            g_fx.ouch = tc->addImage("img/fx/ouch.png");
            g_fx.speed = tc->addImage("img/fx/speed_lines.png");
            for (auto *texture : {g_fx.hit[0], g_fx.hit[1], g_fx.hit[2], g_fx.hit[3], g_fx.ko, g_fx.ouch, g_fx.speed})
                if (texture) texture->retain(); // Survive resource-cache purges between modes.
            g_fx.on = true;
            rt_log("comic fx layer: on");
        }
    }
    if (!g_fx.on || !game) return;
    int mode = *(int *)(game + 0x1ae8);
    if (!aos5_visual::effects_on(mode) || !g_atmosphere.effectsZ) {
        if (g_fx.prev_ok) fx_clear();
        g_fx.prev_ok = false;
        return;
    }
    for (int i = 0; i < kSlotCount; i++) {
        const int *c = fx_slot(game, i);
        int hp = c[9], st = c[6];
        g_fx.cool[i] = std::max(0.0f, g_fx.cool[i] - step);
        if (g_fx.prev_ok) {
            int php = g_fx.prev_hp[i], pst = g_fx.prev_st[i];
            if (hp > php) {   // 슬롯 재사용(새 캐릭터)·회복 — 붙어 있던 연출은 떼어 제자리에 둔다
                for (auto &p : g_fx.pops)
                    if (p.slot == i) p.slot = -1;
            } else if (i >= kFirstEnemy) {
                if (st == kStDown && pst != kStDown) {
                    fx_pop(g_fx.ko, i, c, 132.0f, aos5_visual::FxKind::Down);
                    g_fx.cool[i] = .15f;
                } else if (hp < php && g_fx.cool[i] == 0) {
                    fx_pop(g_fx.hit[fx_rand(4)], i, c, 85.0f, aos5_visual::FxKind::Hit);
                    g_fx.cool[i] = .08f;
                }
            } else if (i == 0 && hp < php && g_fx.cool[0] == 0) {
                fx_pop(g_fx.ouch, 0, c, 130.0f, aos5_visual::FxKind::Hurt);
                g_fx.cool[0] = .18f;
            }
        }
        g_fx.prev_hp[i] = hp;
        g_fx.prev_st[i] = st;
    }
    g_fx.prev_ok = true;
    for (size_t k = 0; k < g_fx.pops.size();) {
        FxPop &p = g_fx.pops[k];
        if (p.s->getNumberOfRunningActions() == 0) {   // 튀어나옴·머묾·사라짐이 끝남
            p.s->removeFromParent();
            p.s->release();
            g_fx.pops.erase(g_fx.pops.begin() + k);
            continue;
        }
        p.s->setLocalZOrder(g_atmosphere.effectsZ);
        p.dy += p.rise * step;
        if (p.slot >= 0) fx_place(p, fx_slot(game, p.slot));
        else if (p.rise != 0.0f) p.s->setPositionY(p.s->getPositionY() + p.rise * step);
        k++;
    }
    // 속도선: 주인공이 달리는 동안 등 뒤에 (그림은 오른쪽 끝이 굵다 → 오른쪽으로 달릴 때 그대로)
    const int *h = fx_slot(game, 0);
    bool run = h[6] == kStRun && h[9] > 0;
    if (!g_fx.speed_node && g_fx.speed) {
        g_fx.speed_node = Sprite::createWithTexture(g_fx.speed);
        g_fx.speed_node->setVisible(false);
        g_scene->gameRoot()->addChild(g_fx.speed_node);
    }
    if (Sprite *sn = g_fx.speed_node) {
        g_fx.speed_op = aos5_visual::speed_opacity(g_fx.speed_op, run, dt);
        if (g_fx.speed_op > 0) {
            bool left = h[4] == 1;
            float bx = (float)h[0] + fx_body_dx(h);
            sn->setFlippedX(left);
            sn->setAnchorPoint(left ? Vec2(0, 0.5f) : Vec2(1, 0.5f));
            sn->setScale(std::min(84.0f / g_fx.speed->getPixelsWide(), 28.0f / g_fx.speed->getPixelsHigh()));
            sn->setPosition(Vec2(bx + (left ? 1.0f : -1.0f) * 30.0f,
                                 kScreenH - ((float)h[1] - 65.0f)));
            sn->setOpacity((uint8_t)g_fx.speed_op);
            sn->setLocalZOrder(g_atmosphere.effectsZ);
            sn->setVisible(true);
        } else
            sn->setVisible(false);
    }
    if (g_trace_draw) rt_log("[fx] active=%zu cap=12 speedOpacity=%.1f z=%d mode=%d", g_fx.pops.size(), g_fx.speed_op, g_atmosphere.effectsZ, mode);
}

static void *g_vt_sprite[256], *g_vt_font[256], *g_vt_draw[256], *g_vt_game[256];
static uint8_t *new_record(size_t size, void **vt)
{
    uint8_t *r = (uint8_t *)calloc(1, size);
    *(void ***)r = vt;
    return r;
}

static SpriteImpl *sprite_impl(A rec) { return rec ? *(SpriteImpl **)(P<uint8_t>(rec) + KS_IMPL) : nullptr; }

#include "rt_stickrig_runtime.inc"

static Sprite *sprite_next_instance(SpriteImpl *si)
{
    if (si->used < (int)si->inst.size()) return si->inst[si->used++];
    Sprite *s = Sprite::createWithTexture(si->tex);
    if (!s) return nullptr;
    s->setAnchorPoint(Vec2(0, 1));
    s->setVisible(false);
    g_scene->gameRoot()->addChild(s);
    si->inst.push_back(s);
    si->used++;
    return s;
}
static void draw_combat_hp();
/* kSprite::drawPos 핵심 (원작 0x47ee7c) */
static void draw_sprite(A r, A g, A b, A a, A scale, A angle, A rec, A pos, A flip, A blend, A pivx, A pivy,
                        const ax::Rect *sub)
{
    SpriteImpl *si = sprite_impl(rec);
    if (!si || !si->tex) return;
    if (g_atmosphere.on && stickrig_runtime::suppress_overlay(si->path)) return;
    if (g_atmosphere.on && si->path == "img/UI/MenuUi[92].png" &&
        fabsf(P<float>(pos)[0]) < 1 && fabsf(P<float>(pos)[1]) < 1) g_hp_frame_drawn = true;
    g_cnt_sprite++;
    static int zero_scale_logged;
    if (fabsf(F(scale)) < 0.001f && zero_scale_logged < 3) {   /* 진단: 크기 0 으로 그리는 호출부 */
        zero_scale_logged++;
        rt_log("zero scale: %s bits=0x%llx", si->path.c_str(), (unsigned long long)scale);
        aos5_log_stack(si->path.c_str());
    }
    Texture2D *renderTexture = si->tex;
    if (g_atmosphere.on && aos5_ui::start_base(layout_mode(), si->path, P<float>(pos)[0], P<float>(pos)[1])) {
        static bool checked = false;
        static Texture2D *startBase = nullptr;
        if (!checked) {
            checked = true;
            startBase = Director::getInstance()->getTextureCache()->addImage("img/UI/StartButtonBase.png");
            if (startBase && (startBase->getPixelsWide() != 320 || startBase->getPixelsHigh() != 132)) {
                rt_log("StartButtonBase.png must be 320x132; keeping original button.");
                startBase = nullptr;
            }
            // The menu may release its sprites and purge unused cache entries.
            // Keep this small shared override alive across later menu visits.
            if (startBase) startBase->retain();
        }
        if (startBase) renderTexture = startBase;
    }
    if (g_atmosphere.on) {
        const char *overridePath = nullptr;
        if (layout_mode() == 12 && si->path == "img/UI/MenuUi[151].png" && P<float>(pos)[1] >= 450)
            overridePath = "img/UI/MenuUi[150].png";
        if (layout_mode() == 50 && si->path == "img/UI/MenuUi[92].png" && P<float>(pos)[1] > 400)
            overridePath = "img/UI/MenuUi[62].png";
        if (overridePath) {
            static std::unordered_map<std::string, Texture2D *> overrides;
            auto it = overrides.find(overridePath);
            if (it == overrides.end()) {
                auto *texture = Director::getInstance()->getTextureCache()->addImage(overridePath);
                if (texture) texture->retain();
                it = overrides.emplace(overridePath, texture).first;
            }
            if (it->second) renderTexture = it->second;
        }
    }
    float col[3] = {F(r), F(g), F(b)};
    const stickrig_runtime::Art *art = nullptr;
    if (g_atmosphere.on && !sub && si->stick != aos5_stickman::Part::None)
        art = stickrig_runtime::select(si, col, col);
    if (art) renderTexture = art->texture;
    Sprite *s = renderTexture == si->tex ? sprite_next_instance(si) : si->overrides.next(renderTexture, g_scene->gameRoot());
    if (!s) return;
    if (sub) s->setTextureRect(ax::Rect(sub->origin.x * si->hd, sub->origin.y * si->hd, sub->size.width * si->hd,
                                        sub->size.height * si->hd));
    else if (art) s->setTextureRect(ax::Rect(0, 0, art->width, art->height));
    else s->setTextureRect(ax::Rect(0, 0, renderTexture->getPixelsWide(), renderTexture->getPixelsHigh()));
    if (art) stickrig_runtime::mark_head(si);
    s->setVisible(true);
    if (!art && si->stick == aos5_stickman::Part::None && si->recolor) pal_apply(si->path, col);
    int glyph = -1;
    sscanf(si->path.c_str(), "img/UI/MenuUi[%d].png", &glyph);
    const int weaponSlot = g_atmosphere.on && layout_mode() == 12 && weapon_page() < 3
        ? aos5_ui::weapon_slot(P<float>(pos)[0], P<float>(pos)[1]) : -1;
    const bool weaponCard = weaponSlot >= 0 && (glyph == 112 || glyph == 113 || glyph == 183);
    if (weaponCard) aos5_visual::card_tint(col);
    // The original timer uses black bitmap digits; the new night sky needs light ink.
    if (g_atmosphere.on && sscanf(si->path.c_str(), "img/UI/MenuUi[%d].png", &glyph) == 1 &&
        glyph >= 0 && glyph <= 15 && F(r) == 0.0f && F(g) == 0.0f && F(b) == 0.0f &&
        fabsf(P<float>(pos)[1] - 80.0f) < 5.0f && P<float>(pos)[0] >= 400.0f && P<float>(pos)[0] <= 600.0f)
        { col[0] = 0.86f; col[1] = 0.92f; col[2] = 0.88f; }
    if (g_atmosphere.on && (layout_mode() == 12 || layout_mode() == 14) && aos5_ui::bitmap_number(glyph) &&
        std::max(col[0], std::max(col[1], col[2])) < 0.35f) {
        col[0] = 0.94f; col[1] = 0.91f; col[2] = 0.83f;
    }
    s->setColor(Color3B((uint8_t)(col[0] * 255.0f), (uint8_t)(col[1] * 255.0f), (uint8_t)(col[2] * 255.0f)));
    s->setOpacity((uint8_t)(int)(F(a) * 255.0f));
    if (weaponCard) s->setOpacity(255);
    s->setAnchorPoint(Vec2(0, 1));
    const bool reversedArrow = g_atmosphere.on && (glyph == 69 || glyph == 70);
    s->setFlippedX((I(flip) == 1) != reversedArrow);
    s->setScale(F(scale) / si->hd);
    s->setRotation(0);
    float *pv = P<float>(pos);
    float ang = F(angle);
    if (ang != 0.0f) {
        float px = pv[0] - (float)I(pivx), py = pv[1] - (float)I(pivy);
        pv[0] = (px * cosf(ang) - py * sinf(ang)) + (float)I(pivx);
        pv[1] = px * sinf(ang) + py * cosf(ang) + (float)I(pivy);
        s->setRotation(ang * 180.0f / 3.1415927f);
    }
    int bm = I(blend);
    s->setBlendFunc(renderTexture->hasPremultipliedAlpha() ? BlendFunc::ALPHA_PREMULTIPLIED : BlendFunc::ALPHA_NON_PREMULTIPLIED);
    if (bm != 0) {
        using BF = backend::BlendFactor;
        if (bm == 2) s->setBlendFunc({BF::DST_ALPHA, BF::ONE});
        else if (bm == 1) s->setBlendFunc({BF::DST_ALPHA, BF::ONE_MINUS_SRC_ALPHA});
        else s->setBlendFunc({BF::SRC_ALPHA, BF::ONE_MINUS_SRC_ALPHA});
    }
    auto spriteBox = g_atmosphere.on
        ? aos5_ui::sprite_box(layout_mode(), si->path, glyph, pv[0], pv[1], g_hp_frame_drawn)
        : aos5_ui::SpriteBox{pv[0], pv[1]};
    if (g_atmosphere.on && layout_mode() == 12 && glyph >= 185 && glyph <= 197 &&
        pv[0] >= 100 && pv[0] < 240 && pv[1] >= 500 && pv[1] <= 530) {
        const float w = s->getContentSize().width * F(scale) / si->hd;
        const float h = s->getContentSize().height * F(scale) / si->hd;
        spriteBox.scale = std::min(1.0f, std::min(100.0f / std::max(w, 1.0f), 19.0f / std::max(h, 1.0f)));
    }
    if (g_atmosphere.on && layout_mode() == 12 && weapon_page() < 3 && aos5_ui::weapon_item(glyph)) {
        const int slot = aos5_ui::weapon_slot(pv[0], pv[1]);
        if (slot >= 0) {
            const float w = s->getContentSize().width * F(scale) / si->hd;
            const float h = s->getContentSize().height * F(scale) / si->hd;
            const float fit = std::min(1.0f, std::min(80.0f / std::max(w, 1.0f), 48.0f / std::max(h, 1.0f)));
            spriteBox.x = 82 + 200 * (slot % 4) + 14 + (80 - w * fit) * 0.5f;
            spriteBox.y = 153 + 95 * (slot / 4) + 14 + (48 - h * fit) * 0.5f;
            spriteBox.scale = fit;
        }
    }
    if (g_atmosphere.on && layout_mode() == aos5_ui::buy_store_mode) {
        const int card = aos5_ui::buy_store_item_card(glyph);
        if (card >= 0 && pv[1] >= 310 && pv[1] < 390) {
            const float w = s->getContentSize().width * F(scale) / si->hd;
            const float h = s->getContentSize().height * F(scale) / si->hd;
            const float fit = std::min(1.0f, std::min(76.0f / std::max(w, 1.0f), 60.0f / std::max(h, 1.0f)));
            spriteBox.x = aos5_ui::free_card_left(card) + 18 + (76 - w * fit) * .5f;
            spriteBox.y = 324 + (60 - h * fit) * .5f;
            spriteBox.scale = fit;
        }
    }
    float lx = spriteBox.x, ly = spriteBox.y;   // Rendering only; input/game values remain unchanged.
    float min_a = 0.0f;
    float ls = si->ui ? layout_apply(lx, ly, &si->path, &min_a) : 1.0f;   // 월드(캐릭터·타일)는 옮기지 않는다
    s->setScale(F(scale) / si->hd * ls * spriteBox.scale);
    if (spriteBox.scaleY > 0) s->setScaleY(F(scale) / si->hd * ls * spriteBox.scaleY);
    if (F(a) < min_a) s->setOpacity((uint8_t)(int)(min_a * 255.0f));
    if (g_atmosphere.on && (layout_mode() == 8 || layout_mode() == 9 || layout_mode() == 24) &&
        glyph >= 131 && glyph <= 143 && pv[1] >= 575 && pv[1] <= 630 && F(scale) <= 0.55f && F(a) < 0.7f)
        s->setOpacity(179); // KEY sequence copies: keep inactive steps legible, active steps remain 1.0.
    if (art) {
        const float logicalScale = F(scale) * ls * spriteBox.scale;
        const auto offset = aos5_stickrig::draw_offset(art->registration, logicalScale, ang, I(flip) == 1);
        lx += offset.x; ly += offset.y;
        s->setScale(logicalScale / art->registration.density);
    }
    wide_project(lx, ly);
#ifdef __EMSCRIPTEN__
    if (si->path == "img/bg/bg_1.png" || si->path == "img/bg/bg_4.png" ||
        si->path == "img/bg/bg_6.png" || si->path == "img/bg/bg_7.png") {
        const float fit = std::max(aos5_wide::width / s->getContentSize().width,
                                   kScreenH / s->getContentSize().height);
        s->setScale(fit); lx = 0; ly = 0;
    }
    // The tutorial image contains instructions. Fit it intact in the center,
    // with the existing sky filling the side areas instead of cropping text.
    if (si->path == "img/bg/bg_3.png" || si->path == "img/bg/bg_8.png") {
        static Texture2D *sky = nullptr;
        if (!sky) { sky = Director::getInstance()->getTextureCache()->addImage("img/bg/bg_7.png"); if (sky) sky->retain(); }
        if (sky) {
            auto *back = si->overrides.next(sky, g_scene->gameRoot());
            back->setVisible(true); back->setAnchorPoint(Vec2(0,1));
            back->setScale(std::max(aos5_wide::width / sky->getPixelsWide(), kScreenH / sky->getPixelsHigh()));
            back->setColor(Color3B(95,115,115)); back->setPosition(Vec2(0,kScreenH)); back->setLocalZOrder(++g_zorder);
        }
    }
    if (!g_wide_hud && aos5_wide::world(wide_mode()) && glyph == 34) {
        lx += pv[0] > aos5_wide::width/2 ? -g_safe_area.right : g_safe_area.left;
        ly += pv[1] >= 330 ? -g_safe_area.bottom : g_safe_area.top;
    }
#endif
    s->setPosition(Vec2(lx, kScreenH - ly));
    if (g_atmosphere.on && glyph == 92 && fabsf(pv[0]) < 1 && fabsf(pv[1]) < 1)
        g_atmosphere.effectsZ = ++g_zorder; // Reserve between the world and HUD.
    if (art) stickrig_runtime::halo(si,art,s);
    s->setLocalZOrder(++g_zorder);
#ifdef __EMSCRIPTEN__
    if ((si->path == "img/bg/bg_2.png" || si->path == "img/bg/bg_5.png") && lx >= 0) {
        const float width = s->getContentSize().width * s->getScaleX();
        if (width > 0 && lx + width < aos5_wide::width) {
            auto *extra = sprite_next_instance(si);
            extra->setVisible(true); extra->setAnchorPoint(s->getAnchorPoint());
            extra->setScale(s->getScaleX()); extra->setColor(s->getColor()); extra->setOpacity(s->getOpacity());
            extra->setPosition(Vec2(lx + width, kScreenH - ly)); extra->setLocalZOrder(++g_zorder);
        }
    }
#endif
    if (spriteBox.hide) s->setVisible(false);
    if (g_atmosphere.on && layout_mode() == 17 && pv[1] >= 210 && pv[1] < 335) {
        if (glyph >= 173 && glyph <= 178) g_shop_items.push_back({s, glyph - 173});
        if (glyph == 115) {
            int card = 0;
            for (int i = 0; i < 6; ++i)
                if (fabsf(pv[0] - aos5_ui::free_card_left(i)) < 3) card = i;
            for (auto &pass : g_shop_items)
                if (pass.card == card && pass.node->isVisible()) pass.node->setLocalZOrder(++g_zorder);
        }
    }
    if (g_atmosphere.on && layout_mode() == 23 && pv[0] >= 110 && pv[0] < 880 && pv[1] >= 330 && pv[1] < 405) {
        const int card = int((pv[0] - 110) / 110);
        if ((glyph >= 118 && glyph <= 123) || glyph == 268) g_shop_items.push_back({s, card});
        if (glyph == 115)
            for (auto &pass : g_shop_items)
                if (pass.card == card && pass.node->isVisible()) pass.node->setLocalZOrder(++g_zorder);
    }
    if (g_atmosphere.on && layout_mode() == aos5_ui::buy_store_mode && pv[1] >= 310 && pv[1] < 390) {
        const int card = aos5_ui::buy_store_item_card(glyph);
        if (card >= 0) g_shop_items.push_back({s, card});
        if (glyph == 115) {
            int selected = -1;
            for (int i = 0; i < 6; ++i) if (fabsf(pv[0] - aos5_ui::free_card_left(i)) < 3) selected = i;
            for (auto &pass : g_shop_items)
                if (pass.card == selected && pass.node->isVisible()) pass.node->setLocalZOrder(++g_zorder);
        }
    }
    if (weaponSlot >= 0 && aos5_ui::weapon_item(glyph)) g_weapon_items.push_back({s, weaponSlot});
    if (weaponCard) {
        // Filled cards are also drawn late as selection overlays. Restore the
        // existing icon/lock/count order above just this card, below later UI.
        for (auto &pass : g_weapon_items)
            if (pass.card == weaponSlot && pass.node->isVisible()) pass.node->setLocalZOrder(++g_zorder);
        for (auto &pass : g_weapon_quantities)
            if (pass.slot == weaponSlot && pass.node->isVisible()) pass.node->setLocalZOrder(++g_zorder);
    }
    if (g_hp_frame_drawn && glyph == 95 && pv[0] < 285 && pv[1] < 70) g_hp_bitmap_caption = s;
    if (g_hp_frame_drawn && glyph == 93 && pv[0] < 30 && pv[1] < 70 &&
        (layout_mode() == 9 || layout_mode() == 11 || layout_mode() == 13 || layout_mode() == 14)) draw_combat_hp();
    if (si->path.compare(0, 7, "img/bg/") == 0 &&
        si->path != "img/bg/bg_3.png" && si->path != "img/bg/bg_7.png" && si->path != "img/bg/bg_8.png")
        g_atmosphere.bgZ = g_zorder;
    // Reserve a layer immediately after the outdoor sky. Distant walls,
    // tiles, actors and HUD are subsequently drawn above this cloud layer.
    if (si->path == "img/bg/bg_1.png") g_atmosphere.skyZ = ++g_zorder;
    if ((si->path == "img/tile/bimg[311].png" || si->path == "img/tile/bimg[313].png") &&
        pv[0] < 960 && pv[0] + s->getContentSize().width * s->getScaleX() > 0 &&
        pv[1] < 270 && pv[1] + s->getContentSize().height * s->getScaleY() > 0)
        g_atmosphere.indoorSky = true;
    if (si->path == "img/UI/MenuUi[92].png") g_atmosphere.hudZ = g_zorder;
    if (g_trace_draw)
        rt_log("  draw %s pos=(%.1f,%.1f) scale=%.3f rgba=(%.2f,%.2f,%.2f,%.2f) rot=%.1f blend=%d flip=%d z=%d final=(%.1f,%.1f) finalScale=%.3f visible=%d finalScaleY=%.3f finalOpacity=%d finalRGB=(%d,%d,%d)",
               si->path.c_str(), pv[0], pv[1], F(scale), F(r), F(g), F(b), F(a), ang, I(blend), I(flip), s->getLocalZOrder(),
               lx, ly, F(scale) * ls * spriteBox.scale, s->isVisible(), s->getScaleY() * si->hd, (int)s->getOpacity(), (int)s->getColor().r, (int)s->getColor().g, (int)s->getColor().b);
}

static void atmosphere_tick(uint8_t *game, float dt)
{
    if (!g_atmosphere.checked) {
        g_atmosphere.checked = true;
        if (FileUtils::getInstance()->isFileExist("img/gothic/atmosphere_fog.png")) {
            g_atmosphere.farFog = Sprite::create("img/gothic/atmosphere_fog.png");
            g_atmosphere.nearFog = Sprite::create("img/gothic/atmosphere_fog.png");
            for (auto *s : {g_atmosphere.farFog, g_atmosphere.nearFog})
                if (s) { s->setAnchorPoint(Vec2(0.5f, 0.5f)); g_scene->gameRoot()->addChild(s); }
        }
        if (FileUtils::getInstance()->isFileExist("img/gothic/atmosphere_mote.png")) {
            for (int i = 0; i < 4; i++) {
                auto *s = Sprite::create("img/gothic/atmosphere_mote.png");
                if (s) { g_scene->gameRoot()->addChild(s); g_atmosphere.motes.push_back(s); }
            }
        }
        g_atmosphere.on = g_atmosphere.farFog || g_atmosphere.nearFog || !g_atmosphere.motes.empty();
    }
    if (g_atmosphere.farFog) g_atmosphere.farFog->setVisible(false);
    if (g_atmosphere.nearFog) g_atmosphere.nearFog->setVisible(false);
    for (auto *s : g_atmosphere.motes) s->setVisible(false);
    if (game && aos5_visual::sky_clouds_on(layout_mode(), g_atmosphere.skyZ, g_atmosphere.indoorSky)) {
        if (aos5_visual::sky_clouds_advance(layout_mode())) g_atmosphere.cloudSeconds += aos5_visual::effect_step(dt);
        int layer = 0;
        for (auto *s : {g_atmosphere.farFog, g_atmosphere.nearFog}) {
            const auto frame = aos5_visual::cloud_frame(g_atmosphere.cloudSeconds, layer++);
            if (!s) continue;
            const float scale = frame.width / s->getContentSize().width;
            const float height = s->getContentSize().height * scale;
            s->setScale(scale);
            s->setPosition(Vec2(frame.x, kScreenH - frame.top - height * 0.5f));
            s->setOpacity((uint8_t)frame.opacity);
            s->setLocalZOrder(g_atmosphere.skyZ);
            s->setVisible(true);
            if (g_trace_draw) rt_log("[cloud] layer=%d seconds=%.2f x=%.1f top=%.1f width=%.1f opacity=%d z=%d", layer - 1, g_atmosphere.cloudSeconds, frame.x, frame.top, frame.width, (int)s->getOpacity(), g_atmosphere.skyZ);
        }
    } else {
        // Nodes belong to gameRoot; hide and reset the loop on scene/mode exit.
        g_atmosphere.cloudSeconds = 0;
    }
    if (!game || !aos5_visual::sky_clouds_on(layout_mode(), g_atmosphere.skyZ, g_atmosphere.indoorSky)) return;
    const float scroll = (float)*(int *)(game + 0x32ba20);
    const float time = g_atmosphere.cloudSeconds;
    for (size_t i = 0; i < g_atmosphere.motes.size(); i++) {
        auto *s = g_atmosphere.motes[i];
        const float phase = (float)i * 1.71f;
        float x = fmodf(83.0f + (float)i * 157.0f - scroll * 0.08f + time * (1.3f + i * 0.11f), 1100.0f);
        if (x < 0.0f) x += 1100.0f;
        s->setPosition(Vec2(x - 70.0f, kScreenH - (50.0f + fmodf(i * 53.0f + time * 4, 210.0f))));
        s->setScale((4.0f + (i % 3)) / s->getContentSize().width);
        s->setOpacity((uint8_t)(55.0f + 15.0f * sinf(time * 0.6f + phase)));
        s->setLocalZOrder(g_atmosphere.skyZ);
        s->setVisible(true);
    }
}

/* drawPos(Vec2, Color4F, int flip, float scale) — 호출부 (r,g,b,a, scale, spr, pos, flip) */
EXT gh_long kSprite__drawPos_0047f378(A r, A g, A b, A a, A scale, A spr, A pos, A flip)
{
    float p[2] = {P<float>(pos)[0], P<float>(pos)[1]};
    draw_sprite(r, g, b, a, scale, 0, spr, (A)(uintptr_t)p, flip, 0, 0, 0, nullptr);
    return 0;
}
/* 전체 매개변수판 — (r,g,b,a, scale, angle, spr, pos, flip, blend, pivx, pivy) */
EXT gh_long kSprite__drawPos_0047ee7c(A r, A g, A b, A a, A scale, A angle, A spr, A pos, A flip, A blend, A pivx,
                                      A pivy)
{
    draw_sprite(r, g, b, a, scale, angle, spr, pos, flip, blend, pivx, pivy, nullptr);
    return 0;
}
/* 부분 영역 그리기 — (spr, pos, rx, ry, rw, rh, blend) */
EXT gh_long kSprite__drawPos_0047f88c(A spr, A pos, A rx, A ry, A rw, A rh, A blend)
{
    uint8_t *rec = P<uint8_t>(spr);
    ax::Rect sub(*(float *)(rec + KS_RECT_X) + (float)I(rx), *(float *)(rec + KS_RECT_Y) + (float)I(ry),
                 (float)I(rw), (float)I(rh));
    float p[2] = {P<float>(pos)[0], P<float>(pos)[1]};
    A one = gh_f2b(1.0f);
    draw_sprite(one, one, one, one, one, 0, spr, (A)(uintptr_t)p, 0, blend, 0, 0, &sub);
    return 0;
}

/* kScene::makeSprite(scene, layer, string path, flag) */
static Texture2D *original_mask_texture(const char *path)
{
    // Decode each restored mask once. The owned reference also keeps it alive
    // across menu cache purges; total storage is only the original 131 canvases.
    static std::unordered_map<std::string, Texture2D *> masks;
    const auto found = masks.find(path);
    if (found != masks.end()) return found->second;
    const auto *image = stickrig_runtime::original(path);
    if (!image) return nullptr;
    auto *texture = stickrig_runtime::upload(*image, std::string("aos5-original-mask:") + path);
    if (texture) {
        texture->setAntiAliasTexParameters();
        masks.emplace(path, texture);
        rt_log("[stickman-mask] source='%s' pixels=%dx%d uploadFormat=%d PMA=%d alphaUnchanged=1",
            path, image->width, image->height, (int)texture->getPixelFormat(), texture->hasPremultipliedAlpha());
    }
    return texture;
}

EXT gh_long kScene__makeSprite_0047d208(A scene, A layer, A path, A flag)
{
    (void)scene; (void)flag;
    const char *p = S(path);
    const auto stickPart = aos5_stickman::part(p);
    Texture2D *tex = aos5_stickman::rgba_texture(p) ? original_mask_texture(p)
        : Director::getInstance()->getTextureCache()->addImage(p);
    if (!tex) {
        rt_log("makeSprite: missing image %s", p);
        return 0;   // 원작은 여기서 죽는다. 복원 단계에선 기록만 남기고 계속.
    }
    uint8_t *rec = new_record(KS_SIZE, g_vt_sprite);
    auto *si = new SpriteImpl();
    si->tex = tex;
    si->path = p;
    si->layer = I(layer);
    si->hd = hd_factor(p, tex);
    si->stick = stickPart;
    stickrig_runtime::initialize(si->path, stickPart);
    si->recolor = pal_target(si->path);
    if (si->stick != aos5_stickman::Part::None) {
        // Original small masks: bilinear filtering, no mip/NPOT upload.
        tex->setAntiAliasTexParameters();
        rt_log("[stickman] source='%s' pixels=%dx%d logical=%.0fx%.0f hd=%.1f originalTexture=1 alphaUnchanged=1",
            p, tex->getPixelsWide(), tex->getPixelsHigh(), tex->getPixelsWide() / si->hd, tex->getPixelsHigh() / si->hd, si->hd);
    }
    si->ui = si->path.compare(0, 7, "img/UI/") == 0;
    tex->retain();
    *(SpriteImpl **)(rec + KS_IMPL) = si;
    *(float *)(rec + KS_W) = tex->getPixelsWide() / si->hd;   // 게임은 원본 픽셀 크기를 읽는다
    *(float *)(rec + KS_H) = tex->getPixelsHigh() / si->hd;
    g_sprites.push_back(si);
    return (gh_long)(uintptr_t)rec;
}

/* kScene::clearSprite(scene, layer, kSprite** ref) */
EXT gh_long kScene__clearSprite_0047daa8(A scene, A layer, A ref)
{
    (void)scene; (void)layer;
    A *pr = P<A>(ref);
    if (!pr || !*pr) return 0;
    SpriteImpl *si = sprite_impl(*pr);
    if (si) {
        for (auto *s : si->inst) s->removeFromParent();
        si->inst.clear();
        si->overrides.clear();
        si->alive = false;
        if (si->tex) si->tex->release();
        si->tex = nullptr;
    }
    *pr = 0;
    return 0;
}

/* ------------------------------------------------------------------ */
/* 사각형 (kDraw) — 원작은 box.png(100x100) 를 늘려 그린다               */
/* ------------------------------------------------------------------ */
struct DrawImpl { std::vector<Sprite *> inst; int used = 0; };
static std::vector<DrawImpl *> g_draws;
enum { KD_IMPL = 0x5f8, KD_SIZE = 0x600 };

EXT gh_long kScene__makeDraw_0047d650(A scene)
{
    (void)scene;
    uint8_t *rec = new_record(KD_SIZE, g_vt_draw);
    auto *di = new DrawImpl();
    *(DrawImpl **)(rec + KD_IMPL) = di;
    g_draws.push_back(di);
    return (gh_long)(uintptr_t)rec;
}
/* drawRect(r,g,b,a, kDraw*, Rect*) */
EXT gh_long kDraw__drawRect_00479ae8(A r, A g, A b, A a, A draw, A rect)
{
    if (!draw) return 0;
    DrawImpl *di = *(DrawImpl **)(P<uint8_t>(draw) + KD_IMPL);
    g_cnt_rect++;
    float *rc = P<float>(rect);
    Sprite *s;
    if (di->used < (int)di->inst.size()) s = di->inst[di->used++];
    else {
        s = Sprite::create("box.png");
        s->setAnchorPoint(Vec2(0, 1));
        g_scene->gameRoot()->addChild(s);
        di->inst.push_back(s);
        di->used++;
    }
    s->setVisible(true);
    float rectColor[3] = {F(r), F(g), F(b)};
    // The restored coupon screen draws a white fullscreen rectangle. Use the
    // generated painted backdrop for that screen while keeping its input area.
    bool couponBackdrop = g_atmosphere.on && layout_mode() == 7 &&
        rc[2] >= 950.0f && rc[3] >= 300.0f &&
        rectColor[0] > 0.9f && rectColor[1] > 0.9f && rectColor[2] > 0.9f;
    auto *rectTexture = Director::getInstance()->getTextureCache()->addImage(
        couponBackdrop ? "img/bg/bg_7.png" : "box.png");
    if (rectTexture && s->getTexture() != rectTexture) {
        s->setTexture(rectTexture);
        s->setTextureRect(Rect(0, 0, rectTexture->getPixelsWide(), rectTexture->getPixelsHigh()));
    }
    if (couponBackdrop) { rectColor[0] = 0.22f; rectColor[1] = 0.29f; rectColor[2] = 0.26f; }
    // Keep tutorial captions quiet against the new painted scenery.
    if (g_atmosphere.on && rc[2] >= 900.0f && rc[3] <= 2.0f &&
        rectColor[1] > 0.8f && rectColor[2] < 0.3f)
        { rectColor[0] = 0.37f; rectColor[1] = 0.53f; rectColor[2] = 0.46f; }
    if (g_atmosphere.on && rc[0] >= -5.0f && rc[0] <= 5.0f && rc[1] >= 70.0f && rc[1] <= 160.0f &&
        rc[2] >= 900.0f && rc[3] >= 10.0f && rc[3] <= 100.0f &&
        rectColor[0] > 0.9f && rectColor[1] > 0.9f && rectColor[2] > 0.9f && F(a) < 0.8f)
        { rectColor[0] = 0.05f; rectColor[1] = 0.11f; rectColor[2] = 0.10f; }
    s->setColor(Color3B((uint8_t)(rectColor[0] * 255.0f), (uint8_t)(rectColor[1] * 255.0f), (uint8_t)(rectColor[2] * 255.0f)));
    s->setOpacity((uint8_t)(int)(F(a) * 255.0f));
    float bw = s->getTexture()->getPixelsWide(), bh = s->getTexture()->getPixelsHigh();
    float lx = rc[0], ly = rc[1];
    float rw = rc[2], rh = rc[3];
    if (g_atmosphere.on && layout_mode() == 12 && weapon_page() == 3 &&
        lx >= 630 && lx <= 650 && ly >= 480 && ly <= 490 && rw >= 270 && rh <= 3) {
        lx = 738; ly = 482; rw = 126; rh = 1;
        s->setColor(Color3B(181, 158, 113));
    }
    float ls = layout_apply(lx, ly);
#ifdef __EMSCRIPTEN__
    if (rc[0] <= 0 && rc[2] >= 950) { lx = 0; rw = aos5_wide::width; }
    else wide_project(lx, ly);
#endif
    s->setScale(rw * ls / bw, rh * ls / bh);   // 원작: box.png(100x100) 를 폭/100, 높이/100 으로 늘림
    s->setPosition(Vec2(lx, kScreenH - ly));
    s->setLocalZOrder(++g_zorder);
    if (g_trace_draw)
        rt_log("  rect pos=(%.1f,%.1f) size=(%.1f,%.1f) rgba=(%.2f,%.2f,%.2f,%.2f) z=%d", rc[0], rc[1], rc[2], rc[3], F(r), F(g), F(b), F(a), g_zorder);
    return 0;
}

/* ------------------------------------------------------------------ */
/* 글꼴 (kFont = cocos Label)                                           */
/* ------------------------------------------------------------------ */
struct FontImpl {
    std::string path;
    float size = 20;
    bool bold = false;
    bool loggedLoaded = false, loggedFallback = false;
    std::vector<Label *> inst;
    int used = 0;
};
static std::vector<FontImpl *> g_fonts;
enum { KF_IMPL = 0x5f8, KF_SIZE = 0x600 };

EXT gh_long kScene__makeFont_0047d5c4(A scene, A path, A size)
{
    (void)scene;
    uint8_t *rec = new_record(KF_SIZE, g_vt_font);
    auto *fi = new FontImpl();
    // Every runtime kFont uses the same bundled face on Windows and Android.
    // Bitmap captions/numbers are sprites and never pass through this path.
    fi->path = aos5_ui::font_asset();
    fi->size = (float)I(size);
    rt_log("[font] requested='%s' file='%s' size=%.1f", S(path), fi->path.c_str(), fi->size);
    *(FontImpl **)(rec + KF_IMPL) = fi;
    g_fonts.push_back(fi);
    return (gh_long)(uintptr_t)rec;
}

static Label *font_next(FontImpl *fi)
{
    Label *l;
    const float size = fi->size > 0 ? fi->size : 20;
    if (fi->used < (int)fi->inst.size()) l = fi->inst[fi->used++];
    else {
        TTFConfig cfg(fi->path, size, GlyphCollection::DYNAMIC);
        cfg.bold = fi->bold;
        l = Label::createWithTTF(cfg, "");
        if (!l) {
            if (!fi->loggedFallback) rt_log("[font] FALLBACK stage=create file='%s' size=%.1f system='%s'", fi->path.c_str(), size, aos5_ui::system_font(fi->bold));
            fi->loggedFallback = true;
            l = Label::createWithSystemFont("", aos5_ui::system_font(fi->bold), size);
        } else if (!fi->loggedLoaded) {
            rt_log("[font] LOADED backend=FreeType file='%s' size=%.1f", fi->path.c_str(), size);
            fi->loggedLoaded = true;
        }
        g_scene->gameRoot()->addChild(l);
        fi->inst.push_back(l);
        fi->used++;
    }
    // Axmol's TTFConfig enables bold but does not clear a previous bold effect.
    if (!fi->bold) l->disableEffect(LabelEffect::BOLD);
    TTFConfig cur = l->getTTFConfig();
    if (cur.fontFilePath.empty()) {
        l->setSystemFontName(aos5_ui::system_font(fi->bold));
        if (l->getSystemFontSize() != size) l->setSystemFontSize(size);
    } else if (cur.fontSize != size || cur.bold != fi->bold) {
        cur.fontSize = size;
        cur.bold = fi->bold;
        if (!l->setTTFConfig(cur)) {
            if (!fi->loggedFallback) rt_log("[font] FALLBACK stage=reconfigure file='%s' size=%.1f system='%s'", fi->path.c_str(), size, aos5_ui::system_font(fi->bold));
            fi->loggedFallback = true;
            l->setSystemFontName(aos5_ui::system_font(fi->bold));
            l->setSystemFontSize(size);
        }
    }
    return l;
}

static std::string replace_bar(const char *t)
{
    std::string s(t);
    for (auto &c : s)
        if (c == '|') c = '\n';
    return aos5_ui::display_text(s);
}

struct UiLabelPass {
    Label *node;
    FontImpl *font;
    std::string text;
    float x, y;
    int align;
};
static std::vector<UiLabelPass> g_ui_label_passes;

/* 원작 drawString2(좌정렬)/drawString3(가운데정렬) 공통 */
static int draw_label(A r, A g, A b, A a, A font, A text, A pos, int width, int align, bool center)
{
    if (!font) return 0;
    FontImpl *fi = *(FontImpl **)(P<uint8_t>(font) + KF_IMPL);
    g_cnt_label++;
    std::string s = replace_bar(S(text));
    const int mode = layout_mode();
    const bool themed = g_atmosphere.on && aos5_ui::menu(mode);
    const float *pv = P<float>(pos);
    aos5_ui::TextBox box = g_atmosphere.on
        ? aos5_ui::text_box(mode, s, pv[0], pv[1], fi->size, align, g_hp_frame_drawn, weapon_page())
        : aos5_ui::TextBox{pv[0], pv[1], 0, 0, fi->size, align, false};
    const float originalSize = fi->size;
    fi->size = box.size;
    Label *l = font_next(fi);
    fi->size = originalSize;
    l->setVisible(true);
    if (g_hp_frame_drawn && s.rfind("HP:", 0) == 0 && pv[1] < 40 && g_hp_bitmap_caption)
        g_hp_bitmap_caption->setVisible(false);
    l->setColor(Color3B((uint8_t)(F(r) * 255.0f), (uint8_t)(F(g) * 255.0f), (uint8_t)(F(b) * 255.0f)));
    l->setOpacity((uint8_t)(int)(F(a) * 255.0f));
    l->setAnchorPoint(Vec2((float)box.align * 0.5f, 1.0f));
    l->setAlignment(center ? TextHAlignment::CENTER : TextHAlignment::LEFT, l->getVerticalAlignment());
    // The old menu used a pale panel behind this statistic. New painted panels
    // are dark; adjust its display color without changing its value or layout.
    if (g_atmosphere.on && s.rfind("Power:", 0) == 0 && F(r) < 0.1f && F(g) < 0.1f && F(b) < 0.1f)
        l->setColor(Color3B(239, 233, 211));
    if (g_atmosphere.on && layout_mode() == 7 && F(r) < 0.1f && F(g) < 0.1f && F(b) < 0.1f)
        l->setColor(Color3B(239, 233, 211));
    // Pooled labels must not retain a previous call's wrapping rectangle.
    // A plain drawString has unlimited width; otherwise short objective lines
    // wrap inside stale shop/menu widths and overlap the next manually drawn line.
    // The objective is already split into three separate game strings. Keep
    // each one on one line; the system Korean font can be wider than the ROM font.
    bool objectiveLine = layout_mode() == 21 && !center && width < 9999 && s.find('\n') == std::string::npos;
    l->setDimensions(width < 9999 && !objectiveLine && !box.singleLine ? (float)width : 0.0f, 0.0f);
    if (l->getString() != s) l->setString(s);
    if (themed) {
        // A single outlined label replaces the old repeated offset shadow
        // passes. This keeps dark foreground text readable on the new panels
        // without turning its four/eight shadows into a bright blurry halo.
        for (auto &pass : g_ui_label_passes)
            if (pass.font == fi && pass.text == s && pass.align == align &&
                fabsf(pass.x - pv[0]) <= 4 && fabsf(pass.y - pv[1]) <= 4)
                pass.node->setVisible(false);
        if (mode == 12 && weapon_page() == 3 && pv[0] >= 525 && pv[0] <= 540 && pv[1] >= 245 && pv[1] <= 340)
            for (auto &pass : g_ui_label_passes)
                if (fabsf(pass.x - pv[0]) <= 4 && fabsf(pass.y - pv[1]) <= 4) pass.node->setVisible(false);
        if (mode == 14) {
            // Results also redraw short heading prefixes over the full line.
            // Different fitted widths would make those redundant glyphs drift.
            for (auto &pass : g_ui_label_passes)
                if (fabsf(pass.x - pv[0]) <= 4 && fabsf(pass.y - pv[1]) <= 4) {
                    if (pass.text.size() > s.size() && pass.text.rfind(s, 0) == 0) l->setVisible(false);
                    else if (s.size() > pass.text.size() && s.rfind(pass.text, 0) == 0) pass.node->setVisible(false);
                }
        }
        g_ui_label_passes.push_back({l, fi, s, pv[0], pv[1], align});
        if (std::max(F(r), std::max(F(g), F(b))) < 0.65f)
            l->setColor(Color3B(239, 233, 211));
        l->enableOutline(Color4B(16, 25, 29, 230), 1);
    } else l->disableEffect(LabelEffect::OUTLINE);
    if (g_atmosphere.on && (aos5_ui::shop_price(mode, s, pv[0], pv[1]) ||
        (mode == 17 && pv[0] >= 180 && pv[0] <= 865 && pv[1] >= 310 && pv[1] <= 335))) {
        l->setColor(Color3B(35, 31, 24)); // Dark ink on the light paper field.
        l->disableEffect(LabelEffect::OUTLINE);
    }
    float lx = box.x, ly = box.y;
    float textScale = layout_apply(lx, ly);
    if (g_atmosphere.on && s.size() > 30 && F(r) < 0.1f && F(g) < 0.1f && F(b) < 0.1f &&
        pv[0] >= 100.0f && pv[1] >= 80.0f && pv[1] <= 160.0f)
        l->setColor(Color3B(239, 233, 211));
    if (objectiveLine && width > 0 && l->getContentSize().width > (float)width)
        textScale *= (float)width / l->getContentSize().width;
    const Size textSize = l->getContentSize();
    float fit = 1.0f;
    if (box.width > 0 && textSize.width > box.width) fit = std::min(fit, box.width / textSize.width);
    if (box.height > 0 && textSize.height > box.height) fit = std::min(fit, box.height / textSize.height);
    wide_project(lx, ly);
    l->setScale(textScale * fit); // Uniform scale preserves glyph proportions.
    l->setPosition(Vec2(lx, kScreenH - ly));
    l->setLocalZOrder(++g_zorder);
    if (g_atmosphere.on && aos5_ui::weapon_quantity(mode, s, pv[0], pv[1], weapon_page()))
        g_weapon_quantities.push_back({l, aos5_ui::weapon_slot(pv[0], pv[1])});
    if (g_trace_draw)
        rt_log("  label '%s' pos=(%.1f,%.1f) rgba=(%.2f,%.2f,%.2f,%.2f) size=%.0f z=%d final=(%.1f,%.1f) font=%.1f bounds=(%.1f,%.1f) scale=%.3f fontFile='%s'", s.c_str(), pv[0], pv[1], F(r), F(g),
               F(b), F(a), fi->size, g_zorder, lx, ly, box.size, textSize.width * textScale * fit, textSize.height * textScale * fit, textScale * fit,
               l->getTTFConfig().fontFilePath.empty() ? "SYSTEM_FALLBACK" : l->getTTFConfig().fontFilePath.c_str());
    return l->getStringNumLines();
}

static void draw_combat_hp()
{
    // GameUIImg's MBar frame 5 draws only the HP bitmap and gauge. Expose the
    // same live hero HP used by MBar case 6 without changing combat state.
    static A font = 0;
    if (!font) {
        const char *path = "";
        font = (A)kScene__makeFont_0047d5c4(0, (A)(uintptr_t)&path, 18);
    }
    const std::string value = aos5_ui::combat_hp_text(*(int *)(g_scene->game() + 0x8daec));
    const char *text = value.c_str();
    float pos[2] = {174, 7};
    const A one = gh_f2b(1.0f);
    draw_label(one, one, one, one, font, (A)(uintptr_t)&text, (A)(uintptr_t)pos, 9999, 1, false);
}

/* drawString(text, Vec2, Color4F, align) — 호출부 (r,g,b,a, font, text, pos, align) */
EXT gh_long kFont__drawString_0047ae54(A r, A g, A b, A a, A font, A text, A pos, A align)
{
    int al = I(align);
    if (al < 0 || al > 2) return 0;
    return draw_label(r, g, b, a, font, text, pos, 9999, al, false);
}
/* drawDString(text, Vec2, Color4F, size, width, align) */
EXT gh_long kFont__drawDString_0047b574(A r, A g, A b, A a, A font, A text, A pos, A size, A width, A align)
{
    if (!font) return 0;
    FontImpl *fi = *(FontImpl **)(P<uint8_t>(font) + KF_IMPL);
    fi->size = (float)I(size);
    fi->bold = false; // A pooled font must not inherit a preceding bold draw.
    return draw_label(r, g, b, a, font, text, pos, I(width), I(align), false);
}
/* drawDString2(text, Vec2, Color4F, size, width, align, bold) */
EXT gh_long kFont__drawDString2_0047b830(A r, A g, A b, A a, A font, A text, A pos, A size, A width, A align,
                                         A bold)
{
    if (!font) return 0;
    FontImpl *fi = *(FontImpl **)(P<uint8_t>(font) + KF_IMPL);
    fi->size = (float)I(size);
    fi->bold = (bold & 1) != 0;
    return draw_label(r, g, b, a, font, text, pos, I(width), I(align), true);
}

/* ------------------------------------------------------------------ */
/* 사운드 (SoundClip, 게임 메모리 안 0x18 바이트)                        */
/*   +0 int 종류(0 효과음, 1 배경음) / +8 std::string 경로 / +0x10 재생 id   */
/* ------------------------------------------------------------------ */
EXT gh_long SoundClip__SoundClip_0047e340(A self)
{
    *(void **)(P<uint8_t>(self) + 8) = IMG(0xd40318);   // 빈 문자열
    return 0;
}
EXT gh_long SoundClip___SoundClip_0047e354(A self) { (void)self; return 0; }
EXT gh_long SoundClip__loadSnd_0047e3fc(A self, A path)
{
    uint8_t *c = P<uint8_t>(self);
    *(int *)c = 0;
    FUN_009d899c((gh_long *)(c + 8), (gh_long *)(uintptr_t)path);
    AudioEngine::preload(S((A)(uintptr_t)(c + 8)));
    return 0;
}
EXT gh_long SoundClip__play_0047e570(A self, A loop)
{
    uint8_t *c = P<uint8_t>(self);
    if (*(int *)c == 0) {
        const char *p = S((A)(uintptr_t)(c + 8));
        if (*p) *(int *)(c + 0x10) = AudioEngine::play2d(p, (loop & 1) != 0, 1.0f);
    }
    return 0;
}
/* SoundClip::stop(int) — 원작도 빈 함수 */
EXT gh_long SoundClip__stop_0047e6d0(A id) { (void)id; return 0; }

/* ------------------------------------------------------------------ */
/* 파일 (kFile, 0x30 바이트: +8 위치, +0xc 크기, +0x20 데이터, +0x28 FILE*)  */
/* ------------------------------------------------------------------ */
enum { KFL_POS = 8, KFL_SIZE = 0xc, KFL_DATA = 0x20, KFL_FP = 0x28 };
static gh_long kfile_delete(A self, A, A, A);
static void *g_vtab_kfile[256];

EXT gh_long kFile__kFile_00479ebc(A self)
{
    uint8_t *f = P<uint8_t>(self);
    memset(f, 0, 0x30);
    *(void ***)f = g_vtab_kfile;
    return 0;
}
static std::string file_name(A name, A ext)
{
    const char *e = S(ext);
    return *e ? std::string(S(name)) + "." + e : std::string(S(name));
}
static bool kfile_load(uint8_t *f, const std::string &full)
{
    Data d = FileUtils::getInstance()->getDataFromFile(full);
    if (d.isNull()) return false;
    size_t n = d.getSize();
    uint8_t *buf = (uint8_t *)malloc(n ? n : 1);
    memcpy(buf, d.getBytes(), n);
    *(int *)(f + KFL_POS) = 0;
    *(int *)(f + KFL_SIZE) = (int)n;
    *(uint8_t **)(f + KFL_DATA) = buf;
    return true;
}
/* 원작 리소스 무결성 검사(bzStateGame::imgLoad): 아래 UI 이미지의 «파일 크기»가 원본과 다르면
   변조로 보고 진행 데이터를 지운다. 그래픽 리뉴얼로 파일이 바뀌어도 원본 크기를 돌려준다. */
static int original_file_size(const std::string &path)
{
    if (path == "img/UI/MenuUi[181].png") return 0xece2;
    if (path == "img/UI/MenuUi[163].png") return 0x230c;
    if (path == "img/UI/MenuUi[136].png") return 0x375c;
    return -1;
}
/* 앱 리소스에서 읽기 */
EXT gh_long kFile__rOpenR_0047a018(A self, A name, A ext)
{
    std::string path = file_name(name, ext);
    bool ok = kfile_load(P<uint8_t>(self), path);
    int orig = original_file_size(path);
    if (ok && orig >= 0) *(int *)(P<uint8_t>(self) + KFL_SIZE) = orig;
    rt_log("kFile rOpenR %s -> %d", path.c_str(), ok);
    return ok ? 1 : 0;
}
static std::string game_save_dir()
{
#ifdef _WIN32
    if (const wchar_t *sd = _wgetenv(L"AOS5_SAVE_DIR")) {
        std::string dir;
        if (!StringUtils::UTF16ToUTF8(std::u16string_view(reinterpret_cast<const char16_t *>(sd)), dir))
            return FileUtils::getInstance()->getWritablePath();
#else
    if (const char *sd = getenv("AOS5_SAVE_DIR")) {
        std::string dir(sd);
#endif
        if (!dir.empty() && dir.back() != '/') dir += '/';
        return dir;
    }
    return FileUtils::getInstance()->getWritablePath();
}
/* 쓰기 가능 경로(세이브)에서 읽기 */
EXT gh_long kFile__rOpenF_0047a2a0(A self, A name, A ext)
{
    std::string full = game_save_dir() + file_name(name, ext);
    bool ok = FileUtils::getInstance()->isFileExist(full) && kfile_load(P<uint8_t>(self), full);
    rt_log("kFile rOpenF %s -> %d", full.c_str(), ok);
    return ok ? 1 : 0;
}
EXT gh_long kFile__wOpenF_0047a5e8(A self, A name, A ext)
{
    uint8_t *f = P<uint8_t>(self);
    std::string full = game_save_dir() + file_name(name, ext);
    FILE *fp = nullptr;
#ifdef _WIN32
    std::u16string native;
    if (StringUtils::UTF8ToUTF16(full, native))
        fp = _wfopen(reinterpret_cast<const wchar_t *>(native.c_str()), L"wb");
#else
    fp = fopen(full.c_str(), "wb");
#endif
    rt_log("kFile wOpenF %s -> %d", full.c_str(), fp != nullptr);
    *(FILE **)(f + KFL_FP) = fp;
    if (fp) *(int *)(f + KFL_POS) = 0;
    return fp != nullptr;
}
EXT gh_long kFile__getSize_0047a88c(A self) { return *(int *)(P<uint8_t>(self) + KFL_SIZE); }
EXT gh_long kFile__read_0047a894(A self, A dst, A n)
{
    uint8_t *f = P<uint8_t>(self);
    memcpy(P<void>(dst), *(uint8_t **)(f + KFL_DATA) + *(int *)(f + KFL_POS), (size_t)I(n));
    *(int *)(f + KFL_POS) += I(n);
    return 0;
}
EXT gh_long kFile__readInt_0047aacc(A self)
{
    uint8_t *f = P<uint8_t>(self);
    int32_t v;
    memcpy(&v, *(uint8_t **)(f + KFL_DATA) + *(int *)(f + KFL_POS), 4);
    *(int *)(f + KFL_POS) += 4;
    return (uint32_t)v;
}
EXT gh_long kFile__readString_0047aae8(A self)
{
    uint8_t *f = P<uint8_t>(self);
    uint8_t *d = *(uint8_t **)(f + KFL_DATA);
    int pos = *(int *)(f + KFL_POS);
    int32_t n;
    memcpy(&n, d + pos, 4);
    pos += 4;
    *(int *)(f + KFL_POS) = pos;
    if (n <= 0) return 0;
    char *s = (char *)malloc((size_t)n + 1);
    memcpy(s, d + pos, (size_t)n);
    s[n] = 0;
    *(int *)(f + KFL_POS) = pos + n;
    return (gh_long)(uintptr_t)s;
}
EXT gh_long kFile__writeInt_0047aa34(A self, A v)
{
    int32_t x = I(v);
    FILE *fp = *(FILE **)(P<uint8_t>(self) + KFL_FP);
    if (fp) fwrite(&x, 4, 1, fp);
    return 0;
}
EXT gh_long kFile__writeString_0047ab60(A self, A str)
{
    const char *s = P<const char>(str);
    int32_t n = (int32_t)strlen(s);
    FILE *fp = *(FILE **)(P<uint8_t>(self) + KFL_FP);
    if (fp) { fwrite(&n, 4, 1, fp); fwrite(s, (size_t)n, 1, fp); }
    return 0;
}
EXT gh_long kFile__close_00479f64(A self)
{
    uint8_t *f = P<uint8_t>(self);
    if (*(uint8_t **)(f + KFL_DATA)) { free(*(uint8_t **)(f + KFL_DATA)); *(uint8_t **)(f + KFL_DATA) = nullptr; }
    if (*(FILE **)(f + KFL_FP)) { fclose(*(FILE **)(f + KFL_FP)); *(FILE **)(f + KFL_FP) = nullptr; }
    return 0;
}
static gh_long kfile_delete(A self, A, A, A)
{
    kFile__close_00479f64(self);
    operator_delete(P<void>(self));
    return 0;
}

/* ------------------------------------------------------------------ */
/* 날짜 (kDate 싱글턴: 원작 .bss 0xd23dd8)                               */
/* ------------------------------------------------------------------ */
EXT gh_long kDate__getSingleton_004797f8(void)
{
    static bool once = false;
    uint8_t *d = (uint8_t *)IMG(0xd23dd8);
    if (!once) {
        once = true;
        time_t t = time(nullptr);
        struct tm *tm = localtime(&t);
        *(int64_t *)d = (int64_t)t;
        *(int *)(d + 8) = tm->tm_year + 1900;
        *(int *)(d + 0xc) = tm->tm_mon + 1;
        *(int *)(d + 0x10) = tm->tm_mday;
        *(int *)(d + 0x14) = tm->tm_hour;
        *(int *)(d + 0x18) = tm->tm_min;
        *(int *)(d + 0x1c) = tm->tm_sec;
    }
    return (gh_long)(uintptr_t)d;
}
EXT gh_long kDate__getIntervalSince1970_0047991c(void) { return (gh_long)time(nullptr); }
EXT gh_long kDate__getMonthEnd_004798b4(A self)
{
    uint8_t *d = P<uint8_t>(self);
    int y = *(int *)(d + 8), m = *(int *)(d + 0xc);
    static const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)) return 29;
    return (m >= 1 && m <= 12) ? days[m - 1] : 30;
}

/* ------------------------------------------------------------------ */
/* 기타 cocos2d / std                                                   */
/* ------------------------------------------------------------------ */
EXT gh_long cocos2d__Color4F__Color4F_0060bc2c(A self, A r, A g, A b, A a)
{
    float *c = P<float>(self);
    c[0] = F(r); c[1] = F(g); c[2] = F(b); c[3] = F(a);
    return 0;
}
EXT gh_long cocos2d__Color4B__Color4B_0060b934(A self, A r, A g, A b, A a)
{
    uint8_t *c = P<uint8_t>(self);
    c[0] = (uint8_t)r; c[1] = (uint8_t)g; c[2] = (uint8_t)b; c[3] = (uint8_t)a;
    return 0;
}
EXT gh_long cocos2d__Rect__Rect_005c7150(A self, A x, A y, A w, A h)
{
    float *c = P<float>(self);
    c[0] = F(x); c[1] = F(y); c[2] = F(w); c[3] = F(h);
    return 0;
}

static std::mt19937 &rng()
{
    static std::mt19937 e((unsigned)time(nullptr));
    return e;
}
EXT gh_long cocos2d__RandomHelper__getEngine_0060b3d4(void) { return (gh_long)(uintptr_t)&rng(); }
/* uniform_int_distribution<int>::operator()(dist, engine, param{a,b}) */
EXT gh_long std__uniform_int_distribution_int___operator___00477ad0(A dist, A eng, A param)
{
    (void)dist; (void)eng;
    int *ab = P<int>(param);
    std::uniform_int_distribution<int> d(ab[0], ab[1]);
    return (uint32_t)d(rng());
}

/* printf 형식: 원작 인자는 전부 정수 레지스터(실수 서식 미사용 확인 필요 시 로그로 드러남) */
static std::string cfmt(const char *fmt, A a1, A a2, A a3, A a4)
{
    char buf[2048];
    snprintf(buf, sizeof(buf), fmt, a1, a2, a3, a4);
    return buf;
}
EXT gh_long cocos2d__log_005d21e4(A fmt, A a1, A a2, A a3, A a4)
{
    rt_log("%s", cfmt(P<const char>(fmt), a1, a2, a3, a4).c_str());
    return 0;
}
EXT gh_long gh_android_log_print(A prio, A tag, A fmt)   /* 원작의 __android_log_print 호출 */
{
    (void)prio;
    rt_log("%s: %s", P<const char>(tag), P<const char>(fmt));
    return 0;
}
/* StringUtils::format(fmt, out(std::string), arg) */
EXT gh_long cocos2d__StringUtils__format_0060c028(A fmt, A out, A a1, A a2, A a3)
{
    std::string s = cfmt(P<const char>(fmt), a1, a2, a3, 0);
    FUN_009d4eac((undefined8 *)(uintptr_t)out, (char *)s.c_str());
    return 0;
}

/* ------------------------------------------------------------------ */
/* 엔진 싱글턴 가짜 객체 — 원작 vtable 슬롯 배치 그대로                   */
/*   (슬롯 이름: re/image 의 cocos2d::UserDefault / AppDelegate vtable)    */
/* ------------------------------------------------------------------ */
struct FakeObj { void **vptr; uint8_t mem[0x800]; };
static void *g_vt_userdefault[256], *g_vt_app[256], *g_vt_director[256], *g_vt_fileutils[256], *g_vt_glview[256];
static FakeObj g_userdefault{g_vt_userdefault}, g_app{g_vt_app}, g_director{g_vt_director},
    g_fileutils{g_vt_fileutils}, g_glview{g_vt_glview};

/* GLView +0x48 getFrameSize (반환값을 첫 인자 주소에 기록) */
/* GLView::getFrameSize() — 원작은 const Size& (주소) 반환. gh_vcall 은 (수신객체, 인자…) 로 부른다.
   호출부가 결과 버퍼를 넘긴 경우(out)에도 채워 준다. */
static float g_frame_size[2];
static gh_long glv_framesize(A self, A out, A, A, A, A, A, A)
{
    (void)self;
    auto fs = Director::getInstance()->getRenderView()->getFrameSize();
    g_frame_size[0] = fs.width;
    g_frame_size[1] = fs.height;
    if (out) { P<float>(out)[0] = fs.width; P<float>(out)[1] = fs.height; }
    return (gh_long)(uintptr_t)g_frame_size;
}

/* UserDefault — 원작 키 그대로 Axmol UserDefault 에 저장 */
static gh_long ud_getBool(A, A key, A def, A) { return UserDefault::getInstance()->getBoolForKey(P<const char>(key), (def & 1) != 0); }
static gh_long ud_getInt(A, A key, A def, A) { return (uint32_t)UserDefault::getInstance()->getIntegerForKey(P<const char>(key), I(def)); }
static gh_long ud_setBool(A, A key, A v, A) { UserDefault::getInstance()->setBoolForKey(P<const char>(key), (v & 1) != 0); return 0; }
static gh_long ud_setInt(A, A key, A v, A) { UserDefault::getInstance()->setIntegerForKey(P<const char>(key), I(v)); return 0; }
static gh_long ud_flush(A, A, A, A) { UserDefault::getInstance()->flush(); return 0; }
static gh_long ud_delete(A, A key, A, A) { UserDefault::getInstance()->deleteValueForKey(P<const char>(key)); return 0; }

/* Application(AppDelegate) */
static gh_long app_lang(A, A, A, A) { return 8; }   /* cocos2d::LanguageType::KOREAN */
static gh_long app_langcode(A, A, A, A) { return (gh_long)(uintptr_t)"ko"; }
static gh_long app_platform(A, A, A, A) { return 3; }   /* Platform::OS_ANDROID — 원작 안드로이드 빌드 동작 유지 */
static gh_long app_openurl(A, A url, A, A) { rt_log("openURL (blocked): %s", S(url)); return 1; }

static void init_singletons()
{
    for (auto *t : {g_vt_userdefault, g_vt_app, g_vt_director, g_vt_fileutils, g_vt_glview})
        for (int i = 0; i < 256; i++) t[i] = g_vtab_trap[i];
    g_vt_userdefault[0] = (void *)ud_getBool;
    g_vt_userdefault[1] = (void *)ud_getInt;
    g_vt_userdefault[6] = (void *)ud_setBool;
    g_vt_userdefault[7] = (void *)ud_setInt;
    g_vt_userdefault[12] = (void *)ud_flush;
    g_vt_userdefault[13] = (void *)ud_delete;
    g_vt_glview[0x48 / 8] = (void *)glv_framesize;
    *(FakeObj **)((uint8_t *)&g_director + 0x148) = &g_glview;   /* Director::_openGLView */
    g_vt_app[0x40 / 8] = (void *)app_lang;
    g_vt_app[0x48 / 8] = (void *)app_langcode;
    g_vt_app[0x50 / 8] = (void *)app_platform;
    g_vt_app[0x60 / 8] = (void *)app_openurl;
}

EXT gh_long cocos2d__UserDefault__getInstance_00600b04(void) { return (gh_long)(uintptr_t)&g_userdefault; }
EXT gh_long cocos2d__Application__getInstance_00484a3c(void) { return (gh_long)(uintptr_t)&g_app; }
EXT gh_long cocos2d__Director__getInstance_005dff80(void) { return (gh_long)(uintptr_t)&g_director; }
EXT gh_long cocos2d__FileUtils__getInstance_00488d1c(void) { return (gh_long)(uintptr_t)&g_fileutils; }
/* 네트워크: 원작 서버가 없으므로 오프라인으로 동작시킨다 */
EXT gh_long cocos2d__Application__getNetStatus_004862f4(void) { return 0; }
EXT gh_long cocos2d__UserDefault__getIntegerForKey_005fb92c(A self, A key)
{
    (void)self;
    return (uint32_t)UserDefault::getInstance()->getIntegerForKey(P<const char>(key), 0);
}

/* kScene::getSysInfo(scene, kind, out) — 0: 언어 코드, 1~5: 기기 정보 */
EXT gh_long kScene__getSysInfo_0047e070(A scene, A kind, A out)
{
    (void)scene;
    char *o = P<char>(out);
    o[0] = 0;
    if (I(kind) == 0) strcpy(o, Application::getInstance()->getCurrentLanguageCode());
    return 0;
}

/* HTTP (쿠폰·공지 서버). 원작 서버 없음 → 실패 반환. 서버 재구축 시 교체. */
EXT gh_long kScene__httpPost_0047e198(A scene, A url, A body, A res)
{
    (void)scene; (void)body;
    rt_log("httpPost (disabled): %s", P<const char>(url));
    uint64_t *r = P<uint64_t>(res);
    r[0] = 0; r[1] = 0;
    return 0;
}
EXT gh_long kScene__clearResData_0047e310(A scene, A res)
{
    (void)scene;
    uint64_t *r = P<uint64_t>(res);
    r[1] = 0;
    if (r[0]) { free(P<void>(r[0])); r[0] = 0; }
    return 0;
}

/* ------------------------------------------------------------------ */
/* Ad credentials/SDK are not configured in this build. Report unavailable;
 * never synthesize a watched-ad completion or a reward. */
/* ------------------------------------------------------------------ */
#include "rt_ads.inc"

/* ------------------------------------------------------------------ */
/* 기록 블록 가상 슬롯 — 원작 cocos2d::Sprite / Label vtable 배치 그대로   */
/*   (re/image: cocos2d::Sprite::vtable 0xcd3360, Label 0xccd030)         */
/*   게임은 init 에서 앵커·크기를 정하고, 그리기 틱 사이에 위치를 읽는다.   */
/*   대상 = 0번(원본) 인스턴스.                                           */
/* ------------------------------------------------------------------ */
static Node *primary_node(A self)
{
    if (!self) return nullptr;
    void **vt = *(void ***)(uintptr_t)self;
    if (vt == g_vt_sprite) {
        SpriteImpl *si = sprite_impl(self);
        if (!si || !si->tex) return nullptr;
        if (si->inst.empty()) { sprite_next_instance(si); si->used = 0; }
        return si->inst[0];
    }
    if (vt == g_vt_font) {
        FontImpl *fi = *(FontImpl **)(P<uint8_t>(self) + KF_IMPL);
        if (fi->inst.empty()) { font_next(fi); fi->used = 0; }
        return fi->inst[0];
    }
    if (vt == g_vt_draw) {
        DrawImpl *di = *(DrawImpl **)(P<uint8_t>(self) + KD_IMPL);
        if (di->inst.empty()) {
            Sprite *sp = Sprite::create("box.png");
            sp->setAnchorPoint(Vec2(0, 1));
            sp->setVisible(false);
            g_scene->gameRoot()->addChild(sp);
            di->inst.push_back(sp);
        }
        return di->inst[0];
    }
    return nullptr;
}
typedef A AA;
static gh_long n_setZ(AA s, AA z, AA, AA, AA, AA, AA, AA) { if (auto *n = primary_node(s)) n->setLocalZOrder(I(z)); return 0; }
static gh_long n_getZ(AA s, AA, AA, AA, AA, AA, AA, AA) { auto *n = primary_node(s); return n ? n->getLocalZOrder() : 0; }
static gh_long n_setScaleY(AA s, AA v, AA, AA, AA, AA, AA, AA) { if (auto *n = primary_node(s)) n->setScaleY(F(v)); return 0; }
static gh_long n_setScale(AA s, AA v, AA, AA, AA, AA, AA, AA) { if (auto *n = primary_node(s)) n->setScale(F(v)); return 0; }
static gh_long n_setPos(AA s, AA pv, AA, AA, AA, AA, AA, AA)
{
    if (auto *n = primary_node(s)) { float *p = P<float>(pv); n->setPosition(Vec2(p[0], p[1])); }
    return 0;
}
static float n_getX(AA s, AA, AA, AA, AA, AA, AA, AA) { auto *n = primary_node(s); return n ? n->getPositionX() : 0.0f; }
static float n_getY(AA s, AA, AA, AA, AA, AA, AA, AA) { auto *n = primary_node(s); return n ? n->getPositionY() : 0.0f; }
static gh_long n_setAnchor(AA s, AA pv, AA, AA, AA, AA, AA, AA)
{
    if (auto *n = primary_node(s)) { float *p = P<float>(pv); n->setAnchorPoint(Vec2(p[0], p[1])); }
    return 0;
}
// Original cocos getContentSize returns a reference to Size, not a float.
// Returning physical texture dimensions also shifts centered panels with 2x art.
static gh_long n_getSize(AA s, AA, AA, AA, AA, AA, AA, AA)
{
    if (!s) return 0;
    if (*(void ***)(uintptr_t)s == g_vt_sprite)
        return (gh_long)(uintptr_t)(P<uint8_t>(s) + KS_W);
    auto *n = primary_node(s);
    return n ? (gh_long)(uintptr_t)&n->getContentSize() : 0;
}
static gh_long n_setVisible(AA s, AA v, AA, AA, AA, AA, AA, AA) { if (auto *n = primary_node(s)) n->setVisible((v & 1) != 0); return 0; }
static gh_long n_isVisible(AA s, AA, AA, AA, AA, AA, AA, AA) { auto *n = primary_node(s); return n && n->isVisible() ? 1 : 0; }
static gh_long n_setRot(AA s, AA v, AA, AA, AA, AA, AA, AA) { if (auto *n = primary_node(s)) n->setRotation(F(v)); return 0; }
static gh_long n_getTag(AA, AA, AA, AA, AA, AA, AA, AA) { return 0x12; }   /* >0: 원작 updateScene 이 숨기는 대상 */
static gh_long n_setOpacity(AA s, AA v, AA, AA, AA, AA, AA, AA) { if (auto *n = primary_node(s)) n->setOpacity((uint8_t)v); return 0; }
static gh_long n_setColor(AA s, AA cv, AA, AA, AA, AA, AA, AA)
{
    if (auto *n = primary_node(s)) { uint8_t *c = P<uint8_t>(cv); n->setColor(Color3B(c[0], c[1], c[2])); }
    return 0;
}
static gh_long s_setTexRect(AA s, AA rv, AA, AA, AA, AA, AA, AA)
{
    SpriteImpl *si = (*(void ***)(uintptr_t)s == g_vt_sprite) ? sprite_impl(s) : nullptr;
    if (auto *n = dynamic_cast<Sprite *>(primary_node(s))) {
        float *r = P<float>(rv);
        float k = si ? si->hd : 1.0f;
        n->setTextureRect(ax::Rect(r[0] * k, r[1] * k, r[2] * k, r[3] * k));
    }
    return 0;
}
static gh_long l_setFontSize(AA s, AA v, AA, AA, AA, AA, AA, AA)
{
    FontImpl *fi = *(FontImpl **)(P<uint8_t>(s) + KF_IMPL);
    fi->size = F(v);
    return 0;
}
static gh_long l_setString(AA s, AA str, AA, AA, AA, AA, AA, AA)
{
    if (auto *l = dynamic_cast<Label *>(primary_node(s))) l->setString(replace_bar(S(str)));
    return 0;
}

static void init_record_vtables()
{
    for (auto *t : {g_vt_sprite, g_vt_font, g_vt_draw, g_vt_game})
        for (int i = 0; i < 256; i++) t[i] = g_vtab_trap[i];
    for (auto *t : {g_vt_sprite, g_vt_font, g_vt_draw}) {
        t[0x18 / 8] = (void *)n_setZ;       t[0x38 / 8] = (void *)n_getZ;
        t[0x60 / 8] = (void *)n_setScaleY;  t[0x90 / 8] = (void *)n_setScale;
        t[0x98 / 8] = (void *)n_setPos;     t[0xe0 / 8] = (void *)n_getX;
        t[0xf0 / 8] = (void *)n_getY;       t[0x148 / 8] = (void *)n_setAnchor;
        t[0x168 / 8] = (void *)n_getSize;   t[0x170 / 8] = (void *)n_setVisible;
        t[0x178 / 8] = (void *)n_isVisible; t[0x180 / 8] = (void *)n_setRot;
        t[0x2b8 / 8] = (void *)n_getTag;    t[0x490 / 8] = (void *)n_setOpacity;
        t[0x4c0 / 8] = (void *)n_setColor;
    }
    g_vt_sprite[0x550 / 8] = (void *)s_setTexRect;
    g_vt_draw[0x550 / 8] = (void *)s_setTexRect;
    g_vt_font[0x568 / 8] = (void *)l_setFontSize;
    g_vt_font[0x580 / 8] = (void *)l_setString;
}

/* ------------------------------------------------------------------ */
/* 호스트 장면                                                          */
/* ------------------------------------------------------------------ */
extern "C" {
int aos5_rt_load_image(const void *img, size_t img_size, const uint32_t *rel, size_t nrel);
gh_long bzStateGame__bzStateGame_0039d708(uint64_t);
gh_long bzStateGame__startState(uint64_t);
gh_long bzStateGame__drawScene(uint64_t, uint64_t);
gh_long bzStateGame__handleEvent(uint64_t, uint64_t);
gh_long bzStateGame__update(uint64_t, uint64_t);
gh_long bzStateGame__completeTransaction(uint64_t, uint64_t, uint64_t);
gh_long bzStateGame__completeTransaction2(uint64_t);
gh_long bzStateGame__restoreTransaction(uint64_t, uint64_t, uint64_t);
gh_long bzStateGame__failedTransaction(uint64_t, uint64_t, uint64_t);
gh_long bzStateGame__productsRequest(uint64_t);
}
/* 원작 bzStateGame vtable (re/image 0xcc2590) 중 게임 코드가 부르는 슬롯 → 재컴파일 함수 */
static void init_game_vtable()
{
    g_vt_game[0x3d8 / 8] = (void *)bzStateGame__update;
    g_vt_game[0x538 / 8] = (void *)bzStateGame__startState;
    g_vt_game[0x540 / 8] = (void *)bzStateGame__drawScene;
    g_vt_game[0x548 / 8] = (void *)bzStateGame__handleEvent;
    g_vt_game[0x550 / 8] = (void *)bzStateGame__completeTransaction;
    g_vt_game[0x558 / 8] = (void *)bzStateGame__completeTransaction2;
    g_vt_game[0x560 / 8] = (void *)bzStateGame__restoreTransaction;
    g_vt_game[0x568 / 8] = (void *)bzStateGame__failedTransaction;
    g_vt_game[0x570 / 8] = (void *)bzStateGame__productsRequest;
}

static const size_t kGameObjectSize = 0x32c9d8;   // AppDelegate: operator new(0x32c9d8)

bool Aos5Scene::init()
{
    if (!Scene::init()) return false;
    aos5_diag_install();
    g_scene = this;
    // 진단용: AOS5_SAVE_DIR 로 세이브 위치를 바꿔 «처음 실행» 상태를 재현한다
    if (const char *sd = getenv("AOS5_SAVE_DIR")) {
        std::string dir = game_save_dir();
        FileUtils::getInstance()->createDirectories(dir);
        FileUtils::getInstance()->setWritablePath(dir);
        // Android's FileUtils keeps its app directory despite setWritablePath.
        // UserDefault prepends that native path, so pass only the relative prefix.
        const std::string native = FileUtils::getInstance()->getNativeWritableAbsolutePath();
        if (dir.compare(0, native.size(), native) == 0)
            UserDefault::setFileName(dir.substr(native.size()));
        else
            rt_log("QA UserDefault path is outside native writable directory: %s", dir.c_str());
        rt_log("save dir: %s", dir.c_str());
    }
    init_vtab();
    init_singletons();
    init_record_vtables();
    init_game_vtable();
    load_img_sizes();
    load_char_palette();
    load_ui_layout();
    for (int i = 0; i < 256; i++) g_vtab_kfile[i] = g_vtab_trap[i];
    g_vtab_kfile[1] = (void *)kfile_delete;

    _root = Node::create();
    addChild(_root);

    Data img = FileUtils::getInstance()->getDataFromFile("aos5core/image.bin");
    Data rel = FileUtils::getInstance()->getDataFromFile("aos5core/reloc.bin");
    if (img.isNull() || rel.isNull() ||
        aos5_rt_load_image(img.getBytes(), img.getSize(), (const uint32_t *)rel.getBytes(), rel.getSize() / 4) != 0) {
        rt_log("failed to load original data image");
        return false;
    }

    rt_log("image loaded");
    _game = (uint8_t *)calloc(1, kGameObjectSize);
    // 진단용: AOS5_WATCH=오프셋hex (또는 «틱:오프셋hex» — 그 틱부터) — 게임 객체의 그 4바이트에 쓰기가
    // 일어날 때마다(값이 바뀔 때) 호출 스택 기록
    if (const char *w = getenv("AOS5_WATCH"))
        if (*w && !strchr(w, ':')) aos5_watch_write(_game + strtoul(w, nullptr, 16));
    bzStateGame__bzStateGame_0039d708((uint64_t)(uintptr_t)_game);
    *(void ***)_game = g_vt_game;   // 원작 vtable(코드 주소)은 부를 수 없으므로 재컴파일 함수 표로 교체
    // kScene::init 이 설정하던 필드 (원작 0x47ca58)
    *(int *)(_game + 0x380) = 0;
    *(int *)(_game + 0x368) = 5000;
    *(int *)(_game + 0x370) = 5000;
    *(uint64_t *)(_game + 0x378) = 0x1000000001388ULL;
    *(int *)(_game + 0x310) = 0x46;
    rt_log("constructed; map@0x3d0 hdr=%p root=%p left=%p right=%p", _game + 0x3d8, *(void **)(_game + 0x3e0),
           *(void **)(_game + 0x3e8), *(void **)(_game + 0x3f0));
    rt_log("constructed; startState");
    bzStateGame__startState((uint64_t)(uintptr_t)_game);
    rt_log("startState done");

#ifndef __EMSCRIPTEN__
    auto touch = EventListenerTouchAllAtOnce::create();
    touch->onTouchesBegan = [this](const std::vector<Touch *> &t, Event *) { sendTouches(t, 0); };
    touch->onTouchesMoved = [this](const std::vector<Touch *> &t, Event *) { sendTouches(t, 1); };
    touch->onTouchesEnded = [this](const std::vector<Touch *> &t, Event *) { sendTouches(t, 2); };
    touch->onTouchesCancelled = [this](const std::vector<Touch *> &t, Event *) { sendTouches(t, 2); };
    _eventDispatcher->addEventListenerWithSceneGraphPriority(touch, this);
    auto key = EventListenerKeyboard::create();
    key->onKeyPressed = [this](EventKeyboard::KeyCode k, Event *) {
        if (k == EventKeyboard::KeyCode::KEY_BACK || k == EventKeyboard::KeyCode::KEY_ESCAPE) {
            uint32_t ev[8] = {4};
            bzStateGame__handleEvent((uint64_t)(uintptr_t)_game, (uint64_t)(uintptr_t)ev);
        }
    };
    _eventDispatcher->addEventListenerWithSceneGraphPriority(key, this);
#endif

    // 원작: Director 30fps + 게임 틱 0.06초 (kScene::init schedule)
    // 진단용: AOS5_FAST=N 이면 매 프레임 게임 틱을 N번 돌린다 (창이 가려져 프레임이 늦춰져도 자동 테스트가 진행되게)
    if (getenv("AOS5_FAST") && atoi(getenv("AOS5_FAST")) > 0)
        schedule(AX_SCHEDULE_SELECTOR(Aos5Scene::fastTick), 0.0f);
    else
        schedule(AX_SCHEDULE_SELECTOR(Aos5Scene::tick), 0.06f);
    return true;
}

void Aos5Scene::sendTouches(const std::vector<Touch *> &touches, int phase)
{
    for (auto *t : touches) {
        Vec2 p = t->getLocation();   // 설계 해상도 960x640, 원점 좌하단
        if (phase != 2 && (p.x < 0 || p.x > 960.0f)) continue;
        float tx = p.x, ty = kScreenH - p.y;
        if (!layout_touch(tx, ty, phase)) continue;   // 새 UI 배치: 옮긴 버튼 → 원래 자리
        struct { int32_t type, pad; float x, y; int32_t count, pad2; int32_t phase, pad3; } ev{};
        ev.type = 0;
        ev.x = tx * 0.5f;                  // 원작 convertTouchCoord: 480x320 논리 좌표
        ev.y = ty * 0.5f;
        ev.count = (int32_t)touches.size();
        ev.phase = phase;
        bzStateGame__handleEvent((uint64_t)(uintptr_t)_game, (uint64_t)(uintptr_t)&ev);
    }
}

#ifdef __EMSCRIPTEN__
// Browser Pointer Events preserve each finger independently. All coordinates
// still pass through the same layout mapping as the Android touch path.
#include <emscripten/emscripten.h>
extern "C" EMSCRIPTEN_KEEPALIVE int aos5_web_pointer(float x, float y, int phase, int count)
{
    if (!g_scene || !g_scene->game() || phase < 0 || phase > 2) return 0;
    aos5_wide::Point p{x,y};
    if (!aos5_wide::unproject(p, g_safe_area, wide_mode(), phase)) return 0;
    x = p.x; y = p.y;
    if (!layout_touch(x, y, phase)) return 0;
    OriginalUiScope scope(g_scene->game());
    struct { int32_t type, pad; float x, y; int32_t count, pad2; int32_t phase, pad3; } ev{};
    ev.x = x * 0.5f; ev.y = y * 0.5f;
    ev.count = std::max(1, count); ev.phase = phase;
    bzStateGame__handleEvent((uint64_t)(uintptr_t)g_scene->game(), (uint64_t)(uintptr_t)&ev);
    return 1;
}
extern "C" EMSCRIPTEN_KEEPALIVE void aos5_web_back()
{
    if (!g_scene || !g_scene->game()) return;
    OriginalUiScope scope(g_scene->game());
    uint32_t ev[8] = {4};
    bzStateGame__handleEvent((uint64_t)(uintptr_t)g_scene->game(), (uint64_t)(uintptr_t)ev);
}
extern "C" EMSCRIPTEN_KEEPALIVE float aos5_web_project(float x, float y, int axis)
{
    auto p = aos5_wide::controls(wide_mode()) ? aos5_wide::hud({x,y},g_safe_area) : aos5_wide::menu({x,y});
    return axis == 0 ? p.x : p.y;
}
extern "C" EMSCRIPTEN_KEEPALIVE void aos5_web_safearea(float left, float top, float right, float bottom)
{
    g_safe_area = {std::clamp(left,0.0f,130.0f),std::clamp(top,0.0f,70.0f),
                   std::clamp(right,0.0f,130.0f),std::clamp(bottom,0.0f,80.0f)};
}
extern "C" EMSCRIPTEN_KEEPALIVE int aos5_web_state(int key)
{
    if (!g_scene || !g_scene->game()) return -1;
    auto g = g_scene->game();
    switch (key) {
    case 0: return *(int *)(g + 0x1ae8); // screen mode
    case 1: return g_tick;
    case 2: return *(int *)(g + 0x8dac8); // hero x
    case 3: return *(int *)(g + 0x8dacc); // hero y
    case 4: return *(int *)(g + 0x8daec); // hero HP
    case 5: return *(int *)(g + 0x8dae0); // hero animation state
    case 6: return *(int *)(g + 0x32ab00); // original staged resource loading
    case 7: return *(int *)(g + 0x8dac8) + *(int *)(g + 0x32ba20); // hero world x (camera scroll included)
    case 8: return *(int *)(g + 0x8daf0); // current pose; different attacks can share a state
    case 9: return *(int *)(g + 0x32c150); // remaining special attacks
    case 10: return *(int *)(g + 0x1158); // logical world width
    case 11: return *(int *)(g + 0x32ba20); // camera scroll
    default: return -1;
    }
}
extern "C" EMSCRIPTEN_KEEPALIVE void aos5_web_flush()
{
    UserDefault::getInstance()->flush();
}
extern "C" EMSCRIPTEN_KEEPALIVE void aos5_web_pause(int hidden)
{
    if (hidden) {
        Director::getInstance()->stopAnimation();
        AudioEngine::pauseAll();
    } else {
        Director::getInstance()->startAnimation();
        AudioEngine::resumeAll();
    }
}
#endif

void Aos5Scene::fastTick(float dt)
{
    int n = atoi(getenv("AOS5_FAST"));
    for (int i = 0; i < n; i++) tick(0.06f);
}

void Aos5Scene::tick(float dt)
{
#ifdef __EMSCRIPTEN__
    wide_dimensions(_game);
#endif
    g_buy_store_context = 0;
    // 원작 kScene::updateScene: 모든 게임 노드를 숨기고 zorder 를 1 로 되돌린 뒤 drawScene
    for (auto *si : g_sprites) {
        for (auto *n : si->inst) n->setVisible(false);
        si->used = 0;
        si->overrides.resetFrame();
    }
    for (auto *di : g_draws) {
        for (auto *n : di->inst) n->setVisible(false);
        di->used = 0;
    }
    for (auto *fi : g_fonts) {
        for (auto *n : fi->inst) n->setVisible(false);
        fi->used = 0;
    }
    g_zorder = 1;
    stickrig_runtime::haloLayers.clear();
    if(aos5_visual::sky_clouds_advance(layout_mode())) stickrig_runtime::auraSeconds+=aos5_visual::effect_step(dt);
    if (!stickrig_runtime::contexts.empty()) {
        rt_log("[stickrig] unbalanced record scope discarded at frame boundary");
        stickrig_runtime::contexts.clear();
    }
    g_ui_label_passes.clear();
    g_weapon_quantities.clear();
    g_weapon_items.clear();
    g_shop_items.clear();
    g_hp_frame_drawn = false;
    g_hp_bitmap_caption = nullptr;
    g_atmosphere.bgZ = g_atmosphere.hudZ = 0;
    g_atmosphere.skyZ = 0;
    g_atmosphere.effectsZ = 0;
    g_atmosphere.indoorSky = false;
    *(int *)IMG(0xd23dd0) = 1;   // 원작 전역 zorder
    g_cnt_sprite = g_cnt_label = g_cnt_rect = 0;
    // 진단용 자동 터치: AOS5_TAPS="틱:x,y;틱:x,y,누름틱" (화면 좌표 960x640, 원점 좌상단).
    // 틱에 누르고 «누름틱»(기본 2) 뒤 뗀다 — 이동 버튼처럼 길게 누르는 입력은 누름틱을 크게.
    if (const char *taps = getenv("AOS5_TAPS")) {
        std::string all = taps;
        size_t i = 0;
        while (i < all.size()) {
            size_t e = all.find(';', i);
            if (e == std::string::npos) e = all.size();
            int tk = 0, hold = 2; float x = 0, y = 0;
            if (sscanf(all.substr(i, e - i).c_str(), "%d:%f,%f,%d", &tk, &x, &y, &hold) >= 3) {
                if (hold < 1) hold = 1;
                int phase = (g_tick == tk) ? 0 : (g_tick == tk + hold) ? 2 : -1;
                float tx = x, ty = y;
                if (phase >= 0 && layout_touch(tx, ty, phase)) {   // 자동 입력도 화면 좌표 기준 (새 배치 반영)
                    struct { int32_t type, pad; float x, y; int32_t count, pad2; int32_t phase, pad3; } ev{};
                    ev.x = tx * 0.5f; ev.y = ty * 0.5f; ev.count = 1; ev.phase = phase;
                    rt_log("auto-tap tick %d phase %d at (%.0f,%.0f)", g_tick, phase, x, y);
                    bzStateGame__handleEvent((uint64_t)(uintptr_t)_game, (uint64_t)(uintptr_t)&ev);
                }
            }
            i = e + 1;
        }
    }
    g_trace_draw = (g_tick % 150 == 5);
    // 진단용: AOS5_TRACE_TICKS="1880,1900" — 그 틱의 그리기 목록도 로그로
    if (const char *tt = getenv("AOS5_TRACE_TICKS")) {
        std::string t = std::string(",") + tt + ",";
        if (t.find("," + std::to_string(g_tick) + ",") != std::string::npos) g_trace_draw = true;
    }
    bzStateGame__drawScene((uint64_t)(uintptr_t)_game, gh_f2b(dt));
    atmosphere_tick(_game, dt);
    fx_tick(_game, dt);   // Presentation only; original combat state is read, never changed.
    g_trace_draw = false;
    // 진단용 화면 저장: 환경변수 AOS5_SHOT_TICKS="200,400" 에 적힌 틱마다 쓰기 경로에 PNG 저장
    if (const char *ticks = getenv("AOS5_SHOT_TICKS")) {
        std::string t = std::string(",") + ticks + ",";
        std::string key = "," + std::to_string(g_tick) + ",";
        if (t.find(key) != std::string::npos) {
            std::string file = game_save_dir() + "aos5_shot_" + std::to_string(g_tick) + ".png";
            utils::captureScreen([file](bool ok, std::string_view) { rt_log("screenshot %s: %s", file.c_str(), ok ? "ok" : "FAILED"); }, file);
        }
    }
    if (g_tick++ % 30 == 0)
        rt_log("tick %d: state=%d mode=%d sprites=%d labels=%d rects=%d (textures %zu)", g_tick,
               *(int *)(_game + 0x1aec), *(int *)(_game + 0x1ae8), g_cnt_sprite, g_cnt_label, g_cnt_rect,
               g_sprites.size());
    if (const char *w = getenv("AOS5_WATCH")) {
        int tk = 0; unsigned off = 0;
        if (strchr(w, ':') && sscanf(w, "%d:%x", &tk, &off) == 2 && tk == g_tick) aos5_watch_write(_game + off);
    }
    // 진단용: AOS5_CHARS="틱,틱" — 그 틱에 살아 있는 캐릭터 슬롯(게임+0x8dac8, 0x288 간격) 요약
    if (const char *ct = getenv("AOS5_CHARS")) {
        std::string t = std::string(",") + ct + ",";
        if (t.find("," + std::to_string(g_tick) + ",") != std::string::npos) {
            int n = *(int *)(_game + 0x32b824);
            rt_log("chars tick %d (count field %d, scroll %d,%d)", g_tick, n, *(int *)(_game + 0x32ba20),
                   *(int *)(_game + 0x32ba24));
            for (int i = 0; i < 200; i++) {
                int *c = (int *)(_game + 0x8dac8 + i * 0x288);
                if (c[9] <= 0 && c[0] == 0 && c[1] == 0) continue;
                rt_log("  #%d x=%d y=%d f10=%d f14=%d state=%d f1c=%d f20=%d hp24=%d f28=%d wtype=%d", i, c[0], c[1],
                       c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[0x13]);
            }
        }
    }
    // 진단용: AOS5_DUMP="틱:오프셋hex:길이hex" — 그 틱에 게임 객체 메모리를 로그로 (여러 개는 ; 로)
    if (const char *dump = getenv("AOS5_DUMP")) {
        std::string all = dump;
        size_t i = 0;
        while (i < all.size()) {
            size_t e = all.find(';', i);
            if (e == std::string::npos) e = all.size();
            int tk = 0; unsigned off = 0, len = 0;
            if (sscanf(all.substr(i, e - i).c_str(), "%d:%x:%x", &tk, &off, &len) == 3 && tk == g_tick) {
                rt_log("dump tick %d game+0x%x len 0x%x", g_tick, off, len);
                for (unsigned o = 0; o < len; o += 16) {
                    char line[160];
                    int n = snprintf(line, sizeof(line), "  %06x:", off + o);
                    for (unsigned b = 0; b < 16 && o + b < len; b += 4)
                        n += snprintf(line + n, sizeof(line) - n, " %08x", *(uint32_t *)(_game + off + o + b));
                    rt_log("%s", line);
                }
            }
            i = e + 1;
        }
    }
    // 진단용: AOS5_EXIT_TICK=N 이면 N 틱에서 종료 (자동 테스트가 정해진 지점까지만 돌게)
    static int exit_tick = getenv("AOS5_EXIT_TICK") ? atoi(getenv("AOS5_EXIT_TICK")) : 0;
    if (exit_tick > 0 && g_tick == exit_tick) {
        rt_log("exit at tick %d (AOS5_EXIT_TICK)", g_tick);
        Director::getInstance()->end();
    }
}

/* 자리표시 함수(rt_autostub.c)가 처음 불릴 때 */
EXT void aos5_stub_hit(const char *name) { rt_log("STUB called: %s", name); }

/* cocos2d::StringUtils::toString<int>(int) — 원작은 std::ostringstream. 결과 std::string 은 숨은 주소(x8)로.
   Ghidra 표기(FixSret2): (결과주소 x8, 값) */
EXT gh_long cocos2d__StringUtils__toString_int__003b434c(A ret, A value)
{

    char buf[32];
    snprintf(buf, sizeof(buf), "%d", I(value));
    FUN_009d4eac((uint64_t *)(uintptr_t)ret, buf);
    return (gh_long)ret;
}

/* cocos2d::Application::OnInterstitial(n) — 원작 엔진 개조분: 자바 광고 SDK 로 전면 광고를 띄우고,
   닫히면 JNI onCloseiAdCb → 광고 중개 계층 → 게임 콜백 InterstitialClose 가 로딩 표시(+0xba8)를 끈다.
   복원판(광고 SDK 없음): 광고가 즉시 닫힌 것으로 처리한다. */
extern "C" gh_long InterstitialClose(uint64_t);
EXT gh_long cocos2d__Application__OnInterstitial_00484e24(A app, A kind)
{
    (void)app;
    rt_log("OnInterstitial(%d) -> closed immediately (no ad SDK)", I(kind));
    InterstitialClose((uint64_t)(uintptr_t)"");
    return 0;
}
