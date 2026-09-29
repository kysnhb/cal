/* Java_org_cocos2dx_cpp_AppActivity_nativeOnCanceled @ 0x0039ba30 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(uint8_t * *)IMG(0x00d23c48))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long Java_org_cocos2dx_cpp_AppActivity_nativeOnCanceled(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined8 param_1 = (undefined8)gh_a0;
  undefined8 param_2 = (undefined8)gh_a1;
  _jstring * param_3 = (_jstring *)(uintptr_t)gh_a2;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  undefined *self;
  undefined *extraout_x1 = 0;
  int *piVar5;
  uint64_t gh_frame64[11] = {0};   /* 원작 스택 프레임 (SP-0x40 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x40;
#define local_40 (*(gh_long *)(gh_fb - 0x40))
#define local_38 (*(gh_long (*)[2])(gh_fb - 0x38))
#define local_28 (*(gh_long *)(gh_fb - 0x28))
  
  lVar4 = tpidr_el0;
  local_28 = *(gh_long *)(lVar4 + 0x28);
  if (DAT_00d23c48 != (undefined *)0x0) {
    cocos2d__JniHelper__jstring2string_0048f9b4(GH_ARG(param_3));
    self = DAT_00d23c48;
    FUN_009d881c(GH_ARG(&local_40), GH_ARG(local_38));
    bzStateGame__onCanceled_0039bc20(GH_ARG(self), GH_ARG(extraout_x1));
    if ((undefined8 *)(local_40 + -0x18) != &DAT_00d40300) {
      piVar5 = (int *)(local_40 + -8);
      do {
        iVar1 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        operator_delete((undefined8 *)(local_40 + -0x18));
      }
    }
    if ((undefined8 *)(local_38[0] + -0x18) != &DAT_00d40300) {
      piVar5 = (int *)(local_38[0] + -8);
      do {
        iVar1 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        operator_delete((undefined8 *)(local_38[0] + -0x18));
      }
    }
  }
  if (*(gh_long *)(lVar4 + 0x28) != local_28) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
