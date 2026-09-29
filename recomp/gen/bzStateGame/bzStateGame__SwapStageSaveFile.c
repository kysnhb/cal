/* bzStateGame::SwapStageSaveFile @ 0x0044995c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a50a25
#define DAT_00a50a25 (*(undefined1 *)IMG(0x00a50a25))
gh_long bzStateGame__SwapStageSaveFile(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  cocos2d__log_005d21e4(GH_ARG("-TEST- BACKUP LOAD"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  bzStateGame__BackupStage_Load_004775bc(GH_ARG(self));
  bzStateGame__STGload_003a4888(GH_ARG(self));
  uVar5 = 0;
  do {
    uVar1 = *(uint *)(self + uVar5 * 4 + 0x400);
    uVar3 = (ulong)uVar1;
    uVar2 = *(uint *)(self + uVar5 * 4 + 0x728);
    uVar4 = (ulong)uVar2;
    if (((int)uVar1 < 0) && (uVar4 = uVar3, uVar1 != uVar2)) {
      *(uint *)(self + uVar5 * 4 + 0x400) = uVar2;
      uVar3 = (ulong)uVar2;
      uVar4 = (ulong)uVar2;
    }
    cocos2d__log_005d21e4(GH_ARG(&DAT_00a50a25), GH_ARG(uVar5 & 0xffffffff), GH_ARG(uVar3), GH_ARG(uVar5 & 0xffffffff), GH_ARG(uVar4));
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0xb);
  bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
  return 0;
  return 0;
}
