#pragma once
#include <algorithm>
#include <string>

namespace aos5_ui {
constexpr int buy_store_mode = 1017, special_buy_store_mode = 1018;
inline int presentation_mode(int gameMode, int storeContext) {
    if (storeContext <= 0) return gameMode;
    return storeContext == 11 || storeContext == 12 || storeContext == 13 ? special_buy_store_mode : buy_store_mode;
}
inline int buy_store_item_card(int glyph) {
    static const int cards[] = {1, 2, 0, 3, 4, 5};
    return glyph >= 118 && glyph <= 123 ? cards[glyph - 118] : -1;
}
struct LayoutGeometry {
    float x0, y0, x1, y1, nx, ny, s;
    bool source(float x, float y) const { return x >= x0 && x < x1 && y >= y0 && y < y1; }
    bool target(float x, float y) const {
        return x >= nx && x < nx + (x1 - x0) * s && y >= ny && y < ny + (y1 - y0) * s;
    }
    void draw(float &x, float &y) const { x = nx + (x - x0) * s; y = ny + (y - y0) * s; }
    void touch(float &x, float &y) const { x = x0 + (x - nx) / s; y = y0 + (y - ny) / s; }
};
inline char ascii_lower(char c) { return c >= 'A' && c <= 'Z' ? char(c + ('a' - 'A')) : c; }
inline void replace_text(std::string &text, const std::string &from, const std::string &to)
{
    for (size_t p = 0; p + from.size() <= text.size();) {
        bool match = true;
        for (size_t n = 0; n < from.size(); ++n)
            if (ascii_lower(text[p + n]) != ascii_lower(from[n])) { match = false; break; }
        if (match) { text.replace(p, from.size(), to); p += to.size(); }
        else ++p;
    }
}

// Display boundary only: do not rewrite ROM addresses, save keys, URLs, file
// names or third-party licensing data in the original memory image.
inline std::string display_text(std::string text)
{
    if (text == "V1.1.93") return "V1.0.5";
    for (const char *old : {"Anger of stick: war", "Anger of stick 2 ~ 5", "Anger of stick 5",
                            "AngerOfStick5", "Anger of stick", "AngerOfStick"})
        replace_text(text, old, "CITY OF LAST LIGHT");
    for (const char *old : {"앵어오브스틱5", "앵어 오브 스틱 5", "앵거오브스틱5",
                            "앵거 오브 스틱 5", "막대기의 분노 5"})
        replace_text(text, old, "잔광의 도시");
    replace_text(text, "J-PARK", "Development team");
    replace_text(text, "jpark", "Development team");
    return text;
}

inline bool weapon_menu(int mode) { return mode == 12; }
inline bool menu(int mode) {
    return mode == buy_store_mode || mode == special_buy_store_mode || (mode >= 1 && mode <= 7) || (mode >= 12 && mode <= 20) || mode == 23 || mode == 25 ||
           mode == 27 || mode == 28 || mode == 50 || mode == 51 || (mode >= 70 && mode <= 74);
}
inline bool event_panel(int mode) { return mode == 71 || mode == 72; }
inline std::string combat_hp_text(int rawHp) {
    // MenutSet displays max HP in units of two per internal HP point.
    return "HP: " + std::to_string(2LL * std::max(0, rawHp));
}
inline bool bitmap_number(int glyph) {
    return (glyph >= 0 && glyph <= 15) || (glyph >= 20 && glyph <= 33) || (glyph >= 40 && glyph <= 60);
}
inline bool start_base(int mode, const std::string &path, float x, float y) {
    return mode == 12 && path == "img/UI/MenuUi[71].png" && x >= 790 && y >= 560;
}
inline int weapon_slot(float x, float y) {
    if (x < 80 || x >= 880 || y < 150 || y >= 435) return -1;
    return int((y - 150) / 95) * 4 + int((x - 80) / 200);
}
inline bool weapon_item(int glyph) {
    // Potion (18) and the last skill icon (225) also precede opaque card draws.
    return glyph == 18 || glyph == 124 || glyph == 132 || (glyph >= 153 && glyph <= 169) || glyph == 200 ||
           (glyph >= 203 && glyph <= 208) || (glyph >= 219 && glyph <= 225) || (glyph >= 254 && glyph <= 263);
}
inline bool weapon_quantity(int mode, const std::string &text, float x, float y, int page = -1) {
    if (mode != 12 || page == 3 || weapon_slot(x, y) < 0) return false;
    const bool hp = text.rfind("HP:", 0) == 0;
    bool slash = false, digit = false;
    for (char c : hp ? text.substr(3) : text) {
        if (c >= '0' && c <= '9') digit = true;
        else if (c == '/' && !slash) slash = true;
        else if (c != ' ') return false;
    }
    return (slash || hp) && digit;
}
inline bool shop_price(int mode, const std::string &text, float x, float y) {
    (void)text; // Localized currency strings use the same seven paper fields.
    if (mode == buy_store_mode) return x >= 180 && x <= 865 && y >= 405 && y <= 430;
    return mode == 23 && x >= 190 && x <= 865 && y >= 405 && y <= 430;
}
inline int free_card(float x) {
    return std::clamp(int((x - 180) / 135), 0, 5);
}
inline float free_card_left(int card) {
    static const float positions[] = {72, 207, 343, 477, 611, 744};
    return positions[std::clamp(card, 0, 5)];
}
struct SpriteBox { float x, y, scale = 1; bool hide = false; float scaleY = 0; };
inline SpriteBox sprite_box(int mode, const std::string &path, int glyph, float x, float y, bool framedHp)
{
    SpriteBox box{x, y};
    if (mode == 12 && glyph >= 185 && glyph <= 197 && x >= 100 && x < 240 && y >= 500 && y <= 530) {
        box.x = 162; box.y = 506;
    }
    if (mode == 12 && glyph >= 20 && glyph <= 33 && x >= 760 && x <= 920 && y >= 405 && y <= 445) {
        box.scale = 0.72f; box.x = 870 - (911 - x) * box.scale;
        box.y = 408 + (y - 414) * box.scale;
    }
    if (mode == 50 && glyph == 92 && x > 300 && y > 400) {
        // This call is the quit dialog backdrop, not the HP HUD. Its texture
        // is overridden with the neutral [62] panel in the engine.
        box.x = 312; box.y = 420; box.scale = 0.8f;
    }
    if (mode == 17 && glyph >= 173 && glyph <= 178 && y >= 210 && y <= 240) {
        static const int cardForGlyph[] = {0, 1, 2, 3, 4, 5};
        box.x = free_card_left(cardForGlyph[glyph - 173]) + 18;
        box.y = 232; box.scale = 58.0f / 112;
    }
    if (mode == 14 && glyph >= 0 && glyph <= 15 && x >= 325 && x <= 495 && y >= 380 && y <= 410) {
        box.scale = 0.85f; box.x = 330 + (x - 330) * box.scale;
        box.y = 378 + (y - 385) * box.scale;
    }
    if (mode == 12 && path == "img/UI/MenuUi[73].png" && x >= 800 && y >= 580) {
        box.x = 837; box.y = 595; // (801,576) base + centered (36,19) caption.
    }
    if (mode == 12 && y >= 468 && y <= 505 && x >= 680 && x <= 900 &&
        ((glyph >= 20 && glyph <= 33) || glyph == 104 || glyph == 105)) {
        // R4 [150] at (676,457): keep price ink above the divider at y496.
        // The original number group occupies y472..506 including punctuation.
        box.scale = 0.79f;
        box.x = glyph >= 104 ? 710 : 866 - (871 - x) * box.scale;
        box.y = 465 + (y - 472) * box.scale;
    }
    if (framedHp && x < 285 && y < 70) {
        // The new [92] already contains both decorative rims.
        if (glyph == 87 || glyph == 88 || glyph == 94) box.hide = true;
        if (glyph == 89) { box.x = 100; box.y = 17; box.scale = 155.0f / 190; box.scaleY = 1.4f; }
        if (glyph == 93 && x < 30) { box.x = 42.4f; box.y = 15; box.scale = 31.0f / 56; }
        if (glyph == 95) { box.x = 110; box.y = 28; box.scale = 12.0f / 21; }
        if (glyph >= 40 && glyph <= 60 && x >= 225 && y >= 20) {
            box.x = 255 + (x - 230) * 0.45f; box.y = 48 + (y - 25) * 0.45f; box.scale = 0.45f;
        }
    }
    return box;
}

struct TextBox {
    float x, y, width = 0, height = 0, size;
    int align;
    bool singleLine = false;
};
inline TextBox text_box(int mode, const std::string &text, float x, float y, float size, int align, bool framedHp = false, int weaponPage = -1)
{
    TextBox box{x, y, 0, 0, size, align, false};
    if (menu(mode) && text.find('\n') == std::string::npos) {
        const float available = align == 0 ? 940 - x : align == 1 ? 2 * std::min(x - 20, 940 - x) : x - 20;
        if (available > 0) box.width = available; // Preserve explicitly authored wrapping widths.
    }
    if (mode == 7 && align == 0 && x >= 18 && x <= 862 && y >= 276 && y <= 286) {
        // CouponResource draws 30 separate characters plus two blinking 'I'
        // cursor strokes at y278/284. Move the complete run into the frame.
        // The ROM advance is at most 28px: 30*28 + new origin48 + cursor8 < 915.
        box.x = x + 28; box.width = 915 - box.x;
        box.height = 0; box.singleLine = true;
    }
    if (mode == 17 && x >= 180 && x <= 865 && y >= 310 && y <= 335) {
        box.x = free_card_left(free_card(x)) + 57; box.y = 299;
        box.width = 58; box.height = 19; box.size = 18; box.align = 1; box.singleLine = true;
    }
    if (mode == 50 && y >= 470 && y <= 515) {
        box.x = 480; box.y = 480; box.width = 290; box.size = 22; box.align = 1; box.singleLine = true;
    }
    if (mode == 14) {
        if (x >= 180 && x <= 200 && y >= 240 && y <= 330) {
            box.x = 190; box.y = y < 280 ? 246.0f : 311.0f;
            box.size = 24; box.width = 660; box.height = 36; box.align = 0; box.singleLine = true;
        } else if (y >= 370 && y <= 390 && x >= 180 && x <= 530) {
            box.x = x < 300 ? 190.0f : 480.0f; box.y = 372;
            box.width = x < 300 ? 132.0f : 370.0f;
            box.height = 36; box.size = 24; box.align = 0; box.singleLine = true;
        } else if (y >= 445 && y <= 465) {
            box.x = 480; box.y = 454; box.width = 800; box.height = 32;
            box.size = 22; box.align = 1; box.singleLine = true;
        } else if (y >= 175 && y <= 195 && text.size() > 30) {
            box.x = 370; box.y = 181; box.width = 500; box.height = 34;
            box.size = 22; box.align = 1; box.singleLine = true;
        }
    }
    if (event_panel(mode) && text.rfind("LEVEL ", 0) == 0) {
        box.singleLine = true;
        box.align = 1;
        // Final art contract: BG (222.5,88.5)+(130..375,33..70),
        // reward cards (252/514,191)+(40..160,25..43).
        if (y < 150) { box.x = 475; box.y = 126; box.size = 28; box.width = 245; box.height = 28; }
        else if (y < 240) {
            // Fit the glyph ink into the 18px art field, not the OS line box.
            // A 16px line box is taller than its ink; height-fit made it tiny.
            box.x = x < 480 ? 352.0f : 614.0f; box.y = 213;
            box.size = 16; box.width = 120; box.height = 0;
        }
    }
    if (event_panel(mode) && x >= 350 && x <= 650 && y >= 250 && y <= 340) {
        box.x = x < 480 ? 376.0f : 638.0f; box.y = y < 290 ? 259.0f : 310.0f;
        box.width = 98; box.height = 26; box.align = 1; box.singleLine = true;
    }
    if (event_panel(mode) && y > 390 && y < 440 && text.find('/') != std::string::npos) {
        box.x = 671.5f; box.y = 406; box.size = 24; box.width = 58; box.height = 24; box.align = 1; box.singleLine = true;
    }
    if (framedHp && y < 40 && text.rfind("HP:", 0) == 0) {
        box.x = 177.5f; box.y = 18; box.size = 18; box.width = 125; box.height = 0; box.align = 1; box.singleLine = true;
    }
    if (framedHp && text.rfind("Power:", 0) == 0) {
        box.x = 177.5f; box.y = 53; box.size = 16; box.width = 145; box.height = 0; box.align = 1; box.singleLine = true;
    }
    if (weapon_menu(mode)) {
        if (weaponPage == 3 && x >= 525 && x <= 690 && y >= 245 && y <= 365) {
            const int row = std::clamp(int((y - 245) / 40), 0, 2);
            box.x = x < 600 ? 530.0f : 700.0f; box.y = 252 + row * 40.0f;
            box.width = x < 600 ? 150.0f : 150.0f; box.height = 30;
            box.size = 24; box.align = 0; box.singleLine = true;
        }
        if (weaponPage == 3 && y >= 405 && y <= 425 && text.find("Discount") != std::string::npos) {
            box.x = 785; box.y = 407; box.width = 315; box.height = 27;
            box.size = 20; box.align = 2; box.singleLine = true;
        }
        if (weapon_quantity(mode, text, x, y, weaponPage)) {
            const int slot = weapon_slot(x, y);
            // Original card [112/183] is (82+200*c,153+95*r), 192x92.
            // Right-hand statistic column. The engine fits the item/lock into
            // the left column, so readable 20px text needs no height shrink.
            box.x = 254.0f + 200 * (slot % 4);
            box.y = 179.0f + 95 * (slot / 4);
            box.width = 78; box.height = 0; box.size = 20;
            box.align = 2; box.singleLine = true;
        }
        if (x >= 100 && x < 200 && y >= 500 && y <= 530) {
            // Name and usage count share the last row, in disjoint columns.
            box.x = 162; box.y = 506; box.width = 100; box.height = 0;
            box.size = 16; box.align = 0; box.singleLine = true;
        }
        if (y >= 450 && y <= 540 && x >= 200 && x < 700) {
            // R4 [229] at (51,452), safe local (110..540,17..73).
            // Keep the three authored rows separate; use the newly enlarged
            // field rather than deleting information or squeezing its height.
            box.singleLine = text.find('\n') == std::string::npos;
            box.x = std::clamp(x - 79, 162.0f, 516.0f);
            if (y >= 500) box.x = std::max(box.x, 275.0f);
            box.width = align == 0 ? 536 - box.x : align == 1 ? 2 * std::min(box.x - 161, 536 - box.x) : box.x - 161;
            box.height = 0;
            box.size = 16;
            box.y = y < 480 ? 470.0f : y < 500 ? 488.0f : 506.0f;
            if (text.rfind("LV", 0) == 0) box.width = std::min(box.width, 170.0f);
            if (y < 480 && text.rfind("LV", 0) == 0) { box.x = 162; box.width = 65; }
            if (y < 480 && x >= 295 && x <= 305) { box.x = 235; box.width = 155; }
            if (y < 480 && x >= 465 && x <= 475) { box.x = 400; box.width = 136; }
            if (y >= 500 && x >= 420 && x <= 430) { box.x = 410; box.width = 126; }
            if (y >= 500 && x >= 235 && x <= 245 &&
                (text.rfind("탄창", 0) == 0 || text.rfind("Charge", 0) == 0)) box.width = 130;
        }
        if (y >= 490 && y <= 510 && x >= 730 &&
            (text == "Upgrade" || text == "Buy" || text == "업그레이드" || text == "구입")) {
            box.x = 786.5f; box.y = 504; box.align = 1;
            box.width = 149; box.height = 23; box.size = 23; box.singleLine = true;
        }
    }
    if (shop_price(mode, text, x, y)) {
        const int card = mode == buy_store_mode ? free_card(x) : std::clamp(int((x - 190) / 110), 0, 6);
        // [115] at (110+110*c,333): paper interior x27..86,y78..100.
        box.x = 167 + card * 110.0f; box.y = 412;
        if (mode == buy_store_mode) { box.x = free_card_left(card) + 57; box.y = 389; }
        box.width = 58; box.height = 19; box.size = 18;
        box.align = 1; box.singleLine = true;
    }
    if (menu(mode) && x >= 170 && y >= 80 && y <= 150 && text.size() > 30) {
        box.x = std::max(x, 180.0f); box.y = 103; box.align = 0;
        box.width = 930 - box.x; box.height = 38; box.size = std::min(size, 30.0f);
        box.singleLine = true;
    }
    if (text.find("CITY OF LAST LIGHT") != std::string::npos || text.find("잔광의 도시") != std::string::npos) {
        const float available = align == 0 ? 940 - x : align == 1 ? 2 * std::min(x - 20, 940 - x) : x - 20;
        if (available > 0) box.width = box.width > 0 ? std::min(box.width, available) : available;
        box.singleLine = text.find('\n') == std::string::npos;
    }
    return box;
}

inline const char *font_asset() { return "fonts/Pretendard-Regular.otf"; }

// Used only when loading or reconfiguring the bundled face fails.
inline const char *system_font(bool bold)
{
#if defined(__ANDROID__)
    return bold ? "sans-serif-medium" : "sans-serif";
#elif defined(_WIN32)
    (void)bold;
    return "Malgun Gothic";
#else
    (void)bold;
    return "sans-serif";
#endif
}
}
