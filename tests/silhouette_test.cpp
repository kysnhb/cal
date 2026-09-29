#include "rt_silhouette.h"
#include <cassert>
#include <cstdio>
using namespace aos5_silhouette;
int main() {
    assert(team(0,30,0)==Team::Friendly);
    assert(team(12,30,1501)==Team::Friendly); // hostage/follower pool
    assert(team(30,30,80)==Team::Enemy);
    assert(team(90,30,1500)==Team::Friendly); // converted opponent
    assert(team(-1,30,0)==Team::Neutral);
    assert(team(200,30,0)==Team::Neutral);
    assert(team(4,0,1)==Team::Enemy); // invalid boundary never marks every NPC friendly
    Bitmap mask;mask.width=11;mask.height=19;mask.rgba.resize(11*19*4);
    for(int y=2;y<17;++y) for(int x=3;x<8;++x) mask.rgba[(y*11+x)*4+3]=(y==2?128:255);
    const auto s=make(mask,nullptr,-1,4);
    assert(s.core.registration.originalWidth==11 && s.core.registration.originalHeight==19);
    assert(s.core.registration.rect.x==-7 && s.core.registration.rect.w==25);
    const auto &im=s.core.image;
    for(int y=0;y<im.height;++y) for(int x=0;x<im.width;++x) {
        const auto a=byte(sample(mask,(x+.5f)/4-7,(y+.5f)/4-7).a);
        const auto *p=&im.rgba[(size_t(y)*im.width+x)*4];
        assert(p[3]==a && p[0]==a && p[1]==a && p[2]==a); // no thickened geometry
        const auto *h=&s.halo.rgba[(size_t(y)*im.width+x)*4];
        assert(h[0]<=h[3] && h[1]<=h[3] && h[2]<=h[3]); // PMA, no dark fringe
        if(x==0 || y==0 || x==im.width-1 || y==im.height-1) assert(h[3]==0); // no clipped halo
    }
    auto alpha=[&](int x,int y) {return s.halo.rgba[(size_t(y)*im.width+x)*4+3];};
    assert(alpha(36,50)>alpha(28,50) && alpha(28,50)>alpha(16,50));
    for(bool flip:{false,true}) {
        const auto off=draw_offset(s.core.registration,1,0,flip);
        assert(off.x==-7 && off.y==-7);
    }
    puts("PASS silhouette: original alpha/geometry, padded mirror pivots, PMA halo falloff and ally/hostage/enemy classification.");
}
