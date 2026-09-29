/* bzStateGame::DailyCheck_003a41ac @ 0x003a41ac — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__DailyCheck_003a41ac(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  kDate *this;
  gh_long *plVar10;
  code *pcVar11;
  
  this = (kDate *)kDate__getSingleton_004797f8();
  iVar4 = kDate__getIntervalSince1970_0047991c();
  iVar3 = *(int *)(this + 0x10);
  plVar10 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  iVar5 = gh_vcall(GH_ARG(plVar10), 0x8, GH_ARG("DailyInterval"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar10 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  iVar6 = gh_vcall(GH_ARG(plVar10), 0x8, GH_ARG("DailyDay"), GH_ARG(1), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar10 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  pcVar11 = *(code **)(*plVar10 + 8);
  uVar7 = kDate__getMonthEnd_004798b4(GH_ARG(this));
  iVar8 = gh_vcall(GH_ARG(plVar10), 0x8, GH_ARG("DailyMonthEnd"), GH_ARG(uVar7), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  plVar10 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  iVar9 = gh_vcall(GH_ARG(plVar10), 0x8, GH_ARG("DailyCount"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  piVar1 = (int *)(self + 0x32aacc);
  *piVar1 = iVar9;
  plVar10 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
  iVar9 = gh_vcall(GH_ARG(plVar10), 0x8, GH_ARG("IsGetDaily"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  piVar2 = (int *)(self + 0x32aaa8);
  *piVar2 = iVar9;
  bzStateGame__GetDailyRewardHistory_00472444(GH_ARG(self));
  if (*piVar2 == 0) {
    self[0xb94] = 0;
    goto LAB_003a4380;
  }
  if (iVar5 < iVar4) {
    if (iVar3 != iVar6) {
      if ((iVar3 - iVar6 != 1) && ((iVar3 != 1 || (iVar6 != iVar8)))) goto LAB_003a4318;
      if (*piVar1 < 6) {
        *piVar1 = *piVar1 + 1;
      }
      *piVar2 = 0;
      goto LAB_003a4320;
    }
    if (0x2a300 < iVar4 - iVar5) goto LAB_003a4318;
  }
  else {
LAB_003a4318:
    *piVar2 = 0;
    *piVar1 = 0;
LAB_003a4320:
    plVar10 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
    gh_vcall(GH_ARG(plVar10), 0x38, GH_ARG("DailyCount"), GH_ARG(*piVar1), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    plVar10 = (gh_long *)cocos2d__UserDefault__getInstance_00600b04();
    gh_vcall(GH_ARG(plVar10), 0x38, GH_ARG("IsGetDaily"), GH_ARG(*piVar2), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  }
  self[0xb94] = 0;
  if (*piVar2 == 2) {
    return 0;
  }
LAB_003a4380:
  cocos2d__Application__getInstance_00484a3c();
  cocos2d__Application__RequestLoadRewardAd_DailyBonus_00485ebc();
  return 0;
  return 0;
}
