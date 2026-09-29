/* rt_engine.h — 원작 게임 로직(재컴파일)을 담는 Axmol 장면 */
#pragma once
#include "axmol.h"
#include <cstdint>

extern "C" {
typedef int64_t gh_long_t;
/* rt_core.c 의 원작 std::string 함수 (셈 안에서도 쓴다) */
void FUN_009d4eac(uint64_t *out, char *s);
int64_t *FUN_009d899c(int64_t *dst, int64_t *src);
}

class Aos5Scene : public ax::Scene {
public:
    bool init() override;
    ax::Node *gameRoot() { return _root; }
    uint8_t *game() { return _game; }

private:
    void tick(float dt);
    void fastTick(float dt);
    void sendTouches(const std::vector<ax::Touch *> &touches, int phase);
    ax::Node *_root = nullptr;
    uint8_t *_game = nullptr;
};
