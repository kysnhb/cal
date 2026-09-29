#pragma once
#include <algorithm>
#include <cmath>

namespace aos5_visual {
inline void card_tint(float c[3]) {
    for (int i = 0; i < 3; ++i) c[i] = 0.72f + 0.28f * std::clamp(c[i], 0.0f, 1.0f);
}
enum class FxKind { Hit, Hurt, Down };
struct FxStyle { float width, height, appear, hold, fade, rise; int opacity; };
inline FxStyle fx_style(FxKind kind) {
    if (kind == FxKind::Down) return {96, 62, .035f, .10f, .16f, 26, 190};
    if (kind == FxKind::Hurt) return {76, 48, .025f, .045f, .12f, 16, 170};
    return {84, 54, .025f, .035f, .11f, 0, 210};
}
inline bool effects_on(int mode) { return mode == 9 || mode == 11; }
inline float effect_step(float dt) { return std::isfinite(dt) ? std::clamp(dt, 0.0f, .25f) : 0; }
inline float speed_opacity(float oldOpacity, bool running, float dt) {
    return std::clamp(oldOpacity + (running ? 420.0f : -650.0f) * effect_step(dt), 0.0f, 105.0f);
}
inline bool sky_clouds_on(int mode, int skyZ, bool indoorSky) {
    return (mode == 9 || mode == 11 || mode == 13 || mode == 14 || mode == 22) && skyZ > 0 && !indoorSky;
}
inline bool sky_clouds_advance(int mode) { return mode == 9 || mode == 11 || mode == 22; }
struct CloudFrame { float x, top, width, opacity; };
inline CloudFrame cloud_frame(float seconds, int layer) {
    // Two half-cycle-offset wisps crossfade at transparent loop boundaries.
    float phase = std::fmod(std::max(0.0f, seconds) / 64.0f + layer * 0.5f, 1.0f);
    float fade = std::sin(phase * 3.14159265358979323846f);
    return {360 + phase * 240, -30.0f + layer * 18.0f, 1120, 48 * fade * fade};
}
}
