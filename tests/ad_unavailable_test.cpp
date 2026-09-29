#include "gh.h"
#include <algorithm>
#include <cassert>
#include <string>
#include <unordered_map>
#include <vector>

#define EXT extern "C"
using A = uint64_t;
template<class T> static T *P(A value) { return (T *)(uintptr_t)value; }
#include "rt_ads.inc"

uint8_t *g_aos5_img;
extern "C" gh_long InterstitialFail(uint64_t);
extern "C" gh_long InterstitialClose(uint64_t);
extern "C" gh_long onRewardFail(uint64_t);
extern "C" gh_long onRewardClose(uint64_t);
extern "C" gh_long bzStateGame__AdMob(uint64_t, uint64_t);
extern "C" gh_long test_clear_return_ad_branch(uint64_t);
extern "C" gh_long cocos2d__log_005d21e4(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t) { return 0; }
extern "C" gh_long BannerInterface__hideBannerView_0047fb18() { return 0; }
extern "C" gh_long bzStateGame__showBanner_0039d2c0(uint64_t) { return 0; }
extern "C" gh_long cocos2d__Application__getInstance_00484a3c() { return 0; }
extern "C" gh_long cocos2d__Application__OnInterstitial_00484e24(uint64_t, uint64_t) { assert(false); return 0; }

static int forbiddenCalls;
static gh_long must_not_run(uint64_t) { ++forbiddenCalls; return 0; }

int main()
{
    g_aos5_img = (uint8_t *)calloc(1, AOS5_IMG_END - AOS5_IMG_BASE);
    std::vector<uint8_t> game(0x32c9d8, 0);
    *(uint64_t *)IMG(0xd23c48) = (uint64_t)game.data();
    uint64_t interstitial[3]{}, reward[9]{};
    for (int i = 0; i < 3; ++i) {
        A p = (A)&interstitial[i];
        *(A *)(game.data() + 0x870 + 8 * i) = p;
        InterstitialInterface__InterstitialInterface_0047fbc0(p, (A)"test-interstitial");
        auto *a = ad(p);
        a->onFail = InterstitialFail; a->onClose = InterstitialClose;
        a->onLoad = a->onShow = a->onComplete = must_not_run;
    }
    for (int i = 0; i < 9; ++i) {
        A p = (A)&reward[i];
        *(A *)(game.data() + 0x828 + 8 * i) = p;
        RewardInterface__RewardInterface_0047fc88(p, (A)"test-reward");
        auto *a = ad(p);
        a->onFail = onRewardFail; a->onClose = onRewardClose;
        a->onLoad = a->onShow = a->onComplete = a->onSkip = must_not_run;
    }
    // Real callbacks must change only the documented lock/ready fields.
    for (int repeat = 0; repeat < 1000; ++repeat) {
        for (bool isReward : {false, true}) {
            A p = isReward ? (A)&reward[0] : (A)&interstitial[0];
            *(int *)(game.data() + 0xba8) = 1;
            game[0xb06] = 1;
            auto expected = game;
            *(int *)(expected.data() + 0xba8) = 0;
            if (!isReward) expected[0xb06] = 0;
            if (isReward) RewardInterface__load_0047fcf4(p);
            else InterstitialInterface__load_0047fc2c(p);
            assert(game == expected);
            auto beforeQuery = game;
            assert((isReward ? RewardInterface__isLoaded_0047fd04(p) : InterstitialInterface__isLoaded_0047fc3c(p)) == 0);
            assert(game == beforeQuery); // Availability checks remain read-only.
            *(int *)(game.data() + 0xba8) = 1;
            if (isReward) RewardInterface__show_0047fcfc(p);
            else InterstitialInterface__show_0047fc34(p);
            assert(game == expected);
        }
    }
    // Exercise the real generated dispatch, including cases 10/12 which used
    // to return early with a lock when isLoaded was false.
    const std::vector<uint8_t> gameplay(game.begin() + 0x1a00, game.end());
    for (int kind : {1, 6, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18}) {
        bzStateGame__AdMob((A)game.data(), kind);
        assert(*(int *)(game.data() + 0xba8) == 0);
        assert(std::equal(gameplay.begin(), gameplay.end(), game.begin() + 0x1a00));
    }
    // Exact handleEvent clear-return ad branch, extracted by test_ads.ps1.
    // The full clear screen also writes saves/awards earned combat rewards;
    // isolate only its ad request so user data and earned rewards are untouched.
    uint8_t *self = game.data();
    self[0x32aad4] = 0;
    test_clear_return_ad_branch((A)self);
    assert(*(int *)(self + 0xba4) == 1);
    assert(*(int *)(self + 0xba8) == 0);
    assert(std::equal(gameplay.begin(), gameplay.end(), game.begin() + 0x1a00));
    assert(forbiddenCalls == 0);
    puts("PASS: unavailable load/show unlock via real failure callbacks; queries have no side effects.");
    puts("PASS: 1000 cycles, 12 real AdMob request kinds, gameplay/reward bytes unchanged, no success/reward callbacks.");
    puts("PASS: exact clear-return handleEvent ad branch terminates with ad kind 1 and waiting 0.");
    for (auto &entry : g_ads) delete entry.second;
    free(g_aos5_img);
}
