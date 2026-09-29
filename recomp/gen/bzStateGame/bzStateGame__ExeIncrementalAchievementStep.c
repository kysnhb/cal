/* bzStateGame::ExeIncrementalAchievementStep @ 0x004756b8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__ExeIncrementalAchievementStep(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  int iVar4;
  int *piVar5;
  uint64_t gh_frame64[16] = {0};   /* 원작 스택 프레임 (SP-0x68 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x68;
#define local_68 (*(gh_long *)(gh_fb - 0x68))
#define auStack_60 (*(undefined1 (*)[8])(gh_fb - 0x60))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
#define auStack_50 (*(undefined1 (*)[8])(gh_fb - 0x50))
#define local_48 (*(gh_long (*)[2])(gh_fb - 0x48))
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar3 = tpidr_el0;
  local_38 = *(gh_long *)(lVar3 + 0x28);
  iVar4 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG(&DAT_00afe81e), GH_ARG(param_3));
  if ((iVar4 != 0) && (*(gh_long *)(*(gh_long *)param_2 + -0x18) != 0)) {
    FUN_009d4eac(GH_ARG(local_48), GH_ARG("org.cocos2dx.lib.Cocos2dxHelper"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(&local_58), GH_ARG("exeIncrementalAchievementStep"), GH_ARG(auStack_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d881c(GH_ARG(&local_68), GH_ARG(param_2));
    cocos2d__JniHelper__callStaticVoidMethod_std__string_int__004759a8(GH_ARG(local_48), GH_ARG(&local_58), GH_ARG(&local_68), GH_ARG(param_3));
    if ((undefined8 *)(local_68 + -0x18) != &DAT_00d40300) {
      piVar5 = (int *)(local_68 + -8);
      do {
        iVar4 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 < 1) {
        operator_delete((undefined8 *)(local_68 + -0x18));
      }
    }
    if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
      piVar5 = (int *)(local_58 + -8);
      do {
        iVar4 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 < 1) {
        operator_delete((undefined8 *)(local_58 + -0x18));
      }
    }
    if ((undefined8 *)(local_48[0] + -0x18) != &DAT_00d40300) {
      piVar5 = (int *)(local_48[0] + -8);
      do {
        iVar4 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 < 1) {
        operator_delete((undefined8 *)(local_48[0] + -0x18));
      }
    }
  }
  if (*(gh_long *)(lVar3 + 0x28) != local_38) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
