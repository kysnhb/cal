/* bzStateGame::loadReward @ 0x0039cdd0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__loadReward(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  self[0xb05] = 1;
  *(int *)(self + 0xaf4) = param_2;
  cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + (gh_long)param_2 * 8 + 0x828)));
  return 0;
  return 0;
}
