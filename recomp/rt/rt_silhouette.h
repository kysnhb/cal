#pragma once
#include "rt_stickrig_art.h"

// Cached white alpha masks; vertex colors supply the black core and team light.
// This keeps original joint geometry and requires no per-frame image processing.
namespace aos5_silhouette {
using namespace aos5_stickrig;
enum class Team { Neutral, Friendly, Enemy };
inline Team team(int actor, int friendlyLimit, int ai) {
    if(actor<0 || actor>=200) return Team::Neutral;
    // initPimg/COMAI use [0, friendlyLimit) for allies and [friendlyLimit, max)
    // for opponents. COMAI's >=1000 branch targets opponents (civilians,
    // followers and converted allies), even when retaining an opponent slot.
    if(actor==0 || (friendlyLimit>0 && friendlyLimit<=200 && actor<friendlyLimit) || ai>=1000)
        return Team::Friendly;
    return Team::Enemy;
}
struct Silhouette { Baked core; Bitmap halo; };
inline Silhouette make(const Bitmap &original, const Master *hat, int headId, int density=4) {
    if(!original.valid() || density<1 || density>4) throw std::runtime_error("Invalid silhouette mask");
    Baked shape;
    if(hat) shape=bake(original,*hat,Role::Head,headId,Palette::Native,density,false);
    else {
        shape.registration.originalWidth=original.width;shape.registration.originalHeight=original.height;
        shape.registration.density=density;
        shape.registration.rect={0,0,float(original.width),float(original.height)};
        shape.image.width=original.width*density;shape.image.height=original.height*density;
        shape.image.premultiplied=true;shape.image.rgba.resize(size_t(shape.image.width)*shape.image.height*4);
        for(int y=0;y<shape.image.height;++y) for(int x=0;x<shape.image.width;++x)
            shape.image.rgba[(size_t(y)*shape.image.width+x)*4+3]=aos5_stickrig::byte(sample(original,(x+.5f)/density,(y+.5f)/density).a);
    }
    constexpr int padding=7;const int pad=padding*density;
    Silhouette out;out.core.registration=shape.registration;
    auto &rect=out.core.registration.rect;rect.x-=padding;rect.y-=padding;rect.w+=2*padding;rect.h+=2*padding;
    auto &im=out.core.image;im.width=shape.image.width+2*pad;im.height=shape.image.height+2*pad;im.premultiplied=true;
    if(im.width>1024 || im.height>1024) throw std::runtime_error("Silhouette canvas exceeds limit");
    im.rgba.resize(size_t(im.width)*im.height*4);
    for(int y=0;y<shape.image.height;++y) for(int x=0;x<shape.image.width;++x) {
        const auto a=shape.image.rgba[(size_t(y)*shape.image.width+x)*4+3];
        auto *p=im.rgba.data()+(size_t(y+pad)*im.width+x+pad)*4;
        p[0]=p[1]=p[2]=p[3]=a;
    }
    // Two-pass chamfer distance is linear in texture area. Opaque interior is
    // harmless: every halo is rendered below ALL opaque parts of its actor.
    const int w=im.width,h=im.height;std::vector<float> dist(size_t(w)*h,10000.f);
    for(size_t i=0;i<dist.size();++i) if(im.rgba[i*4+3]) dist[i]=1-im.rgba[i*4+3]/255.f;
    auto relax=[&](int x,int y,int nx,int ny,float step) {
        if(nx>=0 && ny>=0 && nx<w && ny<h) dist[size_t(y)*w+x]=std::min(dist[size_t(y)*w+x],dist[size_t(ny)*w+nx]+step);
    };
    for(int y=0;y<h;++y) for(int x=0;x<w;++x) {
        relax(x,y,x-1,y,1);relax(x,y,x,y-1,1);relax(x,y,x-1,y-1,1.41421356f);relax(x,y,x+1,y-1,1.41421356f);
    }
    for(int y=h-1;y>=0;--y) for(int x=w-1;x>=0;--x) {
        relax(x,y,x+1,y,1);relax(x,y,x,y+1,1);relax(x,y,x+1,y+1,1.41421356f);relax(x,y,x-1,y+1,1.41421356f);
    }
    out.halo=im;
    for(size_t i=0;i<dist.size();++i) {
        const float d=dist[i]/density;
        const float rim=.80f*std::clamp((1.9f-d)/.95f,0.f,1.f);
        const float spread=.24f*std::pow(std::clamp(1-d/6.f,0.f,1.f),2.f);
        const auto a=aos5_stickrig::byte(std::min(.94f,rim+spread));
        auto *p=out.halo.rgba.data()+i*4;p[0]=p[1]=p[2]=p[3]=a;
    }
    return out;
}
}
