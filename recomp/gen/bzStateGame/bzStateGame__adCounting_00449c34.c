/* bzStateGame::adCounting_00449c34 @ 0x00449c34 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a50ac9
#define DAT_00a50ac9 (*(undefined1 *)IMG(0x00a50ac9))
gh_long bzStateGame__adCounting_00449c34(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  
  if (((*(int *)(self + 0xb78) == *(int *)(self + 0xb7c)) &&
      (*(int *)(self + 0xb74) == *(int *)(self + 0xb80))) &&
     (*(int *)(self + 0xb70) == *(int *)(self + 0xb84))) {
    return 0;
  }
  iVar1 = *(int *)(self + 0x32c814);
  *(int *)(self + 0x32c814) = iVar1 + 1;
  bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x23), GH_ARG(iVar1 + 1));
  self[0xb88] = 1;
  cocos2d__log_005d21e4(GH_ARG("-TEST- adCountCheck: %d"), GH_ARG((ulong)*(uint *)(self + 0x32c814)), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  bzStateGame__lastDaySaveFile_004494b0(GH_ARG(self), GH_ARG(*(int *)(self + 0xb78)), GH_ARG(*(int *)(self + 0xb74)), GH_ARG(*(int *)(self + 0xb70)));
  cocos2d__log_005d21e4(GH_ARG(&DAT_00a50ac9), GH_ARG((ulong)*(uint *)(self + 0xb7c)), GH_ARG((ulong)*(uint *)(self + 0xb80)), GH_ARG((ulong)*(uint *)(self + 0xb84)), GH_ARG(0));
  if ((*(int *)(self + 0x32c814) - 1U < 5) && (1 < *(int *)(self + 0x1ae8) - 8U)) {
    if (*(int *)(self + 0x1ae8) == 0xb) {
      *(int *)(self + 0x32c8f4) = *(int *)(self + 0x32c8f4) + 2000;
      *(undefined4 *)(self + 0x32c91c) = 8;
      if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
         ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
          ((-0x1e < *(int *)(self + 0x8dacc) &&
           (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
      }
    }
    *(int *)(self + 0x32c164) = *(int *)(self + 0x32c164) + 0x7ce;
    *(int *)(self + 0x32c434) = *(int *)(self + 0x32c434) + 2;
  }
  bzStateGame__AitemSsave_003ab270(GH_ARG(self));
  return 0;
  return 0;
}
