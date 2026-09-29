/* bzStateGame::GetDailyRewardHistory_00472444 @ 0x00472444 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__GetDailyRewardHistory_00472444(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  UserDefault *pUVar1;
  undefined4 uVar2;
  
  pUVar1 = (UserDefault *)cocos2d__UserDefault__getInstance_00600b04();
  uVar2 = cocos2d__UserDefault__getIntegerForKey_005fb92c(GH_ARG(pUVar1), GH_ARG("DailyRewardHistory0"));
  *(undefined4 *)(self + 0x32aaac) = uVar2;
  pUVar1 = (UserDefault *)cocos2d__UserDefault__getInstance_00600b04();
  uVar2 = cocos2d__UserDefault__getIntegerForKey_005fb92c(GH_ARG(pUVar1), GH_ARG("DailyRewardHistory1"));
  *(undefined4 *)(self + 0x32aab0) = uVar2;
  pUVar1 = (UserDefault *)cocos2d__UserDefault__getInstance_00600b04();
  uVar2 = cocos2d__UserDefault__getIntegerForKey_005fb92c(GH_ARG(pUVar1), GH_ARG("DailyRewardHistory2"));
  *(undefined4 *)(self + 0x32aab4) = uVar2;
  pUVar1 = (UserDefault *)cocos2d__UserDefault__getInstance_00600b04();
  uVar2 = cocos2d__UserDefault__getIntegerForKey_005fb92c(GH_ARG(pUVar1), GH_ARG("DailyRewardHistory3"));
  *(undefined4 *)(self + 0x32aab8) = uVar2;
  pUVar1 = (UserDefault *)cocos2d__UserDefault__getInstance_00600b04();
  uVar2 = cocos2d__UserDefault__getIntegerForKey_005fb92c(GH_ARG(pUVar1), GH_ARG("DailyRewardHistory4"));
  *(undefined4 *)(self + 0x32aabc) = uVar2;
  pUVar1 = (UserDefault *)cocos2d__UserDefault__getInstance_00600b04();
  uVar2 = cocos2d__UserDefault__getIntegerForKey_005fb92c(GH_ARG(pUVar1), GH_ARG("DailyRewardHistory5"));
  *(undefined4 *)(self + 0x32aac0) = uVar2;
  pUVar1 = (UserDefault *)cocos2d__UserDefault__getInstance_00600b04();
  uVar2 = cocos2d__UserDefault__getIntegerForKey_005fb92c(GH_ARG(pUVar1), GH_ARG("DailyRewardHistory6"));
  *(undefined4 *)(self + 0x32aac4) = uVar2;
  return 0;
  return 0;
}
