/* bzStateGame::Weapon_rotateImage_0046d85c @ 0x0046d85c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__Weapon_rotateImage_0046d85c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11, uint64_t gh_a12, uint64_t gh_a13, uint64_t gh_a14, uint64_t gh_a15)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  int param_7 = (int)gh_a6;
  int param_8 = (int)gh_a7;
  int param_9 = (int)gh_a8;
  float param_10 = gh_b2f(gh_a9);
  int param_11 = (int)gh_a10;
  float param_12 = gh_b2f(gh_a11);
  int param_13 = (int)gh_a12;
  int param_14 = (int)gh_a13;
  int param_15 = (int)gh_a14;
  int param_16 = (int)gh_a15;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  gh_long *plVar9;
  gh_long lVar10;
  gh_long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 in_register_00005024 = 0;
  undefined8 uVar15;
  uint64_t gh_frame64[37] = {0};   /* 원작 스택 프레임 (SP-0x110 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x110;
#define local_110 (*(ulong *)(gh_fb - 0x110))
#define uStack_108 (*(ulong *)(gh_fb - 0x108))
#define local_f8 (*(float *)(gh_fb - 0xf8))
#define fStack_f4 (*(float *)(gh_fb - 0xf4))
#define local_f0 (*(ulong *)(gh_fb - 0xf0))
#define uStack_e8 (*(ulong *)(gh_fb - 0xe8))
#define local_d8 (*(float *)(gh_fb - 0xd8))
#define fStack_d4 (*(float *)(gh_fb - 0xd4))
#define local_d0 (*(ulong *)(gh_fb - 0xd0))
#define uStack_c8 (*(ulong *)(gh_fb - 0xc8))
#define local_b8 (*(float *)(gh_fb - 0xb8))
#define fStack_b4 (*(float *)(gh_fb - 0xb4))
#define local_b0 (*(ulong *)(gh_fb - 0xb0))
#define uStack_a8 (*(ulong *)(gh_fb - 0xa8))
#define local_a0 (*(float *)(gh_fb - 0xa0))
#define fStack_9c (*(float *)(gh_fb - 0x9c))
#define local_98 (*(gh_long *)(gh_fb - 0x98))
#define auStack_90 (*(undefined1 (*)[8])(gh_fb - 0x90))
#define local_88 (*(gh_long (*)[2])(gh_fb - 0x88))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  uVar15 = CONCAT44(in_register_00005024,param_12);
  lVar3 = tpidr_el0;
  local_78 = *(gh_long *)(lVar3 + 0x28);
  if (0x18 < param_2 - 100U && 0x24 < (uint)param_2) {
    param_2 = 0;
  }
  iVar8 = param_2 + -100;
  if (param_2 + -100 == 0 || param_2 < 100) {
    iVar8 = param_2;
  }
  lVar11 = (gh_long)param_2;
  if (*(int *)(self + (gh_long)param_2 * 4 + 0x31dca8) != 0) {
    lVar10 = *(gh_long *)(self + lVar11 * 8 + 0x31d348);
    goto LAB_0046da0c;
  }
  if (param_2 < 0x65) {
    FUN_009d4eac(GH_ARG(&local_98), GH_ARG("img/npc2/Weaponimg[%d].png"), GH_ARG(auStack_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar10 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)&local_98), GH_ARG(iVar8));
    plVar9 = (gh_long *)(self + lVar11 * 8 + 0x31d348);
    *plVar9 = lVar10;
    puVar4 = (undefined8 *)(local_98 + -0x18);
    if (puVar4 != &DAT_00d40300) {
      piVar5 = (int *)(local_98 + -8);
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_0046de14;
    }
  }
  else {
    FUN_009d4eac(GH_ARG(local_88), GH_ARG("img/npc2/Weaponimgup[%d].png"), GH_ARG(auStack_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar10 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)local_88), GH_ARG(iVar8));
    plVar9 = (gh_long *)(self + lVar11 * 8 + 0x31d348);
    *plVar9 = lVar10;
    puVar4 = (undefined8 *)(local_88[0] + -0x18);
    if (puVar4 != &DAT_00d40300) {
      piVar5 = (int *)(local_88[0] + -8);
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_0046de14:
      if (iVar6 < 1) {
        operator_delete(puVar4);
      }
    }
  }
  lVar10 = *plVar9;
  *(int *)(self + lVar11 * 4 + 0x31d988) = (int)*(float *)(lVar10 + 0x4c4);
  *(int *)(self + (gh_long)param_2 * 4 + 0x31dca8) = (int)*(float *)(lVar10 + 0x4c8);
LAB_0046da0c:
  if (param_11 == 0) {
    iVar6 = *(int *)(self + (gh_long)iVar8 * 4 + 0x31cd08);
    lVar11 = (gh_long)iVar8;
    if (param_12 == 1.0) {
      iVar8 = *(int *)(self + lVar11 * 4 + 0x31d028);
    }
    else {
      fVar12 = (float)iVar6;
      if (param_12 <= 1.0) {
        fVar12 = fVar12 - (1.0 - param_12) * fVar12;
        fVar13 = (float)*(int *)(self + lVar11 * 4 + 0x31d028) -
                 (1.0 - param_12) * (float)*(int *)(self + lVar11 * 4 + 0x31d028);
      }
      else {
        fVar12 = fVar12 * param_12;
        fVar13 = (float)*(int *)(self + lVar11 * 4 + 0x31d028) * param_12;
      }
      iVar6 = (int)fVar12;
      iVar8 = (int)fVar13;
    }
    fVar12 = (float)(((param_4 + param_3) - param_5) - iVar6);
    if (param_16 == 0) {
      local_b8 = fVar12;
      fStack_b4 = (float)(param_6 - iVar8);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_d0), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
      kSprite__drawPos_0047f378(GH_ARG(local_d0), GH_ARG(local_d0 >> 0x20), GH_ARG(uStack_c8 & 0xffffffff), GH_ARG(uStack_c8 >> 0x20), GH_ARG(uVar15), GH_ARG(lVar10), GH_ARG(&local_b8), GH_ARG(0));
    }
    else {
      local_a0 = fVar12;
      fStack_9c = (float)(param_6 - iVar8);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
      kSprite__drawPos_0047ee7c(GH_ARG(local_b0), GH_ARG(local_b0 >> 0x20), GH_ARG(uStack_a8 & 0xffffffff), GH_ARG(uStack_a8 >> 0x20), GH_ARG(uVar15), GH_ARG((float)param_16 * 0.01), GH_ARG(lVar10), GH_ARG(&local_a0), GH_ARG(0), GH_ARG(param_13), GH_ARG(param_14 + param_4), GH_ARG(param_15));
    }
  }
  else {
    iVar6 = (param_3 - param_4) + param_5;
    if (param_12 == 1.0) {
      iVar7 = *(int *)(self + (gh_long)iVar8 * 4 + 0x31d028);
      iVar8 = (iVar6 - *(int *)(self + lVar11 * 4 + 0x31d988)) +
              *(int *)(self + (gh_long)iVar8 * 4 + 0x31cd08);
    }
    else {
      fVar12 = (float)*(int *)(self + lVar11 * 4 + 0x31d988);
      if (param_12 <= 1.0) {
        fVar14 = 1.0 - param_12;
        fVar12 = fVar12 - fVar14 * fVar12;
        fVar13 = (float)*(int *)(self + (gh_long)iVar8 * 4 + 0x31cd08) -
                 fVar14 * (float)*(int *)(self + (gh_long)iVar8 * 4 + 0x31cd08);
        fVar14 = (float)*(int *)(self + (gh_long)iVar8 * 4 + 0x31d028) -
                 fVar14 * (float)*(int *)(self + (gh_long)iVar8 * 4 + 0x31d028);
      }
      else {
        fVar12 = fVar12 * param_12;
        fVar13 = (float)*(int *)(self + (gh_long)iVar8 * 4 + 0x31cd08) * param_12;
        fVar14 = (float)*(int *)(self + (gh_long)iVar8 * 4 + 0x31d028) * param_12;
      }
      iVar8 = (iVar6 - (int)fVar12) + (int)fVar13;
      iVar7 = (int)fVar14;
    }
    if (param_16 == 0) {
      local_f8 = (float)iVar8;
      fStack_f4 = (float)(param_6 - iVar7);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_110), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
      kSprite__drawPos_0047f378(GH_ARG(local_110), GH_ARG(local_110 >> 0x20), GH_ARG(uStack_108 & 0xffffffff), GH_ARG(uStack_108 >> 0x20), GH_ARG(uVar15), GH_ARG(lVar10), GH_ARG(&local_f8), GH_ARG(param_11));
    }
    else {
      local_d8 = (float)iVar8;
      fStack_d4 = (float)(param_6 - iVar7);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_f0), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
      kSprite__drawPos_0047ee7c(GH_ARG(local_f0), GH_ARG(local_f0 >> 0x20), GH_ARG(uStack_e8 & 0xffffffff), GH_ARG(uStack_e8 >> 0x20), GH_ARG(uVar15), GH_ARG((float)(0x276 - param_16) * 0.01), GH_ARG(lVar10), GH_ARG(&local_d8), GH_ARG(param_11), GH_ARG(param_13), GH_ARG(param_14 - param_4), GH_ARG(param_15));
    }
  }
  if (*(gh_long *)(lVar3 + 0x28) != local_78) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
