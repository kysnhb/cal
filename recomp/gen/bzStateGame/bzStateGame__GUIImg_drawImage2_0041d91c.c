/* bzStateGame::GUIImg_drawImage2_0041d91c @ 0x0041d91c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__GUIImg_drawImage2_0041d91c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11, uint64_t gh_a12, uint64_t gh_a13)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  int param_7 = (int)gh_a6;
  float param_8 = gh_b2f(gh_a7);
  int param_9 = (int)gh_a8;
  float param_10 = gh_b2f(gh_a9);
  int param_11 = (int)gh_a10;
  int param_12 = (int)gh_a11;
  int param_13 = (int)gh_a12;
  int param_14 = (int)gh_a13;

  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  gh_long lVar5;
  kSprite *pkVar6;
  gh_long lVar7;
  int *piVar8;
  uint64_t gh_frame64[16] = {0};   /* 원작 스택 프레임 (SP-0x68 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x68;
#define local_68 (*(float *)(gh_fb - 0x68))
#define fStack_64 (*(float *)(gh_fb - 0x64))
#define auStack_60 (*(undefined1 (*)[8])(gh_fb - 0x60))
#define local_58 (*(gh_long (*)[2])(gh_fb - 0x58))
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  
  lVar5 = tpidr_el0;
  local_48 = *(gh_long *)(lVar5 + 0x28);
  iVar1 = 0;
  if ((uint)param_2 < 0xe9) {
    iVar1 = param_2;
  }
  if (*(int *)(self + (gh_long)iVar1 * 4 + 0x329d28) == 0) {
    FUN_009d4eac(GH_ARG(local_58), GH_ARG("img/UI/MenuUi[%d].png"), GH_ARG(auStack_60), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(param_7), GH_ARG(param_9));
    lVar7 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)local_58), GH_ARG(iVar1));
    *(gh_long *)(self + (gh_long)iVar1 * 8 + 0x3293c8) = lVar7;
    if ((undefined8 *)(local_58[0] + -0x18) != &DAT_00d40300) {
      piVar8 = (int *)(local_58[0] + -8);
      do {
        iVar2 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete((undefined8 *)(local_58[0] + -0x18));
      }
    }
    pkVar6 = *(kSprite **)(self + (gh_long)iVar1 * 8 + 0x3293c8);
    *(int *)(self + (gh_long)iVar1 * 4 + 0x329d28) = (int)*(float *)(pkVar6 + 0x4c4);
  }
  else {
    pkVar6 = *(kSprite **)(self + (gh_long)iVar1 * 8 + 0x3293c8);
  }
  local_68 = (float)param_3;
  fStack_64 = (float)param_4;
  kSprite__drawPos_0047f88c(GH_ARG(pkVar6), GH_ARG(&local_68), GH_ARG(0), GH_ARG(0), GH_ARG(param_12), GH_ARG(param_13), GH_ARG(param_11));
  if (*(gh_long *)(lVar5 + 0x28) != local_48) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
