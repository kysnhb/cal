// Isolated hidden Axmol diagnostic. Does not link or run the game runtime.
#include "axmol.h"
#include "../recomp/rt/rt_sprite_pool.h"
#include <cstdio>
#include <cstdlib>
class ProbeApp : public ax::Application {
    bool applicationDidFinishLaunching() override { return true; }
    void applicationDidEnterBackground() override {}
    void applicationWillEnterForeground() override {}
};
static bool probe(ax::Sprite *s, ax::Texture2D *texture, const char *label, bool verbose = true) {
    const auto &q = s->getQuad();
    bool sampler = false;
    for (const auto &entry : s->getProgramState()->getVertexTextureInfos())
        for (auto *bound : entry.second.textures) if (bound == texture->getBackendTexture()) sampler = true;
    const bool good = s->getTexture() == texture && sampler &&
        std::abs(q.bl.texCoords.u) < .001f && std::abs(q.bl.texCoords.v - 1) < .001f &&
        std::abs(q.tr.texCoords.u - 1) < .001f && std::abs(q.tr.texCoords.v) < .001f;
    if (verbose || !good) std::printf("%s texture=%dx%d rect=%.0fx%.0f content=%.0fx%.0f UV bl=(%.4f,%.4f) tr=(%.4f,%.4f) sampler=%d result=%s\n", label,
        texture->getPixelsWide(), texture->getPixelsHigh(), s->getTextureRect().size.width, s->getTextureRect().size.height,
        s->getContentSize().width, s->getContentSize().height, q.bl.texCoords.u, q.bl.texCoords.v, q.tr.texCoords.u, q.tr.texCoords.v, sampler, good ? "PASS" : "FAIL");
    return good;
}
int main(int argc, char **argv) {
    if (argc != 3) return 2;
    ProbeApp app;
    auto *files = ax::FileUtils::getInstance();
    files->addSearchPath(argv[1]);
    files->addSearchPath(argv[2]);
    files->addSearchPath(std::string(argv[2]) + "/axslc");
    GfxContextAttrs attrs{8, 8, 8, 8, 24, 8, 0}; attrs.visible = false;
    ax::RenderView::setGfxContextAttrs(attrs);
    auto *director = ax::Director::getInstance();
    auto *view = ax::RenderViewImpl::createWithRect("Sprite texture diagnostic", ax::Rect(0, 0, 64, 64));
    director->setRenderView(view);
    view->setDesignResolutionSize(512, 320, ResolutionPolicy::SHOW_ALL);
    auto *tc = director->getTextureCache();
    auto *old = tc->addImage("img/npc1/PCimg[5].png");
    auto *master = tc->addImage("img/gothic/human_torso.png");
    if (!old || !master) return 3;
    auto *direct = ax::Sprite::createWithTexture(master);
    auto *swapped = ax::Sprite::createWithTexture(old);
    swapped->setTexture(master);
    swapped->setTextureRect(ax::Rect(0, 0, master->getPixelsWide(), master->getPixelsHigh()));
    std::printf("contentScaleFactor=%.4f\n", director->getContentScaleFactor());
    bool good = probe(direct, master, "DIRECT") & probe(swapped, master, "SWAPPED");
    ax::Texture2D *textures[] = {master, tc->addImage("img/gothic/human_limb.png"), tc->addImage("img/gothic/human_boot.png")};
    if (!textures[1] || !textures[2]) return 3;
    auto *parent = ax::Node::create();
    auto *original = ax::Sprite::createWithTexture(old);
    TextureSpritePool pool;
    ax::Sprite *first[3] = {};
    for (int frame = 0; frame < 100; ++frame) {
        for (int i = 0; i < 3; ++i) {
            auto *a = pool.next(textures[i], parent);
            auto *b = pool.next(textures[i], parent);
            if (!a || !b) return 4;
            good &= a != b && !a->isVisible() && !b->isVisible();
            if (frame == 0) first[i] = a;
            else good &= first[i] == a;
            good &= probe(a, textures[i], "POOL", frame == 0);
            good &= probe(b, textures[i], "POOL_SECOND", false);
            a->setVisible(true); b->setVisible(true);
        }
        good &= original->getTexture() == old && parent->getChildrenCount() == 6;
        good &= first[0] != first[1] && first[1] != first[2] && first[0] != first[2];
        pool.resetFrame();
    }
    pool.clear();
    good &= parent->getChildrenCount() == 0;
    std::printf("POOL frames=100 textures=3 instances=6 reset/reuse/clear/original-isolation=%s\n", good ? "PASS" : "FAIL");
    std::printf("Scope: texture/UV/sampler state only; no rendered pixel or game-runtime assertion.\n");
    std::fflush(stdout);
    std::_Exit(good ? 0 : 1);
}
