/* bzStateGame::startInapp @ 0x0039e120 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__startInapp(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  cocos2d__log_005d21e4(GH_ARG(" startInapp() "), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  cocos2d__Application__getInstance_00484a3c();
  cocos2d__Application__getPurchaseList_00485bb0();
  return 0;
  return 0;
}
