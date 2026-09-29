// No-SDK ad adapter. Included by rt_engine.cpp and the standalone regression.
// Requires the engine ABI aliases A, EXT and P<T>.
// Keep availability queries pure: callers that set a modal lock retry load
// on an unavailable result, which reports the terminal failure below.
typedef gh_long (*AdCb)(uint64_t);
struct AdIface { std::string zone; AdCb onLoad = nullptr, onShow = nullptr, onComplete = nullptr,
                 onClose = nullptr, onFail = nullptr, onSkip = nullptr; };
/* 원작은 인터페이스 객체를 8바이트로 할당한다 → 상태는 별도 표에 둔다 */
static std::unordered_map<uintptr_t, AdIface *> g_ads;
static AdIface *ad(A self)
{
    auto it = g_ads.find((uintptr_t)self);
    return it == g_ads.end() ? nullptr : it->second;
}
static void ad_init(A self, A zone)
{
    auto *ai = new AdIface();
    ai->zone = P<const char>(zone);
    g_ads[(uintptr_t)self] = ai;
}
static gh_long ad_call(AdCb cb, AdIface *ai) { return cb ? cb((uint64_t)(uintptr_t)ai->zone.c_str()) : 0; }

EXT gh_long RewardInterface__RewardInterface_0047fc88(A self, A zone) { ad_init(self, zone); return 0; }
EXT gh_long RewardInterface__load_0047fcf4(A self)
{
    // The caller may already have set the modal input lock. An unsupported
    // load must terminate through the original failure handler, never onLoad.
    if (auto *a = ad(self)) ad_call(a->onFail ? a->onFail : a->onClose, a);
    return 0;
}
EXT gh_long RewardInterface__isLoaded_0047fd04(A self) { (void)self; return 0; }
EXT gh_long RewardInterface__show_0047fcfc(A self)
{
    if (auto *a = ad(self)) { ad_call(a->onFail, a); ad_call(a->onClose, a); }
    return 0;
}
EXT gh_long RewardInterface__setOnLoadCallback_0047fd20(A s, A cb) { if (auto *a = ad(s)) a->onLoad = (AdCb)cb; return 0; }
EXT gh_long RewardInterface__setOnShowCallback_0047fd2c(A s, A cb) { if (auto *a = ad(s)) a->onShow = (AdCb)cb; return 0; }
EXT gh_long RewardInterface__setOnCompleteCallback_0047fd44(A s, A cb) { if (auto *a = ad(s)) a->onComplete = (AdCb)cb; return 0; }
EXT gh_long RewardInterface__setOnCloseCallback_0047fd5c(A s, A cb) { if (auto *a = ad(s)) a->onClose = (AdCb)cb; return 0; }
EXT gh_long RewardInterface__setOnFailCallback_0047fd38(A s, A cb) { if (auto *a = ad(s)) a->onFail = (AdCb)cb; return 0; }
EXT gh_long RewardInterface__setOnSkipCallback_0047fd50(A s, A cb) { if (auto *a = ad(s)) a->onSkip = (AdCb)cb; return 0; }

EXT gh_long InterstitialInterface__InterstitialInterface_0047fbc0(A self, A zone) { ad_init(self, zone); return 0; }
EXT gh_long InterstitialInterface__load_0047fc2c(A self)
{
    if (auto *a = ad(self)) ad_call(a->onFail ? a->onFail : a->onClose, a);
    return 0;
}
EXT gh_long InterstitialInterface__isLoaded_0047fc3c(A self) { (void)self; return 0; }
EXT gh_long InterstitialInterface__show_0047fc34(A self)
{
    if (auto *a = ad(self)) { ad_call(a->onFail, a); ad_call(a->onClose, a); }
    return 0;
}
EXT gh_long InterstitialInterface__setOnLoadCallback_0047fc58(A s, A cb) { if (auto *a = ad(s)) a->onLoad = (AdCb)cb; return 0; }
EXT gh_long InterstitialInterface__setOnShowCallback_0047fc64(A s, A cb) { if (auto *a = ad(s)) a->onShow = (AdCb)cb; return 0; }
EXT gh_long InterstitialInterface__setOnFailCallback_0047fc70(A s, A cb) { if (auto *a = ad(s)) a->onFail = (AdCb)cb; return 0; }
EXT gh_long InterstitialInterface__setOnCloseCallback_0047fc7c(A s, A cb) { if (auto *a = ad(s)) a->onClose = (AdCb)cb; return 0; }

