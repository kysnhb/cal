#include "rt_stickrig_json.h"
#include "rt_stickrig_roles.h"
#include <cassert>
#include <fstream>
#include <iostream>
#include <iterator>
#include <limits>
#include <map>
using namespace aos5_stickrig;
static std::string read(const char *path) {
    std::ifstream f(path,std::ios::binary);assert(f.good());
    return {std::istreambuf_iterator<char>(f),std::istreambuf_iterator<char>()};
}
static Bitmap bitmap(const rapidjson::Value &v) {
    Bitmap b;b.width=v["width"].GetInt();b.height=v["height"].GetInt();
    const auto bytes=read(v["raw"].GetString());b.rgba.assign(bytes.begin(),bytes.end());assert(b.valid());return b;
}
static void close(float a,float b) {assert(std::abs(a-b)<.002f);}
static void registration_test(const Registration &r) {
    // Compare padded quad coordinates against the unpadded original, including
    // asymmetric/negative padding. This catches the usual mirrored-head drift.
    for(bool flip:{false,true})for(float angle:{0.f,.4f,1.57f,3.1f,5.7f})for(float scale:{.5f,1.f,1.7f})
        for(Point original: {Point{0,0},Point{float(r.originalWidth),float(r.originalHeight)},Point{3.5f,12.75f}}) {
            const Point pixel{(original.x-r.rect.x)*r.density,(original.y-r.rect.y)*r.density};
            const Point local{flip?r.rect.w-pixel.x/r.density:pixel.x/r.density,pixel.y/r.density};
            const auto off=draw_offset(r,scale,angle,flip);
            const Point got{off.x+scale*(local.x*std::cos(angle)-local.y*std::sin(angle)),
                off.y+scale*(local.x*std::sin(angle)+local.y*std::cos(angle))};
            const Point expected{flip?r.originalWidth-original.x:original.x,original.y};
            close(got.x,scale*(expected.x*std::cos(angle)-expected.y*std::sin(angle)));
            close(got.y,scale*(expected.x*std::sin(angle)+expected.y*std::cos(angle)));
        }
}
int main(int argc,char **argv) {
    assert(argc==2);rapidjson::Document d;const auto json=read(argv[1]);d.Parse(json.c_str());assert(!d.HasParseError());
    std::map<std::string,Master> masters;
    for(auto &v:d["masters"].GetArray()) masters.emplace(v["role"].GetString(),prepare(bitmap(v),master_spec(v["spec"])));
    int grow=0,body=0,heads=0,bakes=0;size_t pixels=0;
    std::map<int,Baked> headPairs;
    for(auto &v:d["originals"].GetArray()) {
        const std::string path=v["path"].GetString();const auto im=bitmap(v);const auto box=alpha_box(im);
        const bool head=aos5_stickman::part(path)==aos5_stickman::Part::Head;
        const bool growth=allow_width_growth(path);grow+=growth;heads+=head;body+=!head;
        int id=0;std::sscanf(path.c_str(),head?"img/npc2/Headimg[%d].png":"img/npc1/PCimg[%d].png",&id);
        for(auto &entry:masters) {
            if(head!=(entry.first=="head"))continue;
            const Role role=entry.first=="torso_full"?Role::TorsoUpper:role_from_name(entry.first);
            for(int p=0;p<int(Palette::Count);++p) {
                const auto baked=bake(im,entry.second,role,id,Palette(p),4,growth);++bakes;
                const auto &r=baked.registration;registration_test(r);pixels+=baked.image.rgba.size()/4;
                assert(r.originalWidth==im.width && r.originalHeight==im.height);
                for(int y=0;y<baked.image.height;++y)for(int x=0;x<baked.image.width;++x) {
                    const auto *rgba=baked.image.rgba.data()+(size_t(y)*baked.image.width+x)*4;
                    assert(rgba[0]<=rgba[3] && rgba[1]<=rgba[3] && rgba[2]<=rgba[3]);
                    const Point at{r.rect.x+(x+.5f)/4,r.rect.y+(y+.5f)/4};
                    if(!head && (!growth || at.y-box.y<=2 || box.y+box.h-at.y<=2))
                        assert(rgba[3]==byte(sample(im,at.x,at.y).a));
                }
                if(head && p==0)headPairs.emplace(id,baked);
            }
        }
    }
    assert(grow==68 && body==118 && heads==12);
    for(int first:{1,3,5,7,9,31}) {
        const auto &a=headPairs.at(first),&b=headPairs.at(first+1);
        assert(a.image.rgba==b.image.rgba && a.image.width==b.image.width && a.image.height==b.image.height);
        close(a.registration.offsetX,b.registration.offsetX);close(a.registration.offsetY,b.registration.offsetY);
    }
    int upper=0,lower=0;
    for(const auto &r:torso_records) {
        assert(record_role(r.frame,r.record,r.values)==r.role);
        upper+=r.role==Role::TorsoUpper;lower+=r.role==Role::TorsoLower;
        int changed[7];std::copy_n(r.values,7,changed);++changed[1];assert(record_role(r.frame,r.record,changed)==Role::Limb);
        for(int tag:{9,13}) {std::copy_n(r.values,7,changed);changed[4]=tag;assert(record_role(r.frame,r.record,changed)==Role::Limb);}
    }
    assert(upper==162 && lower==147);
    const int upper10[]={5,11,-110,25,0,10,10},lower10[]={5,4,-83,7,0,10,10};
    assert(record_role(10,98,upper10)==Role::TorsoUpper && record_role(10,99,lower10)==Role::TorsoLower);
    const float teams[][3]={{1,.1f,.1f},{.1f,.9f,.1f},{.1f,.2f,.9f},{.7f,.1f,.8f},{.9f,.8f,.1f},{.1f,.8f,.8f},{.5f,.5f,.5f}};
    const Palette expected[]={Palette::Rust,Palette::Moss,Palette::Slate,Palette::Violet,Palette::Ochre,Palette::Teal,Palette::Iron};
    for(int i=0;i<7;++i) {assert(palette(false,teams[i])==expected[i]);assert(palette(true,teams[i])==Palette::Native);}
    Bitmap straight{2,2,false,{240,80,32,128,240,80,32,128,240,80,32,128,240,80,32,128}},pma=straight;
    pma.premultiplied=true;for(int i=0;i<4;++i)for(int c=0;c<3;++c)pma.rgba[4*i+c]=byte(straight.rgba[4*i+c]/255.f*128/255.f);
    auto x=sample(straight,1,1),y=sample(pma,1,1);assert(std::abs(x.r-y.r)<=1.f/255 && x.a==y.a);
    auto invalid=masters.at("limb").spec;invalid.top.x=std::numeric_limits<float>::quiet_NaN();
    bool rejected=false;try{prepare(straight,invalid);}catch(const std::exception &){rejected=true;}assert(rejected);
    std::cout<<"PASS: "<<bakes<<" bakes, "<<pixels<<" PMA pixels; 130 originals, 68 width-growth masks, 50 conservative body masks; caps/endpoints; 6 identical head pairs; rotated/scaled/mirrored padding; 309 exact roles; tag9/13 fallback; 7 distinct muted enemy palettes; LA/PMA and invalid metadata.\n";
}
