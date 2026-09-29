#include "rt_ui_text.h"
#include "rt_visual_policy.h"
#include "rt_stickman_style.h"
#include <cassert>
#include <cstdio>
#include <cmath>
#include <fstream>
#include <vector>

static void inside(const aos5_ui::TextBox &b, float left, float top, float right, float bottom)
{
    const float x = b.x - b.width * b.align * 0.5f;
    assert(x >= left - .001f && x + b.width <= right + .001f);
    assert(b.y >= top - .001f && b.y + b.height <= bottom + .001f);
}
int main(int argc, char **argv)
{
    using namespace aos5_ui;
    using aos5_stickman::Part;
    int styled = 0, rgba = 0;
    for (int i = 0; i < 400; ++i) for (const char *prefix : {"img/npc1/PCimg[", "img/npc2/Headimg[", "img/out/ImF["}) {
        const std::string path = std::string(prefix) + std::to_string(i) + "].png";
        styled += aos5_stickman::part(path) != Part::None;
        rgba += aos5_stickman::rgba_texture(path);
    }
    assert(styled == 130 && rgba == 131);
    for (int luminance = 0; luminance < 256; ++luminance) for (int alpha = 0; alpha < 256; ++alpha) {
        const unsigned char la[] = {(unsigned char)luminance, (unsigned char)alpha};
        unsigned char expanded[4] = {};
        aos5_stickman::expand_la(la, 1, expanded);
        assert(expanded[0] == luminance && expanded[1] == luminance && expanded[2] == luminance);
        assert(expanded[3] == alpha);
    }
    for (const char *path : {"img/npc1/PCimg[294].png", "img/npc2/Headimg[11].png", "img/npc2/Headimg[46].png",
                            "img/npc1/PCimg[1].png.bak", "img/UI/MenuUi[1].png"})
        assert(aos5_stickman::part(path) == Part::None);
    for (auto kind : {aos5_visual::FxKind::Hit, aos5_visual::FxKind::Hurt, aos5_visual::FxKind::Down}) {
        const auto f = aos5_visual::fx_style(kind);
        assert(f.width <= 96 && f.height <= 62 && f.opacity <= 210);
        assert(f.appear + f.hold + f.fade <= .30f);
    }
    float speed30 = 0, speed120 = 0;
    for (int i = 0; i < 30; ++i) speed30 = aos5_visual::speed_opacity(speed30, true, 1.0f / 30);
    for (int i = 0; i < 120; ++i) speed120 = aos5_visual::speed_opacity(speed120, true, 1.0f / 120);
    assert(speed30 == 105 && speed120 == speed30);
    assert(aos5_visual::speed_opacity(105, false, .25f) == 0);
    assert(!aos5_visual::effects_on(14) && !aos5_visual::effects_on(12));
    for (int mode : {9, 11, 13, 14, 22}) {
        assert(aos5_visual::sky_clouds_on(mode, 3, false));
        assert(!aos5_visual::sky_clouds_on(mode, 3, true));
        assert(!aos5_visual::sky_clouds_on(mode, 0, false));
    }
    assert(!aos5_visual::sky_clouds_advance(13) && !aos5_visual::sky_clouds_advance(14));
    assert(aos5_visual::sky_clouds_advance(11));
    for (int mode : {2, 5, 7, 8, 12, 24, 51})
        assert(!aos5_visual::sky_clouds_on(mode, 3, false));
    for (float t : {0.0f, 16.0f, 32.0f, 63.999f, 64.0f, 128.0f}) {
        float totalOpacity = 0;
        for (int layer : {0, 1}) {
            const auto cloud = aos5_visual::cloud_frame(t, layer);
            assert(cloud.width == 1120 && cloud.top + cloud.width / 4 <= 270);
            assert(cloud.opacity >= 0 && cloud.opacity <= 48.001f);
            totalOpacity += cloud.opacity;
        }
        assert(std::abs(totalOpacity - 48) < .001f);
    }
    for (int mode : {71, 72}) {
        inside(text_box(mode, "LEVEL 100", 480, 97, 48, 1), 352.5f, 121.5f, 597.5f, 158.5f);
        const auto titleLeft = text_box(mode, "LEVEL 100", 350, 199, 28, 1);
        const auto titleRight = text_box(mode, "LEVEL 100", 612, 199, 28, 1);
        assert(titleLeft.x == 352 && titleRight.x == 614);
        for (const auto &title : {titleLeft, titleRight})
            assert(title.y == 213 && title.size == 16 && title.height == 0 && title.width == 120);
        inside(text_box(mode, "10000", 378, 260, 28, 1), 327, 259, 425, 285);
        inside(text_box(mode, "10000", 640, 315, 28, 1), 589, 310, 687, 336);
        inside(text_box(mode, "0/5", 653, 407, 32, 1), 642.5f, 399.5f, 700.5f, 434.5f);
    }
    for (float y : {460.0f, 480.0f, 510.0f})
        inside(text_box(12, "Weapon description", 240, y, 28, 0), 161, 470, 536, 525);
    inside(text_box(12, "Charge: 350 / 350", 420, 460, 25, 0), 341, 470, 536, 488);
    inside(text_box(12, "Upgrade", 746, 500, 30, 0), 712, 504, 861, 527);
    const auto price = sprite_box(12, "img/UI/MenuUi[20].png", 20, 851, 474, false);
    assert(price.x >= 706 && price.x + 20 * price.scale <= 866);
    assert(price.y >= 465 && price.y + 26 * price.scale <= 493);
    const auto comma = sprite_box(12, "img/UI/MenuUi[30].png", 30, 814, 495, false);
    assert(comma.y + 11 * comma.scale <= 493);
    assert(sprite_box(12, "img/UI/MenuUi[20].png", 20, 891, 414, false).scale == 0.72f);
    assert(sprite_box(11, "img/UI/MenuUi[20].png", 20, 891, 414, false).scale == 1);
    const auto hp = text_box(5, "HP: 1000", 174, 7, 20, 1, true);
    assert(hp.size == 18 && hp.height == 0 && hp.y == 18);
    assert(combat_hp_text(500) == "HP: 1000");
    assert(combat_hp_text(404) == "HP: 808");
    assert(combat_hp_text(0) == "HP: 0" && combat_hp_text(-1) == "HP: 0");
    assert(combat_hp_text(2147483647) == "HP: 4294967294");
    for (int mode : {9, 11, 13, 14}) {
        const auto combatHp = text_box(mode, combat_hp_text(404), 174, 7, 18, 1, true);
        assert(combatHp.x == hp.x && combatHp.y == hp.y && combatHp.size == 18 && combatHp.height == 0);
    }
    const auto power = text_box(5, "Power: 60", 174, 42, 20, 1, true);
    assert(power.size == 16 && power.height == 0 && power.y == 53);
    const auto bar = sprite_box(5, "img/UI/MenuUi[89].png", 89, 78, 10, true);
    assert(bar.x >= 100 && bar.x + 190 * bar.scale <= 255 && bar.y == 17 && bar.y + 20 * bar.scaleY <= 45);
    assert(sprite_box(5, "img/UI/MenuUi[87].png", 87, 73, 7, true).hide);
    assert(!sprite_box(5, "img/UI/MenuUi[87].png", 87, 73, 7, false).hide);
    const auto start = sprite_box(12, "img/UI/MenuUi[73].png", 73, 816, 593, false);
    assert(start.x == 801 + 36 && start.y == 576 + 19);
    const auto combat = text_box(11, "LEVEL 1", 480, 97, 48, 1);
    assert(combat.y == 97 && combat.size == 48 && combat.width == 0);
    assert(start_base(12, "img/UI/MenuUi[71].png", 801, 576));
    assert(!start_base(5, "img/UI/MenuUi[71].png", 801, 576));
    assert(!start_base(12, "img/UI/MenuUi[73].png", 816, 593));
    assert(!bitmap_number(19) && !bitmap_number(36) && bitmap_number(20));
    assert(display_text("[AngerOfStick5]") == "[CITY OF LAST LIGHT]");
    assert(display_text("Anger of stick 2 ~ 5") == "CITY OF LAST LIGHT");
    assert(display_text("J-PARK / jpark") == "Development team / Development team");
    assert(display_text("앵어오브스틱5") == "잔광의 도시");
    assert(display_text("V1.1.93") == "V1.0.6");
    assert(display_text("V1.1.930") == "V1.1.930");
    assert(display_text("Version V1.1.93") == "Version V1.1.93");
    // 30 coupon characters use ROM advances <=28. Both blinking cursor strokes
    // and all shadow passes must share the same horizontal shift, without fit.
    for (int i = 0; i <= 30; ++i) for (float y : {277.0f, 278.0f, 279.0f, 283.0f, 284.0f, 285.0f}) {
        const float x = 20 + i * 28.0f;
        const auto entry = text_box(7, i < 30 ? "W" : "I", x, y, 28, 0);
        assert(entry.x == x + 28 && entry.y == y && entry.size == 28 && entry.height == 0);
        assert(entry.x >= 48 && entry.x + (i < 30 ? 28 : 8) <= 915);
        assert(entry.x + entry.width == 915 && entry.singleLine);
    }
    assert(text_box(7, "H", 574, 469, 28, 0).x == 574); // Keyboard key stays put.
    assert(text_box(5, "H", 20, 284, 28, 0).x == 20); // Coupon-only scope.
    // Exact captured first-page regression: 'Life' at x180 used to bypass the
    // bottom-panel policy and collide with the usage count at (240,510).
    const auto life = text_box(12, "생명", 180, 510, 25, 0);
    const auto usage = text_box(12, "부활 횟수: 2 / 2", 240, 510, 25, 0);
    assert(life.size == 16 && life.height == 0 && usage.size == 16 && usage.height == 0);
    inside(life, 161, 472, 536, 527);
    inside(usage, 161, 472, 536, 527);
    assert(life.x + life.width < usage.x);
    assert(!weapon_quantity(12, "1 / 4", 480, 600));
    // Shared menu protection must keep an explicitly authored wrap width.
    assert(!text_box(27, "TIP: a wrapped explanation", 200, 300, 24, 0).singleLine);
    for (int c = 0; c < 7; ++c)
        inside(text_box(23, "$ 99.99", 197 + c * 110.0f, 414, 18, 2),
               137 + c * 110.0f, 411, 196 + c * 110.0f, 433);
    inside(text_box(23, "헐크 변신 카드를 클릭하시면 동작 설명을 볼 수 있습니다.", 180, 103, 30, 0), 180, 80, 930, 158);

    // Read shipped rules, exercising the same draw/touch geometry as the engine.
    // Check all twelve complete cards, not just label anchors. Sample their
    // interiors and verify they round-trip to the original handleEvent cells.
    assert(argc == 2);
    std::ifstream input(argv[1]); assert(input.good());
    std::vector<LayoutGeometry> cards, currency, levels, shops, freeShops, modes;
    int currencyModes[1000] = {};
    for (std::string line; std::getline(input, line);) {
        LayoutGeometry rule{}; int mode = -1; char flags[16] = {};
        if (sscanf(line.c_str(), "%d\t%f,%f,%f,%f\t%f,%f\t%f\t%15s", &mode,
            &rule.x0, &rule.y0, &rule.x1, &rule.y1, &rule.nx, &rule.ny, &rule.s, flags) != 9) continue;
        if (mode == 12 && rule.y0 >= 150 && rule.y1 <= 435) cards.push_back(rule);
        if (mode == 5 && rule.y0 >= 220 && rule.y1 <= 456) levels.push_back(rule);
        if (mode == 23 && rule.y0 == 260) shops.push_back(rule);
        if (mode == 17 && rule.y0 == 210) freeShops.push_back(rule);
        if (mode == 15 && rule.y0 == 506) modes.push_back(rule);
        if (rule.s == 0.73f) {
            assert(mode != 9 && mode != 11 && (menu(mode) || mode == 999));
            const bool currencyTouch = mode == 2 || mode == 5 || mode == 12 || mode == 15;
            assert(flags[0] == (currencyTouch ? 't' : '-')); ++currencyModes[mode];
            if (mode == 2) currency.push_back(rule);
        }
    }
    for (int underlying : {2, 5, 12, 17, 23}) {
        assert(presentation_mode(underlying, 0) == underlying);
        for (int store : {1, 2, 4}) assert(presentation_mode(underlying, store) == buy_store_mode);
        for (int store : {11, 12, 13}) assert(presentation_mode(underlying, store) == special_buy_store_mode);
    }
    for (int i = 0; i < 6; ++i) {
        const auto price = text_box(buy_store_mode, "$ 99.99", 187.0f + i * 135, 412, 24, 2);
        inside(price, free_card_left(i) + 27, 388, free_card_left(i) + 87, 410);
    }
    assert(buy_store_item_card(120) == 0 && buy_store_item_card(118) == 1 && buy_store_item_card(119) == 2);
    assert(buy_store_item_card(121) == 3 && buy_store_item_card(122) == 4 && buy_store_item_card(123) == 5);
    assert(buy_store_item_card(115) == -1 && buy_store_item_card(67) == -1);
    // Actual item IDs observed on the three R4 native grid pages. Their icons
    // must join the foreground pass when the selection card is drawn later.
    for (int glyph : {18,124,132,160,161,162,163,164,165,166,167,168,169,
                      203,204,205,206,207,208,219,220,221,222,223,224,225,
                      254,255,256,257,258,259,260,261,262,263}) assert(weapon_item(glyph));
    for (int glyph : {20,28,112,113,183,264}) assert(!weapon_item(glyph));
    assert(cards.size() == 12 && currency.size() == 2);
    for (int mode : {1,2,3,4,5,6,7,12,13,14,15,17,18,19,23,28,51,71,72,999}) assert(currencyModes[mode] == 2);
    for (int i = 0; i < 12; ++i) {
        const auto &rule = cards[i];
        float x = 82.0f + 200 * (i % 4), y = 153.0f + 95 * (i / 4);
        rule.draw(x, y);
        assert(x >= 100 && x + 192 * rule.s <= 860);
        assert(y >= 201.9f && y + 92 * rule.s <= 434);
        auto quantity = text_box(12, "350 / 350", 267.0f + 200 * (i % 4), 219.0f + 95 * (i / 4), 22, 2);
        rule.draw(quantity.x, quantity.y); quantity.width *= rule.s; quantity.height *= rule.s;
        assert(quantity.height == 0 && quantity.size == 20);
        inside(quantity, x + 94 * rule.s, y + 26 * rule.s, x + 172 * rule.s, y + 64 * rule.s);
        for (float dx : {3.0f, 96.0f, 190.0f}) for (float dy : {3.0f, 46.0f, 90.0f}) {
            float ox = 82 + 200 * (i % 4) + dx, oy = 153 + 95 * (i / 4) + dy;
            float tx = ox, ty = oy; rule.draw(tx, ty); assert(rule.target(tx, ty));
            rule.touch(tx, ty);
            assert(std::abs(tx - ox) < .001f && std::abs(ty - oy) < .001f);
            assert(weapon_slot(tx, ty) == i);
        }
        if (i >= 4) assert(cards[i - 4].ny + 95 * rule.s < rule.ny);
    }
    for (const auto &rule : currency) {
        float x = rule.x0 + 220, y = 25; const float ox = x, oy = y;
        rule.draw(x, y); assert(rule.target(x, y)); rule.touch(x, y);
        assert(std::abs(x - ox) < .001f && std::abs(y - oy) < .001f);
    }
    inside(text_box(14, "적 제거:  5명 / 12명 = 실패 ( 적 70%이상 제거시 성공 )", 190, 250, 30, 0), 190, 240, 850, 285);
    inside(text_box(14, "시민 구출: 0명 = 실패", 190, 316, 30, 0), 190, 300, 850, 350);
    inside(text_box(14, "남은 시간:", 190, 380, 30, 0), 190, 365, 322, 415);
    inside(text_box(14, "= 실패 (적 70% 제거+남은시간)", 510, 380, 30, 0), 480, 365, 850, 415);
    inside(text_box(14, "(5 X $10) + (0 X $200) + (0 star X $300) = $50", 480, 454, 24, 1), 80, 450, 880, 490);
    const auto lastTimeDigit = sprite_box(14, "img/UI/MenuUi[0].png", 0, 470, 385, false);
    assert(lastTimeDigit.x + 11 * 1.5f * lastTimeDigit.scale < 480);
    assert(levels.size() == 10 && shops.size() == 1 && freeShops.size() == 1 && modes.size() == 3);
    for (int i = 0; i < 10; ++i) {
        const auto &rule = levels[i];
        float x = 218.0f + 110 * (i % 5), y = i < 5 ? 244.0f : 360.0f;
        rule.draw(x, y);
        assert(x >= 225 && x + 80 * rule.s <= 735 && y >= 225 && y + 91 * rule.s <= 405);
        x += 40 * rule.s; y += 45 * rule.s; rule.touch(x, y);
        assert(std::abs(x - (258 + 110 * (i % 5))) < .001f && std::abs(y - (i < 5 ? 289 : 405)) < .001f);
    }
    for (int i = 0; i < 7; ++i) {
        const auto &rule = shops[0]; float x = 110.0f + 110 * i, y = 333;
        rule.draw(x, y);
        assert(x >= 118 && x + 94 * rule.s <= 843 && y >= 258 && y + 106 * rule.s <= 398);
        auto price = text_box(23, "KRW 9,900", 197.0f + 110 * i, 414, 18, 2);
        rule.draw(price.x, price.y); price.width *= rule.s; price.height *= rule.s;
        inside(price, x + 27 * rule.s, y + 78 * rule.s, x + 86 * rule.s, y + 100 * rule.s);
    }
    for (int i = 0; i < 6; ++i) {
        const auto &rule = freeShops[0]; float x = free_card_left(i), y = 220;
        rule.draw(x, y);
        assert(x >= 108 && x + 94 * rule.s <= 833 && y >= 161 && y + 106 * rule.s <= 301);
        auto icon = sprite_box(17, "", 173 + i, free_card_left(i) + 5, 226, false);
        assert(icon.scale * 112 == 58 && icon.x >= free_card_left(i) + 10 && icon.x + 58 <= free_card_left(i) + 82);
    }
    for (const auto &rule : modes) {
        float x = rule.x0 + 79, y = 530; rule.draw(x, y);
        assert(y == 505); rule.touch(x, y); assert(y == 530);
    }
    assert(weapon_quantity(12, "HP:480", 667, 314, 1));
    assert(!weapon_quantity(12, "0 / 350", 680, 340, 3));
    const auto robotValue = text_box(12, "0 / 350", 680, 340, 20, 0, false, 3);
    assert(robotValue.x == 700 && robotValue.y == 332 && robotValue.size == 24);
    inside(text_box(12, "~ 2026 / 9 / 30, 40% Discount", 816, 410, 24, 2, false, 3), 470, 405, 785, 435);
    const auto ammo = text_box(12, "탄창: 0 / 104", 240, 510, 25, 0);
    const auto fire = text_box(12, ", 연사속도: 4sec", 425, 510, 25, 0);
    assert(life.x + life.width < ammo.x && ammo.x + ammo.width < fire.x);
    const auto nameImage = sprite_box(12, "img/UI/MenuUi[187].png", 187, 127, 515, false);
    assert(nameImage.x >= 162 && nameImage.x + 100 * nameImage.scale <= 262);
    puts("PASS: 12 weapon/10 level/7 shop/6 free-shop cards, live TSV touch round-trips, 3 mode buttons, robot page scope/stat rows/discount, quantity interiors, name/stats separation, results fields, HP18/Power16, 20 currency modes and touch flags, event16 without height-fit, 30-character coupon/cursor bounds, START/branding/exact version.");
    puts("PASS stickrig inputs: 130 styled / 131 RGBA masks; all 65536 LA pairs preserve L,L,L,A. Existing bounded FX, outdoor clouds and pause policy pass.");
}
