/* bzStateGame::onAchievementUnlockError @ 0x0047459c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__onAchievementUnlockError(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gh_a3;

  cocos2d__log_005d21e4(GH_ARG("achievement %s unlock error. %d:%s"), GH_ARG(*(undefined8 *)param_2), GH_ARG((ulong)(uint)param_3), GH_ARG(*(undefined8 *)param_4), GH_ARG(0));
  return 0;
  return 0;
}
