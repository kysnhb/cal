#pragma once
#include "rt_stickman_style.h"
#include <array>
#include <cstdint>
#include <vector>
#include <stdexcept>

// Engine-independent CPU baking and registration. The runtime and raw-RGBA
// preview probe use these exact functions. Coordinates are image-local pixels,
// with pixel centers at n+.5 and the origin at the top left.
namespace aos5_stickrig {
enum class Role { Limb, TorsoUpper, TorsoLower, Head };
enum class Palette { Native, Rust, Moss, Iron, Slate, Violet, Ochre, Teal, Count };
struct Point { float x = 0, y = 0; };
struct Box { float x = 0, y = 0, w = 0, h = 0; };
struct Bitmap {
    int width = 0, height = 0;
    bool premultiplied = false;
    std::vector<uint8_t> rgba;
    bool valid() const { return width > 0 && height > 0 && rgba.size() == size_t(width) * height * 4; }
};
struct MasterSpec {
    std::string path;
    Box source;
    Point top, bottom;
    float widthRatio = 1.25f;
};
struct Color { float r = 0, g = 0, b = 0, a = 0; };
inline Color mix(Color a, Color b, float t) {
    return {a.r + (b.r-a.r)*t, a.g + (b.g-a.g)*t, a.b + (b.b-a.b)*t, a.a + (b.a-a.a)*t};
}
inline uint8_t byte(float c) { return uint8_t(std::lround(std::clamp(c, 0.f, 1.f)*255)); }
inline Color pixel(const Bitmap &im, int x, int y) {
    if (x < 0 || y < 0 || x >= im.width || y >= im.height) return {};
    const auto *p = im.rgba.data() + (size_t(y)*im.width+x)*4;
    const float a = p[3]/255.f, k = im.premultiplied ? 1.f/255 : a/255;
    return {p[0]*k, p[1]*k, p[2]*k, a};
}
// Interpolate in PMA space, then callers can recover straight material color.
inline Color sample(const Bitmap &im, float x, float y) {
    x -= .5f; y -= .5f;
    const int ix = int(std::floor(x)), iy = int(std::floor(y));
    return mix(mix(pixel(im,ix,iy),pixel(im,ix+1,iy),x-ix),
               mix(pixel(im,ix,iy+1),pixel(im,ix+1,iy+1),x-ix),y-iy);
}
inline Box alpha_box(const Bitmap &im) {
    int left=im.width, top=im.height, right=0, bottom=0;
    for (int y=0;y<im.height;++y) for (int x=0;x<im.width;++x)
        if (im.rgba[(size_t(y)*im.width+x)*4+3] >= 8) {
            left=std::min(left,x); top=std::min(top,y); right=std::max(right,x+1); bottom=std::max(bottom,y+1);
        }
    if (right <= left || bottom <= top) throw std::runtime_error("Empty original mask");
    return {float(left),float(top),float(right-left),float(bottom-top)};
}
struct Master {
    MasterSpec spec;
    std::vector<Bitmap> mip;
    Color average;
};
inline Master prepare(const Bitmap &image, const MasterSpec &spec) {
    for(float v : {spec.source.x,spec.source.y,spec.source.w,spec.source.h,
                    spec.top.x,spec.top.y,spec.bottom.x,spec.bottom.y})
        if(!std::isfinite(v)) throw std::runtime_error("Nonfinite art metadata");
    if (!image.valid() || !std::isfinite(spec.widthRatio) || spec.widthRatio < 1 || spec.widthRatio > 1.5f ||
        spec.source.w < 1 || spec.source.h < 1 || spec.source.x < 0 || spec.source.y < 0 ||
        spec.source.x+spec.source.w > image.width || spec.source.y+spec.source.h > image.height ||
        std::abs(spec.top.x-spec.bottom.x) > .01f || spec.bottom.y-spec.top.y < 1)
        throw std::runtime_error("Invalid master bounds, vertical anchors or width ratio");
    Master out; out.spec=spec;
    Bitmap crop; crop.width=int(spec.source.w); crop.height=int(spec.source.h); crop.premultiplied=true;
    crop.rgba.resize(size_t(crop.width)*crop.height*4);
    double sum[4]={};
    for (int y=0;y<crop.height;++y) for (int x=0;x<crop.width;++x) {
        const auto c=sample(image,spec.source.x+x+.5f,spec.source.y+y+.5f);
        auto *p=crop.rgba.data()+(size_t(y)*crop.width+x)*4;
        p[0]=byte(c.r);p[1]=byte(c.g);p[2]=byte(c.b);p[3]=byte(c.a);
        sum[0]+=c.r;sum[1]+=c.g;sum[2]+=c.b;sum[3]+=c.a;
    }
    if (sum[3] < 1) throw std::runtime_error("Empty master art");
    out.average={float(sum[0]/sum[3]),float(sum[1]/sum[3]),float(sum[2]/sum[3]),1};
    out.mip.push_back(std::move(crop));
    while (out.mip.back().width>1 || out.mip.back().height>1) {
        const auto &old=out.mip.back(); Bitmap next;
        next.width=(old.width+1)/2;next.height=(old.height+1)/2;next.premultiplied=true;
        next.rgba.resize(size_t(next.width)*next.height*4);
        for(int y=0;y<next.height;++y) for(int x=0;x<next.width;++x) {
            Color c{}; int count=0;
            for(int j=0;j<2;++j) for(int i=0;i<2;++i) if(x*2+i<old.width && y*2+j<old.height) {
                const auto a=pixel(old,x*2+i,y*2+j);c.r+=a.r;c.g+=a.g;c.b+=a.b;c.a+=a.a;++count;
            }
            auto *p=next.rgba.data()+(size_t(y)*next.width+x)*4;
            p[0]=byte(c.r/count);p[1]=byte(c.g/count);p[2]=byte(c.b/count);p[3]=byte(c.a/count);
        }
        out.mip.push_back(std::move(next));
    }
    return out;
}
inline Color material(const Master &m, float x, float y, float footprint) {
    const float lod=std::clamp(std::log2(std::max(1.f,footprint)),0.f,float(m.mip.size()-1));
    const int level=int(lod), next=std::min(level+1,int(m.mip.size()-1));
    auto at=[&](int l) { const float k=std::ldexp(1.f,-l);return sample(m.mip[l],(x-m.spec.source.x)*k,(y-m.spec.source.y)*k); };
    Color c=mix(at(level),at(next),lod-level);
    if(c.a > 1.f/255) { c.r/=c.a;c.g/=c.a;c.b/=c.a; }
    else {c.r=m.average.r;c.g=m.average.g;c.b=m.average.b;}
    return c;
}
// These are artwork landmarks for identical PNG pairs, not replacement ROM
// pivots. The original PHead/PHead2 call still uses each id's distinct pivot.
inline Point head_landmark(int id) {
    if(id==1 || id==2) return {11,21};
    if(id==3 || id==4) return {14,27};
    if(id==5 || id==6) return {15,31};
    if(id==7 || id==8) return {10,27};
    if(id==9 || id==10) return {13,27};
    if(id==31 || id==32) return {23,26};
    throw std::runtime_error("Unsupported head registration");
}
struct Registration {
    int originalWidth=0, originalHeight=0, density=4;
    Box rect; // Art quad in the original PNG's logical coordinate system.
    float scaleX=1, scaleY=1, offsetX=0, offsetY=0;
    Point source_at(Point original) const {return {(original.x-offsetX)/scaleX,(original.y-offsetY)/scaleY};}
    Point original_at(Point source) const {return {offsetX+source.x*scaleX,offsetY+source.y*scaleY};}
};
inline bool allow_width_growth(const std::string &path) {
    int id=0,end=0;
    if(std::sscanf(path.c_str(),"img/npc1/PCimg[%d].png%n",&id,&end)!=1 || end!=int(path.size()) || id<1 || id>112) return false;
    const int base=(id-1)%28+1;
    // The 68 straight masks only. Feet, short caps and all six special/out
    // silhouettes retain their original mask, including holes and concavities.
    return (base>=2 && base<=7) || base==14 || base==15 || base==16 || base==18 || base==19 ||
        base==21 || base==22 || base==24 || base==25 || base==27 || base==28;
}
inline Registration registration(const Bitmap &original, const MasterSpec &m, Role role, int headId, int density, bool growWidth=false) {
    if(!original.valid() || density<1 || density>4) throw std::runtime_error("Invalid mask/density");
    const Box b=alpha_box(original);Registration r;
    r.originalWidth=original.width;r.originalHeight=original.height;r.density=density;
    if(role==Role::Head) {
        const Point neck=head_landmark(headId);
        const float span=std::max(1.f,neck.y-(b.y+b.h*.5f));
        const float q=std::min(span/(m.bottom.y-m.top.y), b.w*m.widthRatio/m.source.w);
        r.scaleX=r.scaleY=q;r.offsetX=neck.x-q*m.bottom.x;r.offsetY=neck.y-q*m.bottom.y;
    } else {
        r.scaleX=b.w*m.widthRatio/m.source.w;
        r.scaleY=std::max(1.f,b.h-2)/(m.bottom.y-m.top.y);
        r.offsetX=b.x+b.w*.5f-r.scaleX*m.top.x;r.offsetY=b.y+1-r.scaleY*m.top.y;
    }
    const Point lo=r.original_at({m.source.x,m.source.y});
    const Point hi=r.original_at({m.source.x+m.source.w,m.source.y+m.source.h});
    const bool grow=growWidth || role==Role::Head;
    const float left=grow?std::floor(std::min(0.f,lo.x)):0,right=grow?std::ceil(std::max(float(original.width),hi.x)):float(original.width);
    const float top=role==Role::Head?std::floor(std::min(0.f,lo.y)):0;
    const float bottom=role==Role::Head?std::ceil(std::max(float(original.height),hi.y)):float(original.height);
    r.rect={left,top,right-left,bottom-top};return r;
}
inline Palette palette(bool player, const float rgb[3]) {
    if(player) return Palette::Native;
    const float hi=std::max({rgb[0],rgb[1],rgb[2]}),lo=std::min({rgb[0],rgb[1],rgb[2]});
    if(hi-lo<.08f) return Palette::Iron;
    if(rgb[0]>rgb[2]+.06f && rgb[1]>rgb[2]+.06f && std::abs(rgb[0]-rgb[1])<.18f) return Palette::Ochre;
    if(rgb[0]>rgb[1]+.06f && rgb[2]>rgb[1]+.06f) return Palette::Violet;
    if(rgb[1]>rgb[0]+.06f && rgb[2]>rgb[0]+.06f && std::abs(rgb[1]-rgb[2])<.18f) return Palette::Teal;
    if(rgb[0]>=rgb[1] && rgb[0]>=rgb[2]) return Palette::Rust;
    return rgb[1]>=rgb[2]?Palette::Moss:Palette::Slate;
}
inline Color recolor(Color c, Palette p) {
    if(p==Palette::Native) return c;
    const float y=.2126f*c.r+.7152f*c.g+.0722f*c.b;
    constexpr std::array<float,3> tones[]={{1,1,1},{1.04f,.74f,.59f},{.79f,.87f,.63f},
        {.86f,.84f,.80f},{.63f,.79f,1.03f},{.87f,.65f,.98f},{1.03f,.88f,.57f},{.58f,.92f,.89f}};
    const auto &tone=tones[int(p)];
    c.r=std::min(1.f,.35f*c.r+.65f*y*tone[0]);c.g=std::min(1.f,.35f*c.g+.65f*y*tone[1]);
    c.b=std::min(1.f,.35f*c.b+.65f*y*tone[2]);return c;
}
struct Baked { Bitmap image; Registration registration; };
inline Baked bake(const Bitmap &original, const Master &master, Role role, int headId, Palette palette, int density=4, bool growWidth=false) {
    Baked out;out.registration=registration(original,master.spec,role,headId,density,growWidth);
    const auto &r=out.registration;const Box b=alpha_box(original);
    out.image.width=int(r.rect.w*density);out.image.height=int(r.rect.h*density);out.image.premultiplied=true;
    if(out.image.width>1024 || out.image.height>1024) throw std::runtime_error("Art canvas exceeds limit");
    out.image.rgba.resize(size_t(out.image.width)*out.image.height*4);
    const float footprint=std::max(1/r.scaleX,1/r.scaleY)/density;
    for(int y=0;y<out.image.height;++y) for(int x=0;x<out.image.width;++x) {
        const Point at{r.rect.x+(x+.5f)/density,r.rect.y+(y+.5f)/density};
        const auto source=r.source_at(at);Color c=recolor(material(master,source.x,source.y,footprint),palette);
        const float mask=sample(original,at.x,at.y).a;
        if(role==Role::Head) {
            const auto neck=head_landmark(headId);
            if(std::hypot(at.x-neck.x,at.y-neck.y)<=1.25f) c.a=std::max(c.a,mask);
        } else {
            // Retain original caps/length at both ends; only the middle gets
            // the authored material silhouette outside the original thin mask.
            float t=growWidth?std::clamp((std::min(at.y-b.y,b.y+b.h-at.y)-2.f)/3.f,0.f,1.f):0;
            t=t*t*(3-2*t);c.a=std::max(mask,c.a*t);
            if(at.y<b.y || at.y>=b.y+b.h) c.a=mask;
        }
        auto *p=out.image.rgba.data()+(size_t(y)*out.image.width+x)*4;
        p[0]=byte(c.r*c.a);p[1]=byte(c.g*c.a);p[2]=byte(c.b*c.a);p[3]=byte(c.a);
    }
    return out;
}
// Offset only: original rotation, pivot, scale, ordering and logical W/H stay
// intact. Asymmetric padding swaps sides under the original texture mirror.
inline Point draw_offset(const Registration &r, float scale, float angle, bool flip) {
    const float x=(flip?r.originalWidth-r.rect.x-r.rect.w:r.rect.x)*scale,y=r.rect.y*scale;
    return {x*std::cos(angle)-y*std::sin(angle),x*std::sin(angle)+y*std::cos(angle)};
}
inline Point art_point_to_original(const Registration &r, Point artPixel, bool flip) {
    const float x=r.rect.x+artPixel.x/r.density;
    return {flip?r.originalWidth-x:x,r.rect.y+artPixel.y/r.density};
}
}
