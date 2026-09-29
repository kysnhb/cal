/* bzStateGame::drawEventIcon @ 0x00470770 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__drawEventIcon(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11)
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
  int param_10 = (int)gh_a9;
  float param_11 = gh_b2f(gh_a10);
  float param_12 = gh_b2f(gh_a11);

  gh_long lVar1;
  int iVar2;
  int iVar3;
  gh_long lVar4;
  undefined4 in_register_00005024 = 0;
  int iVar5;
  uint64_t gh_frame64[21] = {0};   /* 원작 스택 프레임 (SP-0x90 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x90;
#define local_90 (*(ulong *)(gh_fb - 0x90))
#define uStack_88 (*(ulong *)(gh_fb - 0x88))
#define local_80 (*(float *)(gh_fb - 0x80))
#define fStack_7c (*(float *)(gh_fb - 0x7c))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  lVar1 = tpidr_el0;
  local_78 = *(gh_long *)(lVar1 + 0x28);
  if (param_2 == 2) {
    *(undefined4 *)(self + 0x8db20) = 0x3f800000;
    bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(0), GH_ARG(param_5), GH_ARG(param_6 + 0x40), GH_ARG(0x268), GH_ARG(0), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(0.4), GH_ARG(0));
  }
  else if (param_2 == 1) {
    if (param_3 == 1) {
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x7a), GH_ARG(param_5 + -0x20), GH_ARG(param_6), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(param_7), GH_ARG(0.7));
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x68), GH_ARG(param_5 + -0x32), GH_ARG(param_6 + 0x3c), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(param_7), GH_ARG(1.0));
      iVar2 = 0xd8;
      iVar3 = 0x2b;
      iVar5 = 0xdf;
    }
    else {
      if (param_3 != 0) goto LAB_00470aa0;
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x76), GH_ARG(param_5 + -0x20), GH_ARG(param_6), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(param_7), GH_ARG(0.7));
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x69), GH_ARG(param_5 + -0x32), GH_ARG(param_6 + 0x3c), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(param_7), GH_ARG(1.0));
      iVar2 = 0xff;
      iVar3 = 0xba;
      iVar5 = 0;
    }
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(param_4), GH_ARG(param_5 + 0x30), GH_ARG(param_6 + 0x50), GH_ARG(iVar2), GH_ARG(iVar3), GH_ARG(iVar5), GH_ARG(1.0), GH_ARG(0.7));
  }
  else if (param_2 == 0) {
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x44), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(param_11), GH_ARG(param_7), GH_ARG(param_12));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(param_3), GH_ARG(0), GH_ARG(0), GH_ARG(param_8), GH_ARG(param_9), GH_ARG(param_10), GH_ARG(param_11), GH_ARG(param_7), GH_ARG(param_12));
    lVar4 = *(gh_long *)(self + (gh_long)param_3 * 8 + 0x3293c8);
    fStack_7c = (float)(param_6 + 0x3a) - *(float *)(lVar4 + 0x4c8);
    local_80 = (float)(param_5 + 0x21) + *(float *)(lVar4 + 0x4c4) * -0.5;
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_90), GH_ARG((float)param_8 / 255.0), GH_ARG((float)param_9 / 255.0), GH_ARG((float)param_10 / 255.0), GH_ARG(param_11));
    kSprite__drawPos_0047f378(GH_ARG(local_90), GH_ARG(local_90 >> 0x20), GH_ARG(uStack_88 & 0xffffffff), GH_ARG(uStack_88 >> 0x20), GH_ARG(CONCAT44(in_register_00005024,param_12)), GH_ARG(lVar4), GH_ARG(&local_80), GH_ARG(param_7));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x3c), GH_ARG(param_5 + 9), GH_ARG(param_6 + 0x29), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(param_11), GH_ARG(param_7), GH_ARG(param_12));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(param_4 + 0x32), GH_ARG(param_5 + 0x1d), GH_ARG(param_6 + 0x29), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(param_11), GH_ARG(param_7), GH_ARG(param_12));
  }
LAB_00470aa0:
  if (*(gh_long *)(lVar1 + 0x28) == local_78) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
