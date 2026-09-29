/* bzStateGame::SendAppsFlyerEvent_0039ff08 @ 0x0039ff08 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__SendAppsFlyerEvent_0039ff08(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gh_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gh_a3;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  Application *pAVar5;
  int *piVar6;
  uint64_t gh_frame64[15] = {0};   /* 원작 스택 프레임 (SP-0x60 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x60;
#define local_60 (*(gh_long *)(gh_fb - 0x60))
#define local_58 (*(gh_long (*)[2])(gh_fb - 0x58))
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  
  lVar4 = tpidr_el0;
  local_48 = *(gh_long *)(lVar4 + 0x28);
  pAVar5 = (Application *)cocos2d__Application__getInstance_00484a3c();
  FUN_009d881c(GH_ARG(local_58), GH_ARG(param_3));
  FUN_009d881c(GH_ARG(&local_60), GH_ARG(param_4));
  cocos2d__Application__Click_AppsFlyerEvent_00485298(GH_ARG(pAVar5), GH_ARG(param_2), GH_ARG(local_58), GH_ARG(&local_60));
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_60 + -8);
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
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  if ((undefined8 *)(local_58[0] + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_58[0] + -8);
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
      operator_delete((undefined8 *)(local_58[0] + -0x18));
    }
  }
  if (*(gh_long *)(lVar4 + 0x28) != local_48) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
