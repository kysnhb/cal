/* bzStateGame::Obj_rotateImage_0046f164 @ 0x0046f164 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__Obj_rotateImage_0046f164(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11, uint64_t gh_a12, uint64_t gh_a13, uint64_t gh_a14, uint64_t gh_a15, uint64_t gh_a16)
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
  int param_17 = (int)gh_a16;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  gh_long lVar10;
  gh_long *plVar11;
  gh_long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 in_register_00005024 = 0;
  undefined8 uVar16;
  uint64_t gh_frame64[55] = {0};   /* 원작 스택 프레임 (SP-0x1a0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x1a0;
#define local_1a0 (*(ulong *)(gh_fb - 0x1a0))
#define uStack_198 (*(ulong *)(gh_fb - 0x198))
#define local_188 (*(float *)(gh_fb - 0x188))
#define fStack_184 (*(float *)(gh_fb - 0x184))
#define local_180 (*(ulong *)(gh_fb - 0x180))
#define uStack_178 (*(ulong *)(gh_fb - 0x178))
#define local_168 (*(float *)(gh_fb - 0x168))
#define fStack_164 (*(float *)(gh_fb - 0x164))
#define local_160 (*(ulong *)(gh_fb - 0x160))
#define uStack_158 (*(ulong *)(gh_fb - 0x158))
#define local_148 (*(float *)(gh_fb - 0x148))
#define fStack_144 (*(float *)(gh_fb - 0x144))
#define local_140 (*(ulong *)(gh_fb - 0x140))
#define uStack_138 (*(ulong *)(gh_fb - 0x138))
#define local_128 (*(float *)(gh_fb - 0x128))
#define fStack_124 (*(float *)(gh_fb - 0x124))
#define local_120 (*(gh_long *)(gh_fb - 0x120))
#define local_118 (*(gh_long *)(gh_fb - 0x118))
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
  
  uVar16 = CONCAT44(in_register_00005024,param_12);
  iVar8 = 0;
  if ((uint)param_2 < 700) {
    iVar8 = param_2;
  }
  lVar3 = tpidr_el0;
  local_78 = *(gh_long *)(lVar3 + 0x28);
  lVar12 = (gh_long)iVar8;
  if (param_17 != 1) {
    if (*(int *)(self + lVar12 * 4 + 0x3232e8) == 0) {
      if ((*(int *)(self + 0x32c158) == 0) &&
         (((iVar8 - 0x143U < 0xb || (iVar8 - 0x44U < 0x3b)) || (iVar8 - 0xb4U < 8)))) {
        FUN_009d4eac(GH_ARG(&local_118), GH_ARG("img/out/ImF2[%d].png"), GH_ARG(auStack_90), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        lVar10 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)&local_118), GH_ARG(iVar8));
        plVar11 = (gh_long *)(self + lVar12 * 8 + 0x320d68);
        *plVar11 = lVar10;
        puVar6 = (undefined8 *)(local_118 + -0x18);
        if (puVar6 != &DAT_00d40300) {
          piVar7 = (int *)(local_118 + -8);
          do {
            iVar8 = *piVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = iVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_0046fc20:
          if (iVar8 < 1) {
            operator_delete(puVar6);
          }
        }
      }
      else {
        FUN_009d4eac(GH_ARG(&local_120), GH_ARG("img/out/ImF[%d].png"), GH_ARG(auStack_90), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        lVar10 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)&local_120), GH_ARG(iVar8));
        plVar11 = (gh_long *)(self + lVar12 * 8 + 0x320d68);
        *plVar11 = lVar10;
        puVar6 = (undefined8 *)(local_120 + -0x18);
        if (puVar6 != &DAT_00d40300) {
          piVar7 = (int *)(local_120 + -8);
          do {
            iVar8 = *piVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = iVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          goto LAB_0046fc20;
        }
      }
      lVar10 = *plVar11;
      *(int *)(self + lVar12 * 4 + 0x322668) = (int)*(float *)(lVar10 + 0x4c4);
      *(int *)(self + lVar12 * 4 + 0x3232e8) = (int)*(float *)(lVar10 + 0x4c8);
      fVar4 = local_148;
      fVar5 = fStack_144;
    }
    else {
      lVar10 = *(gh_long *)(self + lVar12 * 8 + 0x320d68);
      fVar4 = local_148;
      fVar5 = fStack_144;
    }
    if (param_11 == 0) {
      iVar8 = *(int *)(self + lVar12 * 4 + 0x31f468);
      if (param_12 == 1.0) {
        iVar9 = *(int *)(self + lVar12 * 4 + 0x3200e8);
      }
      else {
        fVar13 = (float)iVar8;
        if (param_12 <= 1.0) {
          fVar13 = fVar13 - (1.0 - param_12) * fVar13;
          fVar14 = (float)*(int *)(self + lVar12 * 4 + 0x3200e8) -
                   (1.0 - param_12) * (float)*(int *)(self + lVar12 * 4 + 0x3200e8);
        }
        else {
          fVar13 = fVar13 * param_12;
          fVar14 = (float)*(int *)(self + lVar12 * 4 + 0x3200e8) * param_12;
        }
        iVar8 = (int)fVar13;
        iVar9 = (int)fVar14;
      }
      local_148 = (float)((param_4 + param_3) - iVar8);
      fStack_144 = (float)(param_6 - iVar9);
      if (param_16 == 0) {
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_160), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
        kSprite__drawPos_0047f378(GH_ARG(local_160), GH_ARG(local_160 >> 0x20), GH_ARG(uStack_158 & 0xffffffff), GH_ARG(uStack_158 >> 0x20), GH_ARG(uVar16), GH_ARG(lVar10), GH_ARG(&local_148), GH_ARG(0));
      }
      else {
        local_128 = local_148;
        fStack_124 = fStack_144;
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_140), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
        fStack_144 = fVar5;
        local_148 = fVar4;
        kSprite__drawPos_0047ee7c(GH_ARG(local_140), GH_ARG(local_140 >> 0x20), GH_ARG(uStack_138 & 0xffffffff), GH_ARG(uStack_138 >> 0x20), GH_ARG(uVar16), GH_ARG((float)param_16 * 0.01), GH_ARG(lVar10), GH_ARG(&local_128), GH_ARG(0), GH_ARG(param_13), GH_ARG(param_14 + param_4), GH_ARG(param_15));
      }
    }
    else {
      if (param_12 == 1.0) {
        iVar9 = *(int *)(self + lVar12 * 4 + 0x3200e8);
        iVar8 = ((param_3 - param_4) - *(int *)(self + lVar12 * 4 + 0x322668)) +
                *(int *)(self + lVar12 * 4 + 0x31f468);
      }
      else {
        fVar13 = (float)*(int *)(self + lVar12 * 4 + 0x322668);
        if (param_12 <= 1.0) {
          fVar15 = 1.0 - param_12;
          fVar13 = fVar13 - fVar15 * fVar13;
          fVar14 = (float)*(int *)(self + lVar12 * 4 + 0x31f468) -
                   fVar15 * (float)*(int *)(self + lVar12 * 4 + 0x31f468);
          fVar15 = (float)*(int *)(self + lVar12 * 4 + 0x3200e8) -
                   fVar15 * (float)*(int *)(self + lVar12 * 4 + 0x3200e8);
        }
        else {
          fVar13 = fVar13 * param_12;
          fVar14 = (float)*(int *)(self + lVar12 * 4 + 0x31f468) * param_12;
          fVar15 = (float)*(int *)(self + lVar12 * 4 + 0x3200e8) * param_12;
        }
        iVar8 = ((param_3 - param_4) - (int)fVar13) + (int)fVar14;
        iVar9 = (int)fVar15;
      }
      local_148 = fVar4;
      fStack_144 = fVar5;
      if (param_16 == 0) {
        local_188 = (float)iVar8;
        fStack_184 = (float)(param_6 - iVar9);
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_1a0), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
        kSprite__drawPos_0047f378(GH_ARG(local_1a0), GH_ARG(local_1a0 >> 0x20), GH_ARG(uStack_198 & 0xffffffff), GH_ARG(uStack_198 >> 0x20), GH_ARG(uVar16), GH_ARG(lVar10), GH_ARG(&local_188), GH_ARG(param_11));
      }
      else {
        local_168 = (float)iVar8;
        fStack_164 = (float)(param_6 - iVar9);
        cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_180), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
        kSprite__drawPos_0047ee7c(GH_ARG(local_180), GH_ARG(local_180 >> 0x20), GH_ARG(uStack_178 & 0xffffffff), GH_ARG(uStack_178 >> 0x20), GH_ARG(uVar16), GH_ARG((float)(0x276 - param_16) * 0.01), GH_ARG(lVar10), GH_ARG(&local_168), GH_ARG(param_11), GH_ARG(param_13), GH_ARG(param_14 - param_4), GH_ARG(param_15));
      }
    }
    goto LAB_0046fb70;
  }
  if (*(int *)(self + lVar12 * 4 + 0x3264e8) == 0) {
    if ((*(int *)(self + 0x32c158) == 0) &&
       (((iVar8 - 0x143U < 0xb || (iVar8 - 0x44U < 0x3b)) || (iVar8 - 0xb4U < 8)))) {
      FUN_009d4eac(GH_ARG(local_88), GH_ARG("img/out/ImF2[%d].png"), GH_ARG(auStack_90), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      lVar10 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)local_88), GH_ARG(iVar8));
      plVar11 = (gh_long *)(self + lVar12 * 8 + 0x323f68);
      *plVar11 = lVar10;
      puVar6 = (undefined8 *)(local_88[0] + -0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar7 = (int *)(local_88[0] + -8);
        do {
          iVar8 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
LAB_0046fbf8:
        if (iVar8 < 1) {
          operator_delete(puVar6);
        }
      }
    }
    else {
      FUN_009d4eac(GH_ARG(&local_98), GH_ARG("img/out2/ImF[%d].png"), GH_ARG(auStack_90), GH_ARG(param_4), GH_ARG(param_5), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      lVar10 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)&local_98), GH_ARG(iVar8));
      plVar11 = (gh_long *)(self + lVar12 * 8 + 0x323f68);
      *plVar11 = lVar10;
      puVar6 = (undefined8 *)(local_98 + -0x18);
      if (puVar6 != &DAT_00d40300) {
        piVar7 = (int *)(local_98 + -8);
        do {
          iVar8 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_0046fbf8;
      }
    }
    lVar10 = *plVar11;
    *(int *)(self + lVar12 * 4 + 0x325868) = (int)*(float *)(lVar10 + 0x4c4);
    *(int *)(self + lVar12 * 4 + 0x3264e8) = (int)*(float *)(lVar10 + 0x4c8);
    fVar4 = local_b8;
    fVar5 = fStack_b4;
  }
  else {
    lVar10 = *(gh_long *)(self + lVar12 * 8 + 0x323f68);
    fVar4 = local_b8;
    fVar5 = fStack_b4;
  }
  if (param_11 == 0) {
    iVar8 = *(int *)(self + lVar12 * 4 + 0x31f468);
    if (param_12 == 1.0) {
      iVar9 = *(int *)(self + lVar12 * 4 + 0x3200e8);
    }
    else {
      fVar13 = (float)iVar8;
      if (param_12 <= 1.0) {
        fVar13 = fVar13 - (1.0 - param_12) * fVar13;
        fVar14 = (float)*(int *)(self + lVar12 * 4 + 0x3200e8) -
                 (1.0 - param_12) * (float)*(int *)(self + lVar12 * 4 + 0x3200e8);
      }
      else {
        fVar13 = fVar13 * param_12;
        fVar14 = (float)*(int *)(self + lVar12 * 4 + 0x3200e8) * param_12;
      }
      iVar8 = (int)fVar13;
      iVar9 = (int)fVar14;
    }
    local_b8 = (float)((param_4 + param_3) - iVar8);
    fStack_b4 = (float)(param_6 - iVar9);
    if (param_16 == 0) {
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_d0), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
      kSprite__drawPos_0047f378(GH_ARG(local_d0), GH_ARG(local_d0 >> 0x20), GH_ARG(uStack_c8 & 0xffffffff), GH_ARG(uStack_c8 >> 0x20), GH_ARG(uVar16), GH_ARG(lVar10), GH_ARG(&local_b8), GH_ARG(0));
    }
    else {
      local_a0 = local_b8;
      fStack_9c = fStack_b4;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
      fStack_b4 = fVar5;
      local_b8 = fVar4;
      kSprite__drawPos_0047ee7c(GH_ARG(local_b0), GH_ARG(local_b0 >> 0x20), GH_ARG(uStack_a8 & 0xffffffff), GH_ARG(uStack_a8 >> 0x20), GH_ARG(uVar16), GH_ARG((float)param_16 * 0.01), GH_ARG(lVar10), GH_ARG(&local_a0), GH_ARG(0), GH_ARG(param_13), GH_ARG(param_14 + param_4), GH_ARG(param_15));
    }
  }
  else {
    if (param_12 == 1.0) {
      iVar9 = *(int *)(self + lVar12 * 4 + 0x3200e8);
      iVar8 = ((param_3 - param_4) - *(int *)(self + lVar12 * 4 + 0x325868)) +
              *(int *)(self + lVar12 * 4 + 0x31f468);
    }
    else {
      fVar13 = (float)*(int *)(self + lVar12 * 4 + 0x325868);
      if (param_12 <= 1.0) {
        fVar15 = 1.0 - param_12;
        fVar13 = fVar13 - fVar15 * fVar13;
        fVar14 = (float)*(int *)(self + lVar12 * 4 + 0x31f468) -
                 fVar15 * (float)*(int *)(self + lVar12 * 4 + 0x31f468);
        fVar15 = (float)*(int *)(self + lVar12 * 4 + 0x3200e8) -
                 fVar15 * (float)*(int *)(self + lVar12 * 4 + 0x3200e8);
      }
      else {
        fVar13 = fVar13 * param_12;
        fVar14 = (float)*(int *)(self + lVar12 * 4 + 0x31f468) * param_12;
        fVar15 = (float)*(int *)(self + lVar12 * 4 + 0x3200e8) * param_12;
      }
      iVar8 = ((param_3 - param_4) - (int)fVar13) + (int)fVar14;
      iVar9 = (int)fVar15;
    }
    local_b8 = fVar4;
    fStack_b4 = fVar5;
    if (param_16 == 0) {
      local_f8 = (float)iVar8;
      fStack_f4 = (float)(param_6 - iVar9);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_110), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
      kSprite__drawPos_0047f378(GH_ARG(local_110), GH_ARG(local_110 >> 0x20), GH_ARG(uStack_108 & 0xffffffff), GH_ARG(uStack_108 >> 0x20), GH_ARG(uVar16), GH_ARG(lVar10), GH_ARG(&local_f8), GH_ARG(param_11));
    }
    else {
      local_d8 = (float)iVar8;
      fStack_d4 = (float)(param_6 - iVar9);
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_f0), GH_ARG((float)param_7 / 255.0), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG(param_10));
      kSprite__drawPos_0047ee7c(GH_ARG(local_f0), GH_ARG(local_f0 >> 0x20), GH_ARG(uStack_e8 & 0xffffffff), GH_ARG(uStack_e8 >> 0x20), GH_ARG(uVar16), GH_ARG((float)(0x276 - param_16) * 0.01), GH_ARG(lVar10), GH_ARG(&local_d8), GH_ARG(param_11), GH_ARG(param_13), GH_ARG(param_14 - param_4), GH_ARG(param_15));
    }
  }
LAB_0046fb70:
  if (*(gh_long *)(lVar3 + 0x28) == local_78) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
