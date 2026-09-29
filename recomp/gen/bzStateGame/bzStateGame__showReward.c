/* bzStateGame::showReward @ 0x0039d6c8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__showReward(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  ulong uVar1;
  
  if (-1 < param_2) {
    uVar1 = RewardInterface__isLoaded_0047fd04(GH_ARG(*(RewardInterface **)(self + (gh_long)param_2 * 8 + 0x828)));
    if ((uVar1 & 1) != 0) {
      RewardInterface__show_0047fcfc(GH_ARG(*(RewardInterface **)(self + (gh_long)param_2 * 8 + 0x828)));
      return 0;
    }
  }
  return 0;
  return 0;
}
