/* bzStateGame::GameUIImg_0041aa04 @ 0x0041aa04 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#ifdef __EMSCRIPTEN__
#define bzStateGame__GameUIImg_0041aa04 aos5_original_GameUIImg
#endif
#undef joyY2
#define joyY2 (*(undefined4 *)IMG(0x00d23c58))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef joyX2
#define joyX2 (*(undefined4 *)IMG(0x00d23c54))
gh_long bzStateGame__GameUIImg_0041aa04(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  uint *puVar1;
  uint uVar2;
  gh_long lVar3;
  char cVar4;
  gh_long lVar5;
  bool bVar6;
  int extraout_w1 = 0;
  int iVar7;
  int extraout_w1_00 = 0;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  gh_long lVar14;
  ulong uVar15;
  ulong uVar16;
  gh_long lVar17;
  undefined8 uVar18;
  int iVar19;
  int *piVar20;
  float fVar21;
  uint64_t gh_frame64[39] = {0};   /* 원작 스택 프레임 (SP-0x120 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x120;
#define auStack_120 (*(undefined1 (*)[8])(gh_fb - 0x120))
#define local_118 (*(gh_long *)(gh_fb - 0x118))
#define local_110 (*(ulong *)(gh_fb - 0x110))
#define uStack_108 (*(ulong *)(gh_fb - 0x108))
#define local_f8 (*(float *)(gh_fb - 0xf8))
#define local_f4 (*(float *)(gh_fb - 0xf4))
#define local_f0 (*(uint (*)[2])(gh_fb - 0xf0))
#define uStack_e8 (*(ulong *)(gh_fb - 0xe8))
#define local_98 (*(gh_long *)(gh_fb - 0x98))
  
  lVar5 = tpidr_el0;
  local_98 = *(gh_long *)(lVar5 + 0x28);
  piVar12 = (int *)(self + 0x32c8a8);
  piVar20 = (int *)(self + 0x8dae0);
  iVar8 = 0;
  if (*piVar12 < 6) {
    iVar8 = *piVar12 + 1;
  }
  *piVar12 = iVar8;
  if (*piVar20 == 0x96) {
    iVar8 = *(int *)(self + 0x32ba6c);
    lVar14 = (gh_long)*(int *)(self + 0x32ba68);
    if (*(int *)(self + (gh_long)(iVar8 + -0x14) * 4 + lVar14 * 0x2d0 + 0x140598) == 0xa1) {
      bzStateGame__GUIImg_rotateImage_00432d04(GH_ARG(self), GH_ARG(0x86), GH_ARG(0x87), GH_ARG(0x1cc - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.8), GH_ARG(1), GH_ARG(0x87), GH_ARG(0x1cc - param_2), GH_ARG(0x139));
      iVar8 = *(int *)(self + 0x32ba6c);
      lVar14 = (gh_long)*(int *)(self + 0x32ba68);
    }
    if (*(int *)(self + (gh_long)iVar8 * 4 + lVar14 * 0x2d0 + 0x1405e8) == 0xa1) {
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x86), GH_ARG(0x28), GH_ARG(0x212 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.8));
    }
    iVar8 = 0x1fb - param_2;
    iVar13 = *(int *)(self + 0x1158) + -0xbb;
    iVar7 = 0x87;
LAB_0041ab88:
    fVar21 = 0.5;
LAB_0041ab9c:
    uVar9 = 0xff;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar7), GH_ARG(iVar13), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar21), GH_ARG(0), GH_ARG(1.0));
  }
  else {
    iVar8 = -param_2;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x88), GH_ARG(0x1a), GH_ARG(iVar8 + 500), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1), GH_ARG(1.0));
    uVar9 = 0xff;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x88), GH_ARG(0xc5), GH_ARG(iVar8 + 500), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    puVar1 = (uint *)(self + 0x8db14);
    if (*piVar20 == 3) {
LAB_0041ade8:
      if (*puVar1 != 0x13) goto LAB_0041adf4;
    }
    else {
      if (*puVar1 != 0x17) {
        uVar9 = 0xff;
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x86), GH_ARG(0x28), GH_ARG(400 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.4), GH_ARG(0), GH_ARG(1.0));
        goto LAB_0041ade8;
      }
LAB_0041adf4:
      uVar9 = 0xff;
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x8c), GH_ARG(*(int *)(self + 0x1158) + -0x1d2), GH_ARG(0x209 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    }
    iVar13 = *piVar20;
    if ((iVar13 == 0x3b) || (iVar13 == 0xf)) {
      iVar8 = *(int *)(self + 0x1158);
      if (*(int *)(self + 0x8dd24) < 1) {
        if (*(int *)(self + 0x8dad8) == 0) {
          bzStateGame__Obj_drawImage_00432f78(GH_ARG(self), GH_ARG(0x16d), GH_ARG(iVar8 + -0x78), GH_ARG(0x208 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.8), GH_ARG(0), GH_ARG(0.7));
          iVar8 = *(int *)(self + 0x1158) + -0x80;
        }
        else {
          bzStateGame__Obj_drawImage_00432f78(GH_ARG(self), GH_ARG(0x16d), GH_ARG(iVar8 + -0xaa), GH_ARG(0x208 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.8), GH_ARG(0), GH_ARG(0.7));
          iVar8 = *(int *)(self + 0x1158) + -0xb2;
        }
        fVar21 = (joyY2 + -20.0) - (float)param_2;
      }
      else {
        if (*(int *)(self + 0x8dad8) == 0) {
          bzStateGame__Obj_drawImage_00432f78(GH_ARG(self), GH_ARG(0x16d), GH_ARG(iVar8 + -0x82), GH_ARG(0x1e0 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.9), GH_ARG(0), GH_ARG(1.0));
          iVar8 = *(int *)(self + 0x1158) + -0x85;
        }
        else {
          bzStateGame__Obj_drawImage_00432f78(GH_ARG(self), GH_ARG(0x16d), GH_ARG(iVar8 + -0xb4), GH_ARG(0x1e0 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.9), GH_ARG(0), GH_ARG(1.0));
          iVar8 = *(int *)(self + 0x1158) + -0xb7;
        }
        fVar21 = (joyY2 + -20.0) - (float)param_2;
      }
      uVar9 = 0xff;
      bzStateGame__Obj_drawImage_00432f78(GH_ARG(self), GH_ARG(0x16e), GH_ARG(iVar8), GH_ARG((int)fVar21), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
      if ((*piVar12 < 4) &&
         ((*(int *)(self + 0x32c134) <=
           *(int *)(self + (gh_long)*(int *)(self + 0x32c858) * 0x288 + 0x8db1c) ||
          (*(int *)(self + 0x32c134) <= *(int *)(self + 0x8db1c))))) {
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(*(int *)(self + 0x1158) + -0x104), GH_ARG(0x186 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
        iVar8 = 0x1a2 - param_2;
        iVar7 = 0x12;
        iVar13 = *(int *)(self + 0x1158) + -0xe2;
        fVar21 = 0.8;
        goto LAB_0041ab9c;
      }
    }
    else if (iVar13 == 3) {
      bzStateGame__GUIImg_rotateImage_00432d04(GH_ARG(self), GH_ARG(0x86), GH_ARG(*(int *)(self + 0x1158) + -0x32), GH_ARG(iVar8 + 0x1e0), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.8), GH_ARG(1), GH_ARG(*(int *)(self + 0x1158) + -0x32), GH_ARG(iVar8 + 0x1e0), GH_ARG(0x139));
      uVar9 = 0xff;
      bzStateGame__GUIImg_rotateImage_00432d04(GH_ARG(self), GH_ARG(0x86), GH_ARG(*(int *)(self + 0x1158) + -0x8f), GH_ARG(0x208 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.8), GH_ARG(1), GH_ARG(*(int *)(self + 0x1158) + -0x8f), GH_ARG(0x208 - param_2), GH_ARG(1));
    }
    else {
      uVar10 = *puVar1;
      if ((uVar10 < 0x18) && ((1 << (ulong)(uVar10 & 0x1f) & 0x880001U) != 0)) {
        if ((*piVar12 < 4) &&
           ((*(int *)(self + 0x32c134) <=
             *(int *)(self + (gh_long)*(int *)(self + 0x32c858) * 0x288 + 0x8db1c) ||
            (*(int *)(self + 0x32c134) <= *(int *)(self + 0x8db1c))))) {
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(*(int *)(self + 0x1158) + -0x104), GH_ARG(0x186 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x12), GH_ARG(*(int *)(self + 0x1158) + -0xe2), GH_ARG(0x1a2 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.8), GH_ARG(0), GH_ARG(1.0));
        }
        if ((((*(int *)(self + 0x32ba48) < 1) && (*(int *)(self + 0x32ba44) < 1)) || (3 < *piVar12))
           || ((*(int *)(self + 0x32ba44) == 2 && (*puVar1 == 0x13)))) {
          iVar13 = *(int *)(self + 0x1158);
          iVar7 = 0x8b;
        }
        else {
          iVar13 = *(int *)(self + 0x1158);
          iVar7 = 0x89;
        }
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar7), GH_ARG(iVar13 + -0x104), GH_ARG(0x186 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(*(int *)(self + 0x1158) + -0x79), GH_ARG(0x186 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x8a), GH_ARG(*(int *)(self + 0x1158) + -0x12f), GH_ARG(0x1ff - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
        uVar9 = 0xff;
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(*(int *)(self + 0x1158) + -0xa3), GH_ARG(iVar8 + 0x1fb), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0))
        ;
        if ((*(int *)(self + 0x32ba84) < 1) || (0x12 < (int)*puVar1)) goto joined_r0x0041becc;
        iVar8 = *(int *)(self + 0x1158);
      }
      else {
        if (0xc < (int)uVar10) {
          if ((int)uVar10 < 0x12) {
            if (((*(int *)(self + 0x32ba48) < 1) && (*(int *)(self + 0x32ba44) < 1)) ||
               (3 < *piVar12)) {
              iVar13 = *(int *)(self + 0x1158);
              iVar7 = 0x8b;
            }
            else {
              iVar13 = *(int *)(self + 0x1158);
              iVar7 = 0x89;
            }
            iVar19 = -param_2 + 0x186;
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar7), GH_ARG(iVar13 + -0x104), GH_ARG(iVar19), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(*(int *)(self + 0x1158) + -0x79), GH_ARG(iVar19), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
            if (0xe < (int)*puVar1) {
              bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x8a), GH_ARG(*(int *)(self + 0x1158) + -0x12f), GH_ARG(0x1ff - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
            }
            uVar9 = 0xff;
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(*(int *)(self + 0x1158) + -0xa3), GH_ARG(iVar8 + 0x1fb), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
            if ((*piVar12 < 4) &&
               ((*(int *)(self + 0x32c134) <=
                 *(int *)(self + (gh_long)*(int *)(self + 0x32c858) * 0x288 + 0x8db1c) ||
                (*(int *)(self + 0x32c134) <= *(int *)(self + 0x8db1c))))) {
              bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(*(int *)(self + 0x1158) + -0x104), GH_ARG(iVar19), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0))
              ;
              uVar9 = 0xff;
              bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x12), GH_ARG(*(int *)(self + 0x1158) + -0xe2), GH_ARG(-param_2 + 0x1a2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.8), GH_ARG(0), GH_ARG(1.0));
            }
            if (0 < *(int *)(self + 0x32ba84)) {
              if (0x12 < (int)*puVar1) goto joined_r0x0041becc;
              uVar9 = 0xff;
              bzStateGame__Obj_drawImage_00432f78(GH_ARG(self), GH_ARG(0x16e), GH_ARG(*(int *)(self + 0x1158) + -0xf1), GH_ARG(0x197 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.5));
              if (*(int *)(self + 0x32c7e4) == -1) {
                bzStateGame__GOrderView_003fa4bc(GH_ARG(self), GH_ARG(extraout_w1_00), GH_ARG(0x17), GH_ARG(*(int *)(self + 0x1158) + -0xc4), GH_ARG(0x1c2));
              }
            }
            if (*puVar1 == 0xd) {
              iVar8 = 0x1ff - param_2;
              iVar13 = *(int *)(self + 0x1158) + -0x12f;
              iVar7 = 0x8a;
              goto LAB_0041ab88;
            }
          }
          else if (uVar10 == 0x16) {
            fVar21 = 0.5;
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(*(int *)(self + 0x1158) + -0x79), GH_ARG(0x186 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
            bzStateGame__GUIImg_rotateImage_00432d04(GH_ARG(self), GH_ARG(0x86), GH_ARG(*(int *)(self + 0x1158) + -0x28), GH_ARG(0x1ce - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.8), GH_ARG(0), GH_ARG(1.0), GH_ARG(1), GH_ARG(*(int *)(self + 0x1158) + -0x28), GH_ARG(0x1ce - param_2), GH_ARG(0x139));
            iVar8 = iVar8 + 0x1fb;
            iVar7 = 0x89;
            iVar13 = *(int *)(self + 0x1158) + -0xa3;
            goto LAB_0041ab9c;
          }
          goto joined_r0x0041becc;
        }
        if (*(int *)(self + 0x8dd24) < 1) {
          iVar8 = 0x186 - param_2;
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x87), GH_ARG(*(int *)(self + 0x1158) + -0x79), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
          uVar9 = 0xff;
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x8f), GH_ARG(*(int *)(self + 0x1158) + -0xaa), GH_ARG(0x208 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.8), GH_ARG(0), GH_ARG(0.7));
          if (3 < (int)*puVar1) {
            uVar9 = 0xff;
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x8a), GH_ARG(*(int *)(self + 0x1158) + -0x12f), GH_ARG(0x1ff - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
          }
          if ((*(int *)(self + 0x32ba48) < 1) && (*(int *)(self + 0x32ba44) < 1)) goto LAB_0041c22c;
          if (*piVar12 < 4) {
            fVar21 = 0.5;
            iVar7 = 0x89;
            iVar13 = *(int *)(self + 0x1158) + -0x104;
            goto LAB_0041c228;
          }
        }
        else {
          fVar21 = 1.0;
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x8f), GH_ARG(*(int *)(self + 0x1158) + -200), GH_ARG(0x1e0 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.9), GH_ARG(0), GH_ARG(1.0));
          iVar7 = 0x90;
          iVar13 = (int)(joyX2 + -10.0);
          iVar8 = (int)((joyY2 + -10.0) - (float)param_2);
LAB_0041c228:
          uVar9 = 0xff;
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(iVar7), GH_ARG(iVar13), GH_ARG(iVar8), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(fVar21), GH_ARG(0), GH_ARG(1.0));
LAB_0041c22c:
          if ((*piVar12 < 4) &&
             ((*(int *)(self + 0x32c134) <=
               *(int *)(self + (gh_long)*(int *)(self + 0x32c858) * 0x288 + 0x8db1c) ||
              (*(int *)(self + 0x32c134) <= *(int *)(self + 0x8db1c))))) {
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(*(int *)(self + 0x1158) + -0x104), GH_ARG(0x186 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
            uVar9 = 0xff;
            bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x12), GH_ARG(*(int *)(self + 0x1158) + -0xe2), GH_ARG(0x1a2 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.8), GH_ARG(0), GH_ARG(1.0));
          }
        }
        if ((*(int *)(self + 0x32ba84) < 1) || (0x12 < (int)*puVar1)) goto joined_r0x0041becc;
        bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x8b), GH_ARG(*(int *)(self + 0x1158) + -0x104), GH_ARG(0x186 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
        iVar8 = *(int *)(self + 0x1158);
      }
      uVar9 = 0xff;
      bzStateGame__Obj_drawImage_00432f78(GH_ARG(self), GH_ARG(0x16e), GH_ARG(iVar8 + -0xf1), GH_ARG(0x197 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.5));
      if (*(int *)(self + 0x32c7e4) == -1) {
        bzStateGame__GOrderView_003fa4bc(GH_ARG(self), GH_ARG(extraout_w1), GH_ARG(0x17), GH_ARG(*(int *)(self + 0x1158) + -0xc4), GH_ARG(0x1c2));
      }
    }
  }
joined_r0x0041becc:
  if (param_2 != 0) {
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x83), GH_ARG(*(int *)(self + 0x1158) + -600), GH_ARG(0x1fb - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x84), GH_ARG(*(int *)(self + 0x1158) + -0x249), GH_ARG(0x20a - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x85), GH_ARG(*(int *)(self + 0x1158) + -0x226), GH_ARG(0x242 - param_2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    FUN_009d4eac(GH_ARG(&local_118), GH_ARG("x"), GH_ARG(auStack_120), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar8 = *(int *)(self + 0x1158);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_f0), GH_ARG(0.9019608), GH_ARG(0.9019608), GH_ARG(0.9019608), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_110), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    local_f8 = (float)(iVar8 + -0x214);
    local_f4 = (float)(0x240 - param_2);
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_f0[1],local_f0[0])), GH_ARG(local_f0[1]), GH_ARG(uStack_e8 & 0xffffffff), GH_ARG(uStack_e8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(&local_118), GH_ARG(&local_f8), GH_ARG(0));
    if ((undefined8 *)(local_118 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_118 + -8);
      do {
        iVar8 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 < 1) {
        operator_delete((undefined8 *)(local_118 + -0x18));
      }
    }
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(5), GH_ARG(*(int *)(self + 0x1158) + -0x1f1), GH_ARG(0x260 - param_2), GH_ARG(0xe6), GH_ARG(0xe6), GH_ARG(0xe6), GH_ARG(1.0), GH_ARG(1.0));
    goto LAB_0041c0d8;
  }
  bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(5), GH_ARG(0), GH_ARG(0), GH_ARG((int)uVar9), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
  lVar14 = 0;
  iVar8 = 0x11b;
  piVar20 = (int *)(self + 0x8dd74);
  do {
    if ((0 < *(int *)(self + lVar14 + 0x32c3fc)) && (0 < *piVar20)) {
      bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(*(int *)(self + lVar14 + 0x32c3fc) + 0x36), GH_ARG(iVar8), GH_ARG(0), GH_ARG((int)uVar9), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
      iVar7 = *piVar20;
      iVar13 = 0;
      if ((iVar7 != 1) &&
         (iVar13 = (int)((float)iVar7 /
                        ((float)(*(int *)(self + (gh_long)*(int *)(self + lVar14 + 0x32c3fc) * 4 +
                                                 0x32c304) / 10) / 100.0)), iVar13 == 0 && 1 < iVar7
         )) {
        iVar13 = 1;
      }
      uVar18 = *(undefined8 *)(self + 0xc38);
      cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)local_f0), GH_ARG((float)iVar8), GH_ARG(1.0), GH_ARG((float)(int)((float)iVar13 * 0.65)), GH_ARG(6.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_110), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      kDraw__drawRect_00479ae8(GH_ARG(local_110), GH_ARG(local_110 >> 0x20), GH_ARG(uStack_108 & 0xffffffff), GH_ARG(uStack_108 >> 0x20), GH_ARG(uVar18), GH_ARG(local_f0));
      if (*piVar12 < 4) {
        if (piVar20[0xc] < *(int *)(self + 0x32c134)) {
          if (((0 < *(int *)(self + 0x32c15c)) && (*piVar12 < 4)) &&
             (*piVar20 <
              *(int *)(self + (gh_long)*(int *)(self + lVar14 + 0x32c3fc) * 4 + 0x32c304) / 0x14)) {
            uVar9 = 10;
            bzStateGame__Pimg_rotateImage_004331e8(GH_ARG(self), GH_ARG(0x7c), GH_ARG(iVar8 + 0x2f), GH_ARG(0), GH_ARG(0), GH_ARG(10), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.2), GH_ARG(0), GH_ARG(iVar8 + 0x2f), GH_ARG(10), GH_ARG(1));
          }
        }
        else {
          uVar9 = 0xff;
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x12), GH_ARG(iVar8 + 0x2b), GH_ARG(10), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.5));
        }
      }
      if (iVar8 == 0x11b) {
        iVar8 = 0x15e;
      }
      else if (iVar8 == 0x15e) {
        iVar8 = 0x1a1;
      }
    }
    iVar13 = (int)uVar9;
    lVar14 = lVar14 + 4;
    piVar20 = piVar20 + 0xa2;
  } while (lVar14 != 0xc);
  if ((*piVar12 < 4) &&
     ((iVar8 = *(int *)(self + 0x32c134),
      iVar8 <= *(int *)(self + (gh_long)*(int *)(self + 0x32c858) * 0x288 + 0x8db1c) ||
      (iVar8 <= *(int *)(self + 0x8db1c))))) {
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x89), GH_ARG(*(int *)(self + 0x1158) + -0x104), GH_ARG(0x186), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.5), GH_ARG(0), GH_ARG(1.0));
    iVar13 = 0xff;
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x12), GH_ARG(*(int *)(self + 0x1158) + -0xe2), GH_ARG(0x1a2), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.8), GH_ARG(0), GH_ARG(1.0));
  }
  bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(6), GH_ARG(*(int *)(self + 0x1158)), GH_ARG(0), GH_ARG(iVar13), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
  bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(*(int *)(self + 0x32c434) + *(int *)(self + 0x32c164)), GH_ARG(*(int *)(self + 0x1158) + -0x11e), GH_ARG(0x30), GH_ARG(0xff), GH_ARG(0xba), GH_ARG(0), GH_ARG(1.0), GH_ARG(1.0));
  bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(*(int *)(self + 0x32c438) + *(int *)(self + 0x32c168)), GH_ARG(*(int *)(self + 0x1158) + -0x49), GH_ARG(0x30), GH_ARG(0xd8), GH_ARG(0x2b), GH_ARG(0xdf), GH_ARG(1.0), GH_ARG(1.0));
  if ((0 < *(int *)(self + 0x32c150)) && (*(int *)(self + 0xc2c) == 0)) {
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x83), GH_ARG(*(int *)(self + 0x1158) + -600), GH_ARG(0x1fb), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x84), GH_ARG(*(int *)(self + 0x1158) + -0x249), GH_ARG(0x20a), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x85), GH_ARG(*(int *)(self + 0x1158) + -0x226), GH_ARG(0x242), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
    FUN_009d4eac(GH_ARG(&local_118), GH_ARG("x"), GH_ARG(auStack_120), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    iVar8 = *(int *)(self + 0x1158);
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_f0), GH_ARG(0.9019608), GH_ARG(0.9019608), GH_ARG(0.9019608), GH_ARG(1.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_110), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    local_f8 = (float)(iVar8 + -0x214);
    local_f4 = 576.0;
    kFont__drawString_0047ae54(GH_ARG(CONCAT44(local_f0[1],local_f0[0])), GH_ARG(local_f0[1]), GH_ARG(uStack_e8 & 0xffffffff), GH_ARG(uStack_e8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da90)), GH_ARG(&local_118), GH_ARG(&local_f8), GH_ARG(0));
    if ((undefined8 *)(local_118 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_118 + -8);
      do {
        iVar8 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 < 1) {
        operator_delete((undefined8 *)(local_118 + -0x18));
      }
    }
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(*(int *)(self + 0x32c150)), GH_ARG(*(int *)(self + 0x1158) + -0x1f1), GH_ARG(0x260), GH_ARG(0xe6), GH_ARG(0xe6), GH_ARG(0xe6), GH_ARG(1.0), GH_ARG(1.0));
  }
  puVar1 = (uint *)(self + 0x32c924);
  uVar10 = *puVar1;
  if ((int)uVar10 < 1) {
    bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x12), GH_ARG(5), GH_ARG(0x4b), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.8));
  }
  else {
    if ((uVar10 < 8) && ((1 << (ulong)(uVar10 & 0x1f) & 0xaaU) != 0)) {
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0x12), GH_ARG(5), GH_ARG(0x4b), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.9));
      uVar10 = *puVar1;
    }
    *puVar1 = uVar10 - 1;
  }
  bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xca), GH_ARG(0x19), GH_ARG(0x68), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.7), GH_ARG(0), GH_ARG(1.0));
  uVar10 = *(uint *)(self + 0x32c3f8);
  memset(local_f0,0,0x50);
  local_f0[0] = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
  if ((int)local_f0[0] < 10) {
    iVar13 = 0;
LAB_0041b7fc:
    iVar8 = 0;
    lVar14 = (gh_long)iVar13;
    do {
      lVar17 = (gh_long)(int)local_f0[lVar14] + 0x32;
      bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG((int)lVar17), GH_ARG(iVar8 + 0x28), GH_ARG(0x76 - *(int *)(self + lVar17 * 4 + 0x32a1d8)), GH_ARG(0xe6), GH_ARG(0xe6), GH_ARG(0xe6), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
      iVar8 = iVar8 + *(int *)(self + lVar17 * 4 + 0x329d28) + -2;
      *(int *)(self + 0x32c9bc) = iVar8;
      bVar6 = 0 < lVar14;
      lVar14 = lVar14 + -1;
    } while (bVar6);
  }
  else {
    lVar14 = 10;
    uVar15 = (ulong)local_f0[0];
    lVar17 = 100;
    local_f0[0] = local_f0[0] % 10;
    uVar11 = 1;
    do {
      if ((gh_long)uVar15 < lVar17) {
        uVar10 = 0;
        if (lVar14 != 0) {
          uVar10 = (uint)((gh_long)uVar15 / lVar14);
        }
        uVar16 = uVar11 & 0xffffffff;
        local_f0[uVar11] = uVar10;
        iVar8 = (int)uVar11;
        goto joined_r0x0041b7f8;
      }
      lVar3 = 0;
      if (lVar17 != 0) {
        lVar3 = (gh_long)uVar15 / lVar17;
      }
      uVar16 = uVar11 + 1;
      uVar10 = 0;
      if (lVar14 != 0) {
        uVar10 = (uint)((gh_long)(uVar15 - lVar3 * lVar17) / lVar14);
      }
      bVar6 = uVar11 < 0x13;
      lVar17 = lVar17 * 10;
      local_f0[uVar11] = uVar10;
      lVar14 = lVar14 * 10;
      uVar11 = uVar16;
    } while (bVar6);
    iVar8 = (int)uVar16;
joined_r0x0041b7f8:
    iVar13 = (int)uVar16;
    if (-1 < iVar8) goto LAB_0041b7fc;
  }
  if (*(int *)(self + 0x32c424) == 0xf6) {
    uVar9 = *(undefined8 *)(self + 0xc38);
    cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)local_f0), GH_ARG(0.0), GH_ARG(69.0), GH_ARG(283.0), GH_ARG(5.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_110), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
    kDraw__drawRect_00479ae8(GH_ARG(local_110), GH_ARG(local_110 >> 0x20), GH_ARG(uStack_108 & 0xffffffff), GH_ARG(uStack_108 >> 0x20), GH_ARG(uVar9), GH_ARG(local_f0));
    piVar12 = (int *)(self + 0x32c428);
    iVar8 = *piVar12;
    fVar21 = 0.0;
    if (iVar8 != 1) {
      fVar21 = 2.0;
      if ((int)((float)iVar8 * 0.5) != 0 || iVar8 < 2) {
        fVar21 = (float)(int)((float)(int)((float)iVar8 * 0.5) * 2.77);
      }
    }
    uVar9 = *(undefined8 *)(self + 0xc38);
    cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)local_f0), GH_ARG(3.0), GH_ARG(69.0), GH_ARG(fVar21), GH_ARG(4.0));
    cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_110), GH_ARG(1.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
    kDraw__drawRect_00479ae8(GH_ARG(local_110), GH_ARG(local_110 >> 0x20), GH_ARG(uStack_108 & 0xffffffff), GH_ARG(uStack_108 >> 0x20), GH_ARG(uVar9), GH_ARG(local_f0));
    puVar1 = (uint *)(self + 0x32c8b8);
    uVar2 = *puVar1;
    piVar20 = (int *)(self + 0x8db14);
    uVar10 = uVar2 + 1;
    *puVar1 = uVar10;
    if (*piVar20 == 0x13) {
      if (5 < (int)uVar2) {
        *puVar1 = 0;
        iVar8 = *piVar12;
        if ((0 < iVar8) && (*piVar12 = iVar8 + -1, iVar8 < 6)) {
          *puVar1 = 0xf;
          if (iVar8 < 2) {
            piVar20[0] = 0;
            piVar20[1] = 0;
            iVar13 = *(int *)(self + 0x8db04);
            iVar8 = iVar13 + 3;
            if (-1 < iVar13) {
              iVar8 = iVar13;
            }
            *(int *)(self + 0x8db04) = iVar8 >> 2;
            *(undefined4 *)(self + 0x8db24) = 0x3f8ccccd;
          }
          else {
            *(float *)(self + 0x8db24) = *(float *)(self + 0x8db24) + -0.1;
          }
        }
      }
    }
    else {
      iVar8 = *piVar12;
      if (0xf < (int)uVar2) {
        if (iVar8 < 200) {
          iVar8 = iVar8 + 1;
          *piVar12 = iVar8;
        }
        uVar10 = 0;
        *puVar1 = 0;
      }
      if (199 < iVar8) {
        if (((int)uVar10 < 4) || ((uVar10 & 0xfffffffc) == 8)) {
          uVar9 = *(undefined8 *)(self + 0xc38);
          fVar21 = 2.0;
          if ((int)((float)iVar8 * 0.5) != 0) {
            fVar21 = (float)(int)((float)(int)((float)iVar8 * 0.5) * 2.77);
          }
          cocos2d__Rect__Rect_005c7150(GH_ARG((Rect *)local_f0), GH_ARG(3.0), GH_ARG(69.0), GH_ARG(fVar21), GH_ARG(4.0));
          cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_110), GH_ARG(0.0), GH_ARG(0.78431374), GH_ARG(0.11764706), GH_ARG(1.0));
          kDraw__drawRect_00479ae8(GH_ARG(local_110), GH_ARG(local_110 >> 0x20), GH_ARG(uStack_108 & 0xffffffff), GH_ARG(uStack_108 >> 0x20), GH_ARG(uVar9), GH_ARG(local_f0));
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xd4), GH_ARG(0x55), GH_ARG(0x50), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(0.9));
        }
        else {
          bzStateGame__GUIImg_drawImage_003af498(GH_ARG(self), GH_ARG(0xd4), GH_ARG(0x51), GH_ARG(0x4c), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.0));
        }
      }
    }
  }
LAB_0041c0d8:
  if (*(gh_long *)(lVar5 + 0x28) == local_98) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
