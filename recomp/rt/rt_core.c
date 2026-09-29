/*
 * rt_core.c — 재컴파일 코드의 최하층 런타임.
 *  - 원작 데이터 이미지(IMG) 적재·재배치
 *  - 스택 보호용 TLS 더미
 *  - operator new/delete
 *  - 원작에 정적 링크돼 있던 GCC(구 ABI) COW std::string 함수들 (FUN_009d....)
 *
 * std::string 표현 (libstdc++ COW):
 *   객체 = char* (문자열 본문을 가리킴)
 *   본문 앞 0x18 바이트 = Rep { size_t length; size_t capacity; int refcount; }
 *   refcount: -1 누수(공유 불가), 0 단독 소유, n>0 공유 n+1명
 *   빈 문자열 Rep 는 원작 전역 DAT_00d40300 (본문 0x00d40318)
 */
#include "gh.h"
#include "aos5_global_strings.h"

void FUN_009d4eac(undefined8 *out, char *s);

uint8_t *g_aos5_img;
uint8_t g_aos5_tls[0x100];

void __stack_chk_fail() { fprintf(stderr, "aos5: stack check failed\n"); abort(); }

void *operator_new(gh_ulong n) { void *p = malloc(n ? n : 1); if (!p) abort(); return p; }
void *operator_new_nothrow(gh_ulong n, void *tag) { (void)tag; return calloc(1, n ? n : 1); }
void operator_delete(void *p) { free(p); }
void operator_delete__(void *p) { free(p); }

/* 원작 이미지 적재. img: [AOS5_IMG_BASE, AOS5_IMG_END) 바이트, rel: 포인터 위치 목록 */
int aos5_rt_load_image(const void *img, size_t img_size, const uint32_t *rel, size_t nrel)
{
    size_t need = (size_t)(AOS5_IMG_END - AOS5_IMG_BASE);
    if (img_size != need) return -1;
    g_aos5_img = (uint8_t *)malloc(need);
    if (!g_aos5_img) return -2;
    memcpy(g_aos5_img, img, need);
    for (size_t i = 0; i < nrel; i++) {
        uint64_t *slot = (uint64_t *)IMG(rel[i]);
        uint64_t v = *slot;
        if (v >= AOS5_IMG_BASE && v < AOS5_IMG_END) *slot = (uint64_t)(uintptr_t)IMG(v);
    }
    /* The original ARM64 .init_array constructed these COW strings in BSS.
       The data image contains their storage, but not constructed objects. */
    for (size_t i = 0; i < sizeof(kGameGlobalStrings) / sizeof(kGameGlobalStrings[0]); ++i) {
        FUN_009d4eac((undefined8 *)IMG(kGameGlobalStrings[i][0]),
                    (char *)IMG(kGameGlobalStrings[i][1]));
    }
    return 0;
}

/* ------------------------------------------------------------------ */
/* COW std::string                                                     */
/* ------------------------------------------------------------------ */
typedef struct { size_t len; size_t cap; int32_t ref; int32_t pad; } Rep;
#define EMPTY_REP ((Rep *)IMG(0xd40300))
#define REP(p) ((Rep *)((char *)(p) - sizeof(Rep)))

static char *rep_new(size_t cap)
{
    Rep *r = (Rep *)operator_new(sizeof(Rep) + cap + 1);
    r->cap = cap; r->ref = 0; r->len = 0;
    return (char *)(r + 1);
}
static void rep_set_len(char *p, size_t n)
{
    Rep *r = REP(p);
    if (r != EMPTY_REP) { r->len = n; p[n] = 0; }
}
static void rep_release(char *p)
{
    Rep *r = REP(p);
    if (r == EMPTY_REP) return;
    if (--r->ref < 0) operator_delete(r);
}
static char *empty_str(void) { return (char *)(EMPTY_REP + 1); }

static char *rep_clone(const char *src, size_t len, size_t extra)
{
    if (len + extra == 0) return empty_str();
    char *p = rep_new(len + extra);
    memcpy(p, src, len);
    rep_set_len(p, len);
    return p;
}

/* 문자열 s 를 단독 소유 + 용량 확보 상태로 만든다 */
static void make_unique(char **s, size_t cap)
{
    char *p = *s;
    Rep *r = REP(p);
    if (r != EMPTY_REP && r->ref <= 0 && r->cap >= cap) { if (r->ref < 0) r->ref = 0; return; }
    size_t len = (r == EMPTY_REP) ? 0 : r->len;
    char *np = rep_new(cap > len ? cap : len);
    memcpy(np, p, len);
    rep_set_len(np, len);
    rep_release(p);
    *s = np;
}

static size_t slen(const char *p) { return REP(p) == EMPTY_REP ? 0 : REP(p)->len; }

