/* bzStateGame::Obj_drawImage_00432f78 @ 0x00432f78 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__Obj_drawImage_00432f78(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9)
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

  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  gh_long lVar5;
  int *piVar6;
  gh_long lVar7;
  gh_long lVar8;
  undefined4 in_register_00005024 = 0;
  uint64_t gh_frame64[25] = {0};   /* 원작 스택 프레임 (SP-0xb0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xb0;
#define local_b0 (*(ulong *)(gh_fb - 0xb0))
#define uStack_a8 (*(ulong *)(gh_fb - 0xa8))
#define local_98 (*(float *)(gh_fb - 0x98))
#define fStack_94 (*(float *)(gh_fb - 0x94))
#define auStack_90 (*(undefined1 (*)[8])(gh_fb - 0x90))
#define local_88 (*(gh_long (*)[2])(gh_fb - 0x88))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  lVar5 = tpidr_el0;
  local_78 = *(gh_long *)(lVar5 + 0x28);
  iVar1 = 0;
  if ((uint)param_2 < 700) {
    iVar1 = param_2;
  }
  lVar7 = (gh_long)iVar1;
  if (*(int *)(self + (gh_long)iVar1 * 4 + 0x3232e8) == 0) {
    FUN_009d4eac(GH_ARG(local_88), GH_ARG("img/out/ImF[%d].png"), GH_ARG(auStack_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar8 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)local_88), GH_ARG(iVar1));
    *(gh_long *)(self + lVar7 * 8 + 0x320d68) = lVar8;
    if ((undefined8 *)(local_88[0] + -0x18) != &DAT_00d40300) {
      piVar6 = (int *)(local_88[0] + -8);
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete((undefined8 *)(local_88[0] + -0x18));
      }
    }
    lVar8 = *(gh_long *)(self + lVar7 * 8 + 0x320d68);
    *(int *)(self + lVar7 * 4 + 0x322668) = (int)*(float *)(lVar8 + 0x4c4);
    *(int *)(self + (gh_long)iVar1 * 4 + 0x3232e8) = (int)*(float *)(lVar8 + 0x4c8);
  }
  else {
    lVar8 = *(gh_long *)(self + lVar7 * 8 + 0x320d68);
  }
  local_98 = (float)param_3;
  fStack_94 = (float)param_4;
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG((float)param_5 / 255.0), GH_ARG((float)param_6 / 255.0), GH_ARG((float)param_7 / 255.0), GH_ARG(param_8));
  kSprite__drawPos_0047f378(GH_ARG(local_b0), GH_ARG(local_b0 >> 0x20), GH_ARG(uStack_a8 & 0xffffffff), GH_ARG(uStack_a8 >> 0x20), GH_ARG(CONCAT44(in_register_00005024,param_10)), GH_ARG(lVar8), GH_ARG(&local_98), GH_ARG(param_9));
  if (*(gh_long *)(lVar5 + 0x28) != local_78) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
