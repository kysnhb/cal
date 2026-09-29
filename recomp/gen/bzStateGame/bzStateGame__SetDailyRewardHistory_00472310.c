/* bzStateGame::SetDailyRewardHistory_00472310 @ 0x00472310 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__SetDailyRewardHistory_00472310(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  gh_long *plVar1;
  
  *(undefined4 *)((gh_long)(self + 0x32aaac) + (gh_long)*(int *)(self + 0x32aacc) * 4) =
       *(undefined4 *)(self + 0x32aaa8);
  plVar1 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  gh_vcall(GH_ARG(plVar1), 0x38, GH_ARG("DailyRewardHistory0"), GH_ARG(*(undefined4 *)(self + 0x32aaac)), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar1 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  gh_vcall(GH_ARG(plVar1), 0x38, GH_ARG("DailyRewardHistory1"), GH_ARG(*(undefined4 *)(self + 0x32aab0)), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar1 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  gh_vcall(GH_ARG(plVar1), 0x38, GH_ARG("DailyRewardHistory2"), GH_ARG(*(undefined4 *)(self + 0x32aab4)), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar1 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  gh_vcall(GH_ARG(plVar1), 0x38, GH_ARG("DailyRewardHistory3"), GH_ARG(*(undefined4 *)(self + 0x32aab8)), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar1 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  gh_vcall(GH_ARG(plVar1), 0x38, GH_ARG("DailyRewardHistory4"), GH_ARG(*(undefined4 *)(self + 0x32aabc)), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar1 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  gh_vcall(GH_ARG(plVar1), 0x38, GH_ARG("DailyRewardHistory5"), GH_ARG(*(undefined4 *)(self + 0x32aac0)), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar1 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
                    
                    
  gh_vcall(GH_ARG(plVar1), 0x38, GH_ARG("DailyRewardHistory6"), GH_ARG(*(undefined4 *)(self + 0x32aac4)), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  return 0;
  return 0;
}
