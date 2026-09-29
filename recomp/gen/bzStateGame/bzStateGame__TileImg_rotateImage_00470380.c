/* bzStateGame::TileImg_rotateImage_00470380 @ 0x00470380 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__TileImg_rotateImage_00470380(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11, uint64_t gh_a12)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  float param_7 = gh_b2f(gh_a6);
  int param_8 = (int)gh_a7;
  float param_9 = gh_b2f(gh_a8);
  int param_10 = (int)gh_a9;
  int param_11 = (int)gh_a10;
  int param_12 = (int)gh_a11;
  int param_13 = (int)gh_a12;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  int *piVar5;
  int iVar6;
  gh_long lVar7;
  gh_long lVar8;
  float fVar9;
  undefined4 in_register_00005024 = 0;
  undefined8 uVar10;
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
#define local_98 (*(float *)(gh_fb - 0x98))
#define fStack_94 (*(float *)(gh_fb - 0x94))
#define auStack_90 (*(undefined1 (*)[8])(gh_fb - 0x90))
#define local_88 (*(gh_long (*)[2])(gh_fb - 0x88))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  uVar10 = CONCAT44(in_register_00005024,param_9);
  lVar4 = tpidr_el0;
  local_78 = *(gh_long *)(lVar4 + 0x28);
  iVar6 = 0;
  if ((uint)param_2 < 0x1ab) {
    iVar6 = param_2;
  }
  lVar8 = (gh_long)iVar6;
  if (*(int *)(self + (gh_long)iVar6 * 4 + 0x328b30) == 0) {
    FUN_009d4eac(GH_ARG(local_88), GH_ARG("img/tile/bimg[%d].png"), GH_ARG(auStack_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar7 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)local_88), GH_ARG(iVar6));
    *(gh_long *)(self + lVar8 * 8 + 0x327168) = lVar7;
    if ((undefined8 *)(local_88[0] + -0x18) != &DAT_00d40300) {
      piVar5 = (int *)(local_88[0] + -8);
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
        operator_delete((undefined8 *)(local_88[0] + -0x18));
      }
    }
    lVar7 = *(gh_long *)(self + lVar8 * 8 + 0x327168);
    *(int *)(self + lVar8 * 4 + 0x328298) = (int)*(float *)(lVar7 + 0x4c4);
    *(int *)(self + (gh_long)iVar6 * 4 + 0x328b30) = (int)*(float *)(lVar7 + 0x4c8);
  }
  else {
    lVar7 = *(gh_long *)(self + lVar8 * 8 + 0x327168);
  }
  if (param_8 == 0) {
    fVar9 = (float)((param_4 + param_3) - param_5);
    if (param_13 == 0) {
      local_b8 = fVar9;
      fStack_b4 = (float)param_6;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_d0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(param_7));
      kSprite__drawPos_0047f378(GH_ARG(local_d0), GH_ARG(local_d0 >> 0x20), GH_ARG(uStack_c8 & 0xffffffff), GH_ARG(uStack_c8 >> 0x20), GH_ARG(uVar10), GH_ARG(lVar7), GH_ARG(&local_b8), GH_ARG(0));
    }
    else {
      local_98 = fVar9;
      fStack_94 = (float)param_6;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(param_7));
      kSprite__drawPos_0047ee7c(GH_ARG(local_b0), GH_ARG(local_b0 >> 0x20), GH_ARG(uStack_a8 & 0xffffffff), GH_ARG(uStack_a8 >> 0x20), GH_ARG(uVar10), GH_ARG((float)param_13 * 0.01), GH_ARG(lVar7), GH_ARG(&local_98), GH_ARG(0), GH_ARG(param_10), GH_ARG(param_11 + param_4), GH_ARG(param_12));
    }
  }
  else {
    iVar6 = *(int *)(self + lVar8 * 4 + 0x328298);
    if (param_9 != 1.0) {
      fVar9 = (float)iVar6;
      if (param_9 <= 1.0) {
        fVar9 = fVar9 - (1.0 - param_9) * fVar9;
      }
      else {
        fVar9 = fVar9 * param_9;
      }
      iVar6 = (int)fVar9;
    }
    fVar9 = (float)(((param_3 - param_4) + param_5) - iVar6);
    if (param_13 == 0) {
      local_f8 = fVar9;
      fStack_f4 = (float)param_6;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_110), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(param_7));
      kSprite__drawPos_0047f378(GH_ARG(local_110), GH_ARG(local_110 >> 0x20), GH_ARG(uStack_108 & 0xffffffff), GH_ARG(uStack_108 >> 0x20), GH_ARG(uVar10), GH_ARG(lVar7), GH_ARG(&local_f8), GH_ARG(param_8));
    }
    else {
      local_d8 = fVar9;
      fStack_d4 = (float)param_6;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_f0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(param_7));
      kSprite__drawPos_0047ee7c(GH_ARG(local_f0), GH_ARG(local_f0 >> 0x20), GH_ARG(uStack_e8 & 0xffffffff), GH_ARG(uStack_e8 >> 0x20), GH_ARG(uVar10), GH_ARG((float)(0x276 - param_13) * 0.01), GH_ARG(lVar7), GH_ARG(&local_d8), GH_ARG(param_8), GH_ARG(param_10), GH_ARG(param_11 - param_4), GH_ARG(param_12));
    }
  }
  if (*(gh_long *)(lVar4 + 0x28) != local_78) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
