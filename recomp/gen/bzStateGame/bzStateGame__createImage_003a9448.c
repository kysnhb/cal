/* bzStateGame::createImage_003a9448 @ 0x003a9448 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
undefined8 bzStateGame__createImage_003a9448(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  undefined8 uVar5;
  int *piVar6;
  uint64_t gh_frame64[10] = {0};   /* 원작 스택 프레임 (SP-0x38 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x38;
#define local_38 (*(gh_long (*)[2])(gh_fb - 0x38))
#define local_28 (*(gh_long *)(gh_fb - 0x28))
  
  lVar4 = tpidr_el0;
  local_28 = *(gh_long *)(lVar4 + 0x28);
  cocos2d__StringUtils__format_0060c028(GH_ARG(*(char **)param_2), GH_ARG(local_38), GH_ARG((ulong)(uint)param_3), GH_ARG(0), GH_ARG(0));
  uVar5 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(3), GH_ARG(local_38), GH_ARG(0));
  if ((undefined8 *)(local_38[0] + -0x18) != &DAT_00d40300) {
    piVar6 = (int *)(local_38[0] + -8);
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
      operator_delete((undefined8 *)(local_38[0] + -0x18));
    }
  }
  if (*(gh_long *)(lVar4 + 0x28) != local_28) {
                    
    __stack_chk_fail();
  }
  return uVar5;
}

