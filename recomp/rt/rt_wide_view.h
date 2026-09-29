#pragma once
#include <algorithm>

// Retain the vertical scale while adding world space on the horizontal axis.
namespace aos5_wide {
constexpr float width = 640.0f * 13.0f / 6.0f;
constexpr float height = 640.0f;
constexpr float extra = width - 960.0f;
struct Point { float x, y; };
struct Insets { float left = 0, top = 0, right = 0, bottom = 0; };
inline bool world(int mode) {
    switch (mode) {
    case 11: case 13: case 14: case 20: case 21:
    case 22: case 70: case 73: case 74: return true;
    default: return false;
    }
}
inline bool controls(int mode) { return mode == 11 || mode == 22; }
inline Point menu(Point p) { p.x += extra / 2; return p; }
inline Point hud(Point p, Insets s, bool timer = false) {
    if (timer) p.x += extra / 2;
    else if (p.x < 440) p.x += s.left;
    else p.x += extra - s.right;
    p.y += p.y >= 330 ? -s.bottom : s.top;
    return p;
}
inline bool unproject(Point &p, Insets s, int mode, int phase) {
    if (!controls(mode)) { p.x -= extra / 2; return phase == 2 || (p.x >= 0 && p.x <= 960); }
    // The space between the two hand groups must not trigger invisible buttons.
    if (p.x <= 350 + s.left) p.x -= s.left;
    else if (p.x >= 440 + extra - s.right) p.x -= extra - s.right;
    else if (phase != 2) return false;
    else p.x = 480;
    p.y -= p.y >= 330 - s.bottom ? -s.bottom : s.top;
    return true;
}
}
