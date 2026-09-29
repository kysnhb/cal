/* bzStateGame::onAchievementUnlocked_00474430 @ 0x00474430 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__onAchievementUnlocked_00474430(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  bool param_3 = (bool)gh_a2;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  int iVar5;
  int *piVar6;
  uint64_t gh_frame64[12] = {0};   /* 원작 스택 프레임 (SP-0x48 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x48;
#define local_48 (*(gh_long (*)[2])(gh_fb - 0x48))
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar4 = tpidr_el0;
  local_38 = *(gh_long *)(lVar4 + 0x28);
  cocos2d__log_005d21e4(GH_ARG("achievement %s unlocked (new %d)"), GH_ARG(*(undefined8 *)param_2), GH_ARG((ulong)param_3), GH_ARG(0), GH_ARG(0));
  FUN_009d881c(GH_ARG(local_48), GH_ARG(param_2));
  iVar5 = bzStateGame__GetAchieveDataIdx_00471cb8(GH_ARG(self), GH_ARG((undefined *)local_48));
  if ((undefined8 *)(local_48[0] + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_48[0] + -8);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete((undefined8 *)(local_48[0] + -0x18));
    }
  }
  if (0 < iVar5) {
    bzStateGame__AchieveSave_00471a2c(GH_ARG(self), GH_ARG(iVar5), GH_ARG(1));
  }
  if (*(gh_long *)(lVar4 + 0x28) == local_38) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
