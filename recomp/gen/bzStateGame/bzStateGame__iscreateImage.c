/* bzStateGame::iscreateImage @ 0x0047124c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
uint bzStateGame__iscreateImage(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  uint uVar5;
  gh_long *plVar6;
  undefined8 uVar7;
  Image *this;
  int *piVar8;
  uint64_t gh_frame64[14] = {0};   /* 원작 스택 프레임 (SP-0x58 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x58;
#define local_58 (*(gh_long *)(gh_fb - 0x58))
#define local_50 (*(gh_long *)(gh_fb - 0x50))
#define local_48 (*(gh_long (*)[2])(gh_fb - 0x48))
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar4 = tpidr_el0;
  local_38 = *(gh_long *)(lVar4 + 0x28);
  plVar6 = (gh_long *)cocos2d__FileUtils__getInstance_00488d1c();
  gh_vcall(GH_ARG(plVar6), 0xa0, GH_ARG(&local_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  cocos2d__StringUtils__format_0060c028(GH_ARG(*(char **)param_2), GH_ARG(&local_58), GH_ARG((ulong)(uint)param_3), GH_ARG(0), GH_ARG(0));
  uVar7 = FUN_009d5908(GH_ARG(&local_50), GH_ARG(&local_58));
  FUN_009d881c(GH_ARG(local_48), GH_ARG(uVar7));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar8 = (int *)(local_58 + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_50 + -0x18) != &DAT_00d40300) {
    piVar8 = (int *)(local_50 + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete((undefined8 *)(local_50 + -0x18));
    }
  }
  this = operator_new(0x160);
  cocos2d__Image__Image_005c10e0(GH_ARG(this));
  uVar5 = cocos2d__Image__initWithImageFile_005c12f8(GH_ARG(this), GH_ARG((string *)local_48));
  gh_vcall(GH_ARG((gh_long *)this), 0x8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if ((undefined8 *)(local_48[0] + -0x18) != &DAT_00d40300) {
    piVar8 = (int *)(local_48[0] + -8);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
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
  return uVar5 & 1;
}

