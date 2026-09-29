// Included by rt_engine.cpp after SpriteImpl. All baking happens at sprite
// initialization. draw_sprite only selects cached art and applies registration.
#include "rt_stickrig_json.h"
#include "rt_stickrig_roles.h"
#include "rt_silhouette.h"

namespace stickrig_runtime {
using namespace aos5_stickrig;
struct Art { Texture2D *texture=nullptr,*halo=nullptr; Registration registration; int width=0,height=0; };
struct Context {
    int actor=-1,frame=-1,record=-1,values[7]={},friendlyLimit=0,ai=0;
    float base[3]={};
    bool valid=false,baseKnown=false,headReplaced=false;
};
static std::vector<Context> contexts;
static std::unordered_map<int,int> haloLayers;
static float auraSeconds=0;
static std::unordered_map<std::string,Bitmap> originals;
static std::unordered_map<std::string,Art> cache;
static Master masters[5]; // Role values 0..3; optional full torso at 4.
static bool available[5]={},checked=false,restoreFilters=false;
static int density=4;
static const char *names[]={"limb","torso_upper","torso_lower","head","torso_full"};
struct Upload { Texture2D *texture; Image *rgba; };
static std::unordered_map<uint64_t,std::vector<Upload>> uploads;
static size_t uniqueTextures=0,uploadBytes=0;

static Bitmap decode(const std::string &path) {
    Image *decoded=new Image; Bitmap image;
    if(!decoded->initWithImageFile(path)) {decoded->release();throw std::runtime_error("Cannot decode "+path);}
    image.width=decoded->getWidth();image.height=decoded->getHeight();
    image.premultiplied=decoded->hasPremultipliedAlpha();
    const size_t pixels=size_t(image.width)*image.height;
    image.rgba.resize(pixels*4);
    if(decoded->getPixelFormat()==backend::PixelFormat::RG8 && decoded->getDataLen()==ssize_t(pixels*2))
        aos5_stickman::expand_la(decoded->getData(),pixels,image.rgba.data());
    else if(decoded->getPixelFormat()==backend::PixelFormat::RGBA8 && decoded->getDataLen()==ssize_t(pixels*4))
        std::copy_n(decoded->getData(),pixels*4,image.rgba.data());
    else {decoded->release();throw std::runtime_error("Unsupported RGBA/LA format: "+path);}
    decoded->release();return image;
}
static const Bitmap *original(const std::string &path) {
    auto it=originals.find(path);
    if(it!=originals.end()) return it->second.valid()?&it->second:nullptr;
    try {return &originals.emplace(path,decode(path)).first->second;}
    catch(const std::exception &e) {rt_log("[stickrig] %s; original asset fallback",e.what());originals.emplace(path,Bitmap{});return nullptr;}
}
static Texture2D *upload(const Bitmap &image,const std::string &key) {
    uint64_t digest=14695981039346656037ull;
    for(uint8_t b:image.rgba) {digest^=b;digest*=1099511628211ull;}
    auto &bucket=uploads[digest];
    for(const auto &entry:bucket)
        if(entry.rgba->getWidth()==image.width && entry.rgba->getHeight()==image.height &&
            entry.rgba->hasPremultipliedAlpha()==image.premultiplied && entry.rgba->getDataLen()==ssize_t(image.rgba.size()) &&
            std::memcmp(entry.rgba->getData(),image.rgba.data(),image.rgba.size())==0) return entry.texture;
    auto *raw=new Image;
    if(!raw->initWithRawData(image.rgba.data(),image.rgba.size(),image.width,image.height,8,image.premultiplied)) {
        raw->release();return nullptr;
    }
    // VolatileTextureMgr retains this RGBA Image, including its PMA flag.
    // Android restoration uses these bytes, never the old LA PNG path.
    auto *texture=Director::getInstance()->getTextureCache()->addImage(raw,key,backend::PixelFormat::RGBA8);
    if(texture) {
        texture->retain();bucket.push_back({texture,raw}); // One retained RGBA Image per unique upload.
        ++uniqueTextures;uploadBytes+=image.rgba.size();
    } else raw->release();
    return texture;
}
static void filters(Texture2D *texture) {
    // The CPU baker already filters the masters into 4x art. Keep level zero:
    // another coarse GPU mip average loses the small costume/head boundaries.
    Texture2D::TexParams sampler;
    sampler.minFilter=backend::SamplerFilter::LINEAR;
    sampler.magFilter=backend::SamplerFilter::LINEAR;
    texture->setTexParameters(sampler);
}
static void load() {
    if(checked) return;
    checked=true;
    try {
        const auto json=FileUtils::getInstance()->getStringFromFile("aos5core/stickrig.json");
        rapidjson::Document doc;doc.Parse(json.c_str());
        if(doc.HasParseError() || !doc.IsObject() || !doc.HasMember("version") || !doc["version"].IsInt() ||
            doc["version"].GetInt()!=1 || !doc.HasMember("density") || !doc["density"].IsInt() ||
            doc["density"].GetInt()<1 || doc["density"].GetInt()>4 || !doc.HasMember("masters") || !doc["masters"].IsObject())
            throw std::runtime_error("Missing/invalid stickrig.json version, density or masters");
        density=doc["density"].GetInt();
        std::unordered_map<std::string,Bitmap> images;
        for(int i=3;i<4;++i) { // Only the retained hat needs an authored master.
            try {
                if(!doc["masters"].HasMember(names[i])) throw std::runtime_error("Missing master");
                const auto spec=master_spec(doc["masters"][names[i]]);
                auto found=images.find(spec.path);
                if(found==images.end()) found=images.emplace(spec.path,decode(spec.path)).first;
                masters[i]=prepare(found->second,spec);available[i]=true;
            } catch(const std::exception &e) {rt_log("[stickrig] role=%s: %s; limb/original fallback",names[i],e.what());}
        }
        // Renderer-recreated is dispatched BEFORE VolatileTextureMgr reloads.
        // Defer sampler repair until the next draw, after all bytes are restored.
        Director::getInstance()->getEventDispatcher()->addCustomEventListener(EVENT_RENDERER_RECREATED,
            [](EventCustom *) {restoreFilters=true;});
    } catch(const std::exception &e) {rt_log("[stickrig] %s; keeping original sprites",e.what());}
}
static int image_id(const std::string &path,const char *pattern) {
    int id=-1,end=0;
    return std::sscanf(path.c_str(),pattern,&id,&end)==1 && end==int(path.size())?id:-1;
}
static std::string key(const std::string &path,int master,Palette palette) {
    return path+":"+std::to_string(master)+":"+std::to_string(int(palette));
}
static int fallback(int master) {
    if(available[master]) return master;
    return master!=int(Role::Head) && available[0]?0:-1;
}
static Texture2D *upload_padded(const Bitmap &image,const std::string &key) {
    Bitmap pot;pot.width=pot.height=1;pot.premultiplied=true;
    while(pot.width<image.width)pot.width*=2;
    while(pot.height<image.height)pot.height*=2;
    pot.rgba.resize(size_t(pot.width)*pot.height*4);
    for(int y=0;y<image.height;++y)
        std::copy_n(image.rgba.data()+size_t(y)*image.width*4,image.width*4,pot.rgba.data()+size_t(y)*pot.width*4);
    auto *tex=upload(pot,key);if(tex) filters(tex);return tex;
}
static void initialize(const std::string &path,aos5_stickman::Part part) {
    if(part==aos5_stickman::Part::None) return;
    load();const auto *mask=original(path);if(!mask) return;
    if(cache.count(path)) return;
    Art art;
    try {
        const int head=image_id(path,"img/npc2/Headimg[%d].png%n");
        const Master *hat=part==aos5_stickman::Part::Head && available[3]?&masters[3]:nullptr;
        const auto silhouette=aos5_silhouette::make(*mask,hat,head,density);
        art.texture=upload_padded(silhouette.core.image,"aos5-silhouette:core:"+path);
        art.halo=upload_padded(silhouette.halo,"aos5-silhouette:halo:"+path);
        if(!art.texture || !art.halo) throw std::runtime_error("Silhouette texture upload failed");
        art.registration=silhouette.core.registration;
        art.width=silhouette.core.image.width;art.height=silhouette.core.image.height;
    } catch(const std::exception &e) {rt_log("[stickrig] asset=%s: %s; original fallback",path.c_str(),e.what());}
    cache.emplace(path,art); // Including failed entries: never bake in draw.
    rt_log("[stickrig-init] asset=%s cachedVariants=%zu uniqueTextures=%zu POT_RGBA_bytes=%zu retainedRGBA_bytes=%zu GPU_base_bytes=%zu density=%d filter=LINEAR mip=0; original W/H and ROM pivots retained",
        path.c_str(),cache.size(),uniqueTextures,uploadBytes,uploadBytes,uploadBytes,density);
}
static Context *context() {return contexts.empty()?nullptr:&contexts.back();}
static bool suppress_overlay(const std::string &path) {
    const auto *c=context();return path=="img/npc2/Headimg[41].png" && c && c->valid &&
        c->actor==0 && c->values[4]==2 && c->headReplaced;
}
static const Art *select(const SpriteImpl *si,const float incoming[3],float modulation[3]) {
    if(restoreFilters) {
        for(auto &entry:cache) {if(entry.second.texture) filters(entry.second.texture);if(entry.second.halo) filters(entry.second.halo);}
        restoreFilters=false;
    }
    const auto *c=context();
    const float *base=c && c->baseKnown?c->base:incoming;
    const auto found=cache.find(si->path);
    if(found==cache.end() || !found->second.texture) return nullptr;
    bool effect=false;
    for(int i=0;i<3;++i) effect=effect || std::abs(incoming[i]-base[i])>1.5f/255;
    // Preserve damage/status flashes without permanently recoloring the body.
    for(int i=0;i<3;++i) modulation[i]=effect?.018f+.32f*std::clamp(incoming[i],0.f,1.f):.018f;
    return &found->second;
}
static void halo(SpriteImpl *si,const Art *art,Sprite *core) {
    const auto *c=context();
    if(!c || !c->valid || !art || !art->halo) return;
    const auto team=aos5_silhouette::team(c->actor,c->friendlyLimit,c->ai);
    if(team==aos5_silhouette::Team::Neutral) return;
    auto *node=si->overrides.next(art->halo,g_scene->gameRoot());if(!node) return;
    node->setTextureRect(core->getTextureRect());node->setAnchorPoint(core->getAnchorPoint());
    node->setPosition(core->getPosition());node->setScaleX(core->getScaleX());node->setScaleY(core->getScaleY());
    node->setRotation(core->getRotation());node->setFlippedX(core->isFlippedX());node->setFlippedY(false);
    node->setColor(team==aos5_silhouette::Team::Friendly?Color3B(48,191,255):Color3B(255,57,67));
    node->setOpacity(uint8_t(core->getOpacity()*(.91f+.06f*std::sin(auraSeconds*2.8f))));
    node->setBlendFunc(BlendFunc::ALPHA_PREMULTIPLIED);node->setVisible(core->isVisible());
    auto it=haloLayers.find(c->actor);
    if(it==haloLayers.end()) it=haloLayers.emplace(c->actor,++g_zorder).first;
    node->setLocalZOrder(it->second);
    if(g_trace_draw && c->values[4]==2)
        rt_log("[silhouette] actor=%d friendlyLimit=%d ai=%d team=%s haloZ=%d",c->actor,c->friendlyLimit,c->ai,
            team==aos5_silhouette::Team::Friendly?"blue":"red",it->second);
}
static void mark_head(const SpriteImpl *si) {
    auto *c=context();if(c && c->valid && c->values[4]==2 && si->stick==aos5_stickman::Part::Head)c->headReplaced=true;
}
}
EXT void aos5_stickrig_begin(int actor,int frame,int record) {
    using namespace stickrig_runtime;
    Context c;c.actor=actor;c.frame=frame;c.record=record;
    auto *game=g_scene?g_scene->game():nullptr;
    if(game && actor>=0 && actor<200 && frame>0 && frame<682 && record>=0 && record<7034) {
        std::copy_n(reinterpret_cast<const int *>(game+0xd00b8+record*28),7,c.values);
        c.valid=true;
        c.friendlyLimit=*reinterpret_cast<const int *>(game+0x32c134);
        c.ai=*reinterpret_cast<const int *>(game+0x8dd3c+actor*0x288);
        const int color=*reinterpret_cast<const int *>(game+0x8dd20+actor*0x288);
        // Color table occupies 0x8cb70..0x8cdef (40 RGBA integer records).
        if(color>=0 && color<40) {
            c.baseKnown=true;
            for(int i=0;i<3;++i)c.base[i]=std::clamp(*reinterpret_cast<const int *>(game+0x8cb70+color*16+i*4)/255.f,0.f,1.f);
            if(*reinterpret_cast<const int *>(game+0x8db14+actor*0x288)==0x15) {c.base[0]=0;c.base[1]=110.f/255;c.base[2]=5.f/255;}
        }
    }
    contexts.push_back(c); // Recursive LPimg calls restore their parent's scope.
}
EXT void aos5_stickrig_end() {
    if(!stickrig_runtime::contexts.empty())stickrig_runtime::contexts.pop_back();
}
