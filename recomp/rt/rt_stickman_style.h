#pragma once
#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <string>

// Original mask classification and lossless luminance-alpha expansion.
namespace aos5_stickman {
enum class Part { None, Body, Head };
inline Part part(const std::string &path) {
    int index = -1, end = 0;
    if (std::sscanf(path.c_str(), "img/npc1/PCimg[%d].png%n", &index, &end) == 1 &&
        end == (int)path.size() && ((index >= 1 && index <= 112) || index == 203 || index == 204))
        return Part::Body;
    end = 0;
    if (std::sscanf(path.c_str(), "img/npc2/Headimg[%d].png%n", &index, &end) == 1 &&
        end == (int)path.size() && ((index >= 1 && index <= 10) || index == 31 || index == 32))
        return Part::Head;
    end = 0;
    if (std::sscanf(path.c_str(), "img/out/ImF[%d].png%n", &index, &end) == 1 &&
        end == (int)path.size() && (index == 345 || index == 48 || index == 49 || index == 50))
        return Part::Body;
    return Part::None;
}
inline bool rgba_texture(const std::string &path) {
    // The original black pilot icon is LA too, but retains its own color.
    return part(path) != Part::None || path == "img/npc1/PCimg[294].png";
}
// Axmol labels PNG luminance-alpha data RG8. Preserve decoded luminance
// (including any existing PMA) and alpha exactly; do not treat A as green.
inline void expand_la(const unsigned char *source, std::size_t pixels, unsigned char *rgba) {
    for (std::size_t i = 0; i < pixels; ++i) {
        rgba[4 * i] = rgba[4 * i + 1] = rgba[4 * i + 2] = source[2 * i];
        rgba[4 * i + 3] = source[2 * i + 1];
    }
}
}
