/* bzStateGame::GetDailyReward_Double @ 0x0039ad84 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a534f8
#define DAT_00a534f8 (*(undefined1 *)IMG(0x00a534f8))
#undef DAT_00a53514
#define DAT_00a53514 (*(undefined1 *)IMG(0x00a53514))
gh_long bzStateGame__GetDailyReward_Double(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)(&DAT_00a534f8 + (gh_long)*(int *)(self + 0x32aacc) * 4)));
  bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(*(int *)(&DAT_00a53514 + (gh_long)*(int *)(self + 0x32aacc) * 4)));
  self[0xb94] = 0;
  *(undefined4 *)(self + 0x32aac8) = 1;
  *(undefined4 *)(self + 0x32aaa8) = 2;
  bzStateGame__AitemSsave_003ab270(GH_ARG(self));
  bzStateGame__GetDailyReward_SaveTime_003fc798(GH_ARG(self));
  return 0;
  return 0;
}
