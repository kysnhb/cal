/* bzStateGame::AdMob @ 0x0039fc10 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__AdMob(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  Application *this;
  RewardInterface *pRVar1;
  InterstitialInterface *this_00;
  ulong uVar2;
  undefined4 uVar3;
  
  if ((param_2 - 10U < 9) ||
     ((((uint)param_2 < 10 && ((1 << (ulong)(param_2 & 0x1f) & 0x242U) != 0)) ||
      (param_2 - 0x32U < 3)))) {
    *(undefined8 *)(self + 0xba8) = 1;
    *(int *)(self + 0xba4) = param_2;
  }
  switch(param_2) {
  case 1:
    cocos2d__log_005d21e4(GH_ARG("-TEST- 1"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    this_00 = *(InterstitialInterface **)(self + 0x870);
    self[0xb04] = 1;
    *(undefined4 *)(self + 0xaf0) = 0;
    goto LAB_0039fd38;
  default:
    if (param_2 - 0xfU < 3) {
      self[0xb01] = 1;
      self[0xb05] = 1;
      *(undefined4 *)(self + 0xaf4) = 5;
      cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(5), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      pRVar1 = *(RewardInterface **)(self + 0x850);
    }
    else if (param_2 < 0x2bd) {
      if (param_2 != 0x12) {
        if (param_2 != 700) {
          return 0;
        }
        BannerInterface__hideBannerView_0047fb18();
        return 0;
      }
      self[0xb01] = 1;
      self[0xb05] = 1;
      *(undefined4 *)(self + 0xaf4) = 8;
      cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(8), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      pRVar1 = *(RewardInterface **)(self + 0x868);
    }
    else {
      if (param_2 == 0x2bd) {
        bzStateGame__showBanner_0039d2c0(GH_ARG(self));
        return 0;
      }
      if (param_2 != 0x2be) {
        return 0;
      }
      self[0xb01] = 0;
      self[0xb05] = 1;
      *(undefined4 *)(self + 0xaf4) = 0;
      cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x828)));
      self[0xb05] = 1;
      *(undefined4 *)(self + 0xaf4) = 2;
      cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(2), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      pRVar1 = *(RewardInterface **)(self + 0x838);
    }
    break;
  case 6:
    cocos2d__log_005d21e4(GH_ARG("-TEST- 6"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    this_00 = *(InterstitialInterface **)(self + 0x878);
    uVar3 = 1;
    self[0xb04] = 1;
    goto LAB_0039fd34;
  case 9:
    cocos2d__log_005d21e4(GH_ARG("-TEST- 9"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    this_00 = *(InterstitialInterface **)(self + 0x880);
    self[0xb04] = 1;
    uVar3 = 2;
LAB_0039fd34:
    *(undefined4 *)(self + 0xaf0) = uVar3;
LAB_0039fd38:
    InterstitialInterface__load_0047fc2c(GH_ARG(this_00));
    return 0;
  case 10:
    uVar2 = RewardInterface__isLoaded_0047fd04(GH_ARG(*(RewardInterface **)(self + 0x828)));
    if ((uVar2 & 1) == 0) {
      // Complete an unavailable request through the registered load failure handler.
      RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x828)));
      return 0;
    }
    pRVar1 = *(RewardInterface **)(self + 0x828);
    goto LAB_0039fd94;
  case 0xb:
    self[0xb01] = 1;
    self[0xb05] = 1;
    *(undefined4 *)(self + 0xaf4) = 1;
    cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(1), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    pRVar1 = *(RewardInterface **)(self + 0x830);
    break;
  case 0xc:
    uVar2 = RewardInterface__isLoaded_0047fd04(GH_ARG(*(RewardInterface **)(self + 0x838)));
    if ((uVar2 & 1) == 0) {
      // Complete an unavailable request through the registered load failure handler.
      RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x838)));
      return 0;
    }
    pRVar1 = *(RewardInterface **)(self + 0x838);
LAB_0039fd94:
    RewardInterface__show_0047fcfc(GH_ARG(pRVar1));
    return 0;
  case 0xd:
    self[0xb01] = 1;
    self[0xb05] = 1;
    *(undefined4 *)(self + 0xaf4) = 3;
    cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(3), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    pRVar1 = *(RewardInterface **)(self + 0x840);
    break;
  case 0xe:
    self[0xb01] = 1;
    self[0xb05] = 1;
    *(undefined4 *)(self + 0xaf4) = 4;
    cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(4), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    pRVar1 = *(RewardInterface **)(self + 0x848);
    break;
  case 0x32:
  case 0x33:
  case 0x34:
    this = (Application *)cocos2d__Application__getInstance_00484a3c();
    cocos2d__Application__OnInterstitial_00484e24(GH_ARG(this), GH_ARG(param_2));
    return 0;
  }
  RewardInterface__load_0047fcf4(GH_ARG(pRVar1));
  return 0;
  return 0;
}
