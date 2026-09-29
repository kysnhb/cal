#pragma once
#include "rt_stickrig_art.h"
#include "rapidjson/document.h"

namespace aos5_stickrig {
inline float number(const rapidjson::Value &v) {
    if(!v.IsNumber() || !std::isfinite(v.GetDouble())) throw std::runtime_error("Expected finite number");
    return float(v.GetDouble());
}
inline Point point(const rapidjson::Value &v) {
    if(!v.IsArray() || v.Size()!=2) throw std::runtime_error("Expected [x,y]");
    return {number(v[0]),number(v[1])};
}
inline MasterSpec master_spec(const rapidjson::Value &v) {
    if(!v.IsObject() || !v.HasMember("path") || !v["path"].IsString() || !v.HasMember("source_rect") ||
        !v.HasMember("anchor_top") || !v.HasMember("anchor_bottom")) throw std::runtime_error("Incomplete master metadata");
    const auto &a=v["source_rect"];
    if(!a.IsArray() || a.Size()!=4) throw std::runtime_error("Expected source_rect [x,y,w,h]");
    MasterSpec out;out.path=v["path"].GetString();out.source={number(a[0]),number(a[1]),number(a[2]),number(a[3])};
    out.top=point(v["anchor_top"]);out.bottom=point(v["anchor_bottom"]);
    if(v.HasMember("max_width_ratio")) out.widthRatio=number(v["max_width_ratio"]);
    return out;
}
inline const char *role_name(Role role) {
    switch(role) {case Role::Head:return "head";case Role::TorsoUpper:return "torso_upper";case Role::TorsoLower:return "torso_lower";default:return "limb";}
}
inline Role role_from_name(const std::string &name) {
    if(name=="head")return Role::Head;if(name=="torso_upper")return Role::TorsoUpper;
    if(name=="torso_lower")return Role::TorsoLower;if(name=="limb")return Role::Limb;
    throw std::runtime_error("Unknown art role");
}
}
