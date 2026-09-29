/* bzStateGame::GetDailyReward_SaveTime_003fc798 @ 0x003fc798 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__GetDailyReward_SaveTime_003fc798(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  undefined4 uVar1;
  undefined4 uVar2;
  kDate *this;
  gh_long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  this = (kDate *)kDate__getSingleton_004797f8();
  uVar1 = kDate__getIntervalSince1970_0047991c();
  uVar2 = *(undefined4 *)(this + 0x10);
  plVar3 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  gh_vcall(GH_ARG(plVar3), 0x38, GH_ARG("DailyInterval"), GH_ARG(uVar1), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar3 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  gh_vcall(GH_ARG(plVar3), 0x38, GH_ARG("DailyDay"), GH_ARG(uVar2), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar3 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  gh_vcall(GH_ARG(plVar3), 0x38, GH_ARG("DailyCount"), GH_ARG(*(undefined4 *)(self + 0x32aacc)), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar3 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  gh_vcall(GH_ARG(plVar3), 0x38, GH_ARG("IsGetDaily"), GH_ARG(*(undefined4 *)(self + 0x32aaa8)), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  bzStateGame__SetDailyRewardHistory_00472310(GH_ARG(self));
  plVar3 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x38);
  uVar2 = kDate__getMonthEnd_004798b4(GH_ARG(this));
                    
                    
  (*UNRECOVERED_JUMPTABLE)(plVar3,"DailyMonthEnd",uVar2);
  return 0;
  return 0;
}
