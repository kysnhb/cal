/* bzStateGame::GUIImg_drawImage_003af498 @ 0x003af498 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__GUIImg_drawImage_003af498(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9)
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
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  gh_long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  gh_long *plVar9;
  gh_long lVar10;
  undefined4 in_register_00005024 = 0;
  uint64_t gh_frame64[27] = {0};   /* 원작 스택 프레임 (SP-0xc0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xc0;
#define local_c0 (*(ulong *)(gh_fb - 0xc0))
#define uStack_b8 (*(ulong *)(gh_fb - 0xb8))
#define local_b0 (*(float *)(gh_fb - 0xb0))
#define fStack_ac (*(float *)(gh_fb - 0xac))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
#define local_a0 (*(gh_long *)(gh_fb - 0xa0))
#define local_98 (*(gh_long *)(gh_fb - 0x98))
#define auStack_90 (*(undefined1 (*)[8])(gh_fb - 0x90))
#define local_88 (*(gh_long (*)[2])(gh_fb - 0x88))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  lVar4 = tpidr_el0;
  local_78 = *(gh_long *)(lVar4 + 0x28);
  iVar1 = 0;
  if ((uint)param_2 < 0x11b) {
    iVar1 = param_2;
  }
  lVar10 = (gh_long)iVar1;
  if (*(int *)(self + (gh_long)iVar1 * 4 + 0x329d28) != 0) {
    plVar9 = (gh_long *)(self + lVar10 * 8 + 0x3293c8);
    goto LAB_003af5e0;
  }
  switch(iVar1) {
  default:
    if (iVar1 - 0xadU < 6) goto switchD_003af540_caseD_d6;
    FUN_009d4eac(GH_ARG(&local_a8), GH_ARG("img/UI/MenuUi[%d].png"), GH_ARG(auStack_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar5 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)&local_a8), GH_ARG(iVar1));
    plVar9 = (gh_long *)(self + lVar10 * 8 + 0x3293c8);
    *plVar9 = lVar5;
    puVar6 = (undefined8 *)(local_a8 + -0x18);
    if (puVar6 == &DAT_00d40300) break;
    piVar7 = (int *)(local_a8 + -8);
    do {
      iVar8 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_003af830;
  case 0xec:
    if (self[0x1138] == '\0') goto switchD_003af540_caseD_d6;
    FUN_009d4eac(GH_ARG(local_88), GH_ARG("img/UI/MenuUi[%d]_ko.png"), GH_ARG(auStack_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar5 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)local_88), GH_ARG(0xec));
    plVar9 = (gh_long *)(self + lVar10 * 8 + 0x3293c8);
    *plVar9 = lVar5;
    puVar6 = (undefined8 *)(local_88[0] + -0x18);
    if (puVar6 != &DAT_00d40300) {
      piVar7 = (int *)(local_88[0] + -8);
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_003af830;
    }
    break;
  case 0xf0:
    if (self[0x1138] != '\0') {
      FUN_009d4eac(GH_ARG(&local_98), GH_ARG("img/UI/MenuUi[%d]_ko.png"), GH_ARG(auStack_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      lVar5 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)&local_98), GH_ARG(0xf0));
      plVar9 = (gh_long *)(self + lVar10 * 8 + 0x3293c8);
      *plVar9 = lVar5;
      puVar6 = (undefined8 *)(local_98 + -0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar7 = (int *)(local_98 + -8);
        do {
          iVar8 = *piVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_003af830;
      }
      break;
    }
  case 0xd6:
  case 0xed:
switchD_003af540_caseD_d6:
    FUN_009d4eac(GH_ARG(&local_a0), GH_ARG("img/UI/MenuUi[%d].png"), GH_ARG(auStack_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar5 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)&local_a0), GH_ARG(iVar1));
    plVar9 = (gh_long *)(self + lVar10 * 8 + 0x3293c8);
    *plVar9 = lVar5;
    puVar6 = (undefined8 *)(local_a0 + -0x18);
    if (puVar6 != &DAT_00d40300) {
      piVar7 = (int *)(local_a0 + -8);
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_003af830:
      if (iVar8 < 1) {
        operator_delete(puVar6);
      }
    }
  }
  lVar5 = *plVar9;
  *(int *)(self + (gh_long)iVar1 * 4 + 0x329d28) = (int)*(float *)(lVar5 + 0x4c4);
  *(int *)(self + lVar10 * 4 + 0x32a1d8) = (int)*(float *)(lVar5 + 0x4c8);
  if (*(int *)(self + 0x8da38) != 0xff) {
    bzStateGame__imgLoad_00470ad8(GH_ARG(self), GH_ARG(iVar1));
  }
LAB_003af5e0:
  local_b0 = (float)param_3;
  fStack_ac = (float)param_4;
  lVar10 = *plVar9;
  cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_c0), GH_ARG((float)param_5 / 255.0), GH_ARG((float)param_6 / 255.0), GH_ARG((float)param_7 / 255.0), GH_ARG(param_8));
  kSprite__drawPos_0047f378(GH_ARG(local_c0), GH_ARG(local_c0 >> 0x20), GH_ARG(uStack_b8 & 0xffffffff), GH_ARG(uStack_b8 >> 0x20), GH_ARG(CONCAT44(in_register_00005024,param_10)), GH_ARG(lVar10), GH_ARG(&local_b0), GH_ARG(param_9));
  if (*(gh_long *)(lVar4 + 0x28) != local_78) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
