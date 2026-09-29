/* bzStateGame::onConnectionStatusChanged_00474190 @ 0x00474190 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__onConnectionStatusChanged_00474190(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  gh_long lVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  uint64_t gh_frame64[14] = {0};   /* 원작 스택 프레임 (SP-0x58 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x58;
#define local_58 (*(gh_long *)(gh_fb - 0x58))
#define auStack_50 (*(undefined1 (*)[8])(gh_fb - 0x50))
#define local_48 (*(gh_long (*)[2])(gh_fb - 0x48))
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar3 = tpidr_el0;
  local_38 = *(gh_long *)(lVar3 + 0x28);
  cocos2d__log_005d21e4(GH_ARG("connection status change: %d"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if (param_2 == 1000) {
    *(undefined4 *)(self + 0x32c9cc) = 1;
    iVar6 = *(int *)(self + 0x32c9c8);
    if (iVar6 == 2) {
      puVar5 = (undefined *)bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x1b), GH_ARG(-1));
      bzStateGame__ExeShowAchievements_00473ca8(GH_ARG(puVar5));
    }
    else if (iVar6 == 1) {
      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x1b), GH_ARG(-1));
      FUN_009d4eac(GH_ARG(local_48), GH_ARG("BestScoreStage"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      lVar4 = std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string_____find_00478438(GH_ARG((_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
                               *)(self + 0x3a0)), GH_ARG((string *)local_48));
      if ((undefined8 *)(local_48[0] + -0x18) != &DAT_00d40300) {
        piVar7 = (int *)(local_48[0] + -8);
        do {
          iVar6 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar6 < 1) {
          operator_delete((undefined8 *)(local_48[0] + -0x18));
        }
      }
      puVar5 = (undefined *)FUN_009d881c(GH_ARG(&local_58), GH_ARG(lVar4 + 0x28));
      bzStateGame__ExeShowLeaderboard_004739e8(GH_ARG(puVar5), GH_ARG((undefined *)&local_58));
      if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
        piVar7 = (int *)(local_58 + -8);
        do {
          iVar6 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar6 < 1) {
          operator_delete((undefined8 *)(local_58 + -0x18));
        }
      }
    }
    *(int *)(self + 0x32c9c8) = 0;
    iVar6 = -1;
  }
  else {
    iVar6 = 0;
  }
  bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x1b), GH_ARG(iVar6));
  if (*(gh_long *)(lVar3 + 0x28) != local_38) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
