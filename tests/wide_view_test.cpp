#include "rt_wide_view.h"
#include <cassert>
#include <cmath>
using namespace aos5_wide;
static bool near(float a,float b) { return std::abs(a-b)<0.01f; }
int main() {
    assert(near(width/height,19.5f/9));
    for (Insets safe : {Insets{}, Insets{96,0,96,34}, Insets{0,20,0,60}}) {
        for (Point source : {Point{75,568}, {210,568}, {155,457}, {725,573}, {875,557}, {745,450}, {890,410}, {610,570}, {500,580}, {915,28}}) {
            auto p=hud(source,safe);
            assert(p.x>=safe.left && p.x<=width-safe.right);
            assert(p.y>=safe.top && p.y<=height-safe.bottom);
            assert(unproject(p,safe,11,0));
            assert(near(p.x,source.x)&&near(p.y,source.y));
        }
        Point gap{width/2,580};assert(!unproject(gap,safe,11,0));
    }
    for (int mode : {0,2,5,12,13,14,21,70}) {
        auto p=menu({658,256});assert(unproject(p,{},mode,0));assert(near(p.x,658));
    }
    // Pause changes mode on pointer-down. Its pointer-up must still release
    // the original finger even though the menu has a different coordinate map.
    auto release=hud({915,28},{});assert(unproject(release,{},13,2));
    assert(world(11)&&world(13)&&world(14));assert(!world(12));
}
