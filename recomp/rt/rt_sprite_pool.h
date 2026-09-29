#pragma once
#include "axmol.h"
#include <unordered_map>
#include <vector>

// Render overrides never reuse the original game-facing sprite or change a
// node's texture identity. Each selected texture owns an independent pool.
class TextureSpritePool {
    struct Bucket { std::vector<ax::Sprite *> nodes; size_t used = 0; };
    std::unordered_map<ax::Texture2D *, Bucket> buckets;
public:
    ax::Sprite *next(ax::Texture2D *texture, ax::Node *parent) {
        auto &bucket = buckets[texture];
        if (bucket.used < bucket.nodes.size()) return bucket.nodes[bucket.used++];
        auto *node = ax::Sprite::createWithTexture(texture);
        if (!node) return nullptr;
        node->setAnchorPoint(ax::Vec2(0, 1));
        node->setVisible(false);
        parent->addChild(node);
        bucket.nodes.push_back(node);
        ++bucket.used;
        return node;
    }
    void resetFrame() {
        for (auto &entry : buckets) {
            for (auto *node : entry.second.nodes) node->setVisible(false);
            entry.second.used = 0;
        }
    }
    void clear() {
        for (auto &entry : buckets) for (auto *node : entry.second.nodes) node->removeFromParent();
        buckets.clear();
    }
};
