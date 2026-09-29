/* bzStateGame::ExeIsSigned_003a7c88 @ 0x003a7c88 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
bool bzStateGame__ExeIsSigned_003a7c88(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  bool bVar5;
  int *piVar6;
  uint64_t gh_frame64[15] = {0};   /* 원작 스택 프레임 (SP-0x60 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x60;
#define auStack_60 (*(undefined1 (*)[8])(gh_fb - 0x60))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
#define auStack_50 (*(undefined1 (*)[8])(gh_fb - 0x50))
#define local_48 (*(gh_long (*)[2])(gh_fb - 0x48))
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar4 = tpidr_el0;
  local_38 = *(gh_long *)(lVar4 + 0x28);
  FUN_009d4eac(GH_ARG(local_48), GH_ARG("org.cocos2dx.lib.Cocos2dxHelper"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("exeIsSigned"), GH_ARG(auStack_60), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  bVar5 = cocos2d__JniHelper__callStaticBooleanMethod___004748f8(GH_ARG((string *)local_48), GH_ARG((string *)&local_58));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_58 + -8);
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
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
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
  if (*(gh_long *)(lVar4 + 0x28) != local_38) {
                    
    __stack_chk_fail();
  }
  return bVar5;
}