/* string(const char*) */
void FUN_009d4eac(undefined8 *out, char *s)
{
    size_t n = strlen(s);
    *(char **)out = rep_clone(s, n, 0);
}
/* string(const string&) — 공유 */
void FUN_009d881c(gh_long *out, gh_long *src)
{
    char *p = *(char **)src;
    Rep *r = REP(p);
    if (r == EMPTY_REP) { *(char **)out = p; return; }
    if (r->ref < 0) { *(char **)out = rep_clone(p, r->len, 0); return; }
    r->ref++;
    *(char **)out = p;
}
/* operator=(const string&) */
gh_long *FUN_009d899c(gh_long *dst, gh_long *src)
{
    char *d = *(char **)dst, *s = *(char **)src;
    if (d == s) return dst;
    gh_long tmp;
    FUN_009d881c(&tmp, src);
    rep_release(d);
    *(char **)dst = (char *)tmp;
    return dst;
}
/* assign(const char*, n) */
undefined8 *FUN_009d7480(undefined8 *s, undefined1 *src, size_t n)
{
    char *np = rep_clone((const char *)src, n, 0);
    rep_release(*(char **)s);
    *(char **)s = np;
    return s;
}
/* reserve(n) */
void FUN_009d537c(gh_long *s, gh_ulong n)
{
    make_unique((char **)s, n);
}
/* append(const char*, n) */
undefined8 FUN_009d5ac8(undefined8 s, undefined8 src, gh_long n)
{
    if (n) {
        char **ps = (char **)(uintptr_t)s;
        size_t len = slen(*ps);
        make_unique(ps, len + (size_t)n);
        memcpy(*ps + len, (const void *)(uintptr_t)src, (size_t)n);
        rep_set_len(*ps, len + (size_t)n);
    }
    return s;
}
/* append(const string&) */
gh_long *FUN_009d5908(gh_long *s, undefined8 *other)
{
    char *o = *(char **)other;
    size_t on = slen(o);
    if (on) {
        char *copy = (char *)malloc(on);  /* 자기 자신 추가 대비 */
        memcpy(copy, o, on);
        FUN_009d5ac8((undefined8)(uintptr_t)s, (undefined8)(uintptr_t)copy, (gh_long)on);
        free(copy);
    }
    return s;
}
/* insert(pos, const char*, n) */
gh_long *FUN_009d7684(gh_long *s, gh_ulong pos, undefined1 *src, gh_ulong n)
{
    char **ps = (char **)s;
    size_t len = slen(*ps);
    if (pos > len) pos = len;
    char *copy = (char *)malloc(n ? n : 1);
    memcpy(copy, src, n);
    make_unique(ps, len + n);
    memmove(*ps + pos + n, *ps + pos, len - pos);
    memcpy(*ps + pos, copy, n);
    rep_set_len(*ps, len + n);
    free(copy);
    return s;
}
/* compare(const char*) */
int FUN_009d6cd4(undefined8 *s, char *c)
{
    const char *p = *(char **)s;
    size_t a = slen(p), b = strlen(c), n = a < b ? a : b;
    int r = memcmp(p, c, n);
    if (r) return r;
    gh_long d = (gh_long)a - (gh_long)b;
    return d > 0x7fffffff ? 0x7fffffff : d < -0x7fffffff - 1 ? (int)(-0x7fffffff - 1) : (int)d;
}
/* swap */
void FUN_009d5ec8(gh_long *a, gh_long *b)
{
    Rep *ra = REP(*(char **)a), *rb = REP(*(char **)b);
    if (ra != EMPTY_REP && ra->ref < 0) ra->ref = 0;
    if (rb != EMPTY_REP && rb->ref < 0) rb->ref = 0;
    gh_long t = *a; *a = *b; *b = t;
}
/* _M_leak: 가변 접근 전 단독화 + 공유 금지 표시 */
void FUN_009d719c(undefined8 *s)
{
    char **ps = (char **)s;
    if (REP(*ps) == EMPTY_REP) return;
    make_unique(ps, slen(*ps));
    REP(*ps)->ref = -1;
}
/* __throw_out_of_range_fmt */
void FUN_009d1e68(char *fmt, ...)
{
    fprintf(stderr, "aos5: std::out_of_range %s\n", fmt);
    abort();
}

/* 원작 cocos2d::Size::ZERO (게임 코드가 주소만 넘긴다) */
uint8_t cocos2d__Size__ZERO[8];

/* ------------------------------------------------------------------ */
/* 가상 호출 디스패치                                                   */
/* ------------------------------------------------------------------ */
void aos5_log(const char *fmt, ...);
typedef gh_long (*gh_vfn)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);
typedef float (*gh_vfnf)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);

static void **vtable_of(uint64_t recv, uint64_t off)
{
    if (!recv) { aos5_log("vcall on NULL object, slot +0x%llx", (unsigned long long)off); return 0; }
    void **vt = *(void ***)(uintptr_t)recv;
    if (!vt) { aos5_log("vcall on object %p without vtable, slot +0x%llx", (void *)(uintptr_t)recv, (unsigned long long)off); return 0; }
    /* 원작 이미지 안의 vtable(코드 주소가 원작 주소 그대로)은 부를 수 없다 */
    if ((uint8_t *)vt >= g_aos5_img && (uint8_t *)vt < g_aos5_img + (AOS5_IMG_END - AOS5_IMG_BASE)) {
        aos5_log("vcall into original-image vtable %p (obj %p) slot +0x%llx — not mapped", (void *)vt,
                 (void *)(uintptr_t)recv, (unsigned long long)off);
        return 0;
    }
    return vt;
}
gh_long gh_vcall(uint64_t recv, uint64_t off, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5,
                 uint64_t a6, uint64_t a7)
{
    void **vt = vtable_of(recv, off);
    if (!vt) return 0;
    return ((gh_vfn)vt[off / 8])(recv, a1, a2, a3, a4, a5, a6, a7);
}
float gh_vcall_f(uint64_t recv, uint64_t off, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5,
                 uint64_t a6, uint64_t a7)
{
    void **vt = vtable_of(recv, off);
    if (!vt) return 0.0f;
    return ((gh_vfnf)vt[off / 8])(recv, a1, a2, a3, a4, a5, a6, a7);
}

/* std::__throw_bad_alloc — 원작은 예외를 던진다. 복원판은 기록 후 종료 (크래시는 숨기지 않는다) */
void FUN_009d1a48(void) { aos5_log("std::bad_alloc thrown"); abort(); }
