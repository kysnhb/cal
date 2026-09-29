/* bzStateGame::PCCData_00449f48 @ 0x00449f48 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
undefined8 bzStateGame__PCCData_00449f48(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10)
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
  int param_11 = (int)gh_a10;

  gh_long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  iVar4 = param_4 * 0x12;
  fVar16 = *(float *)(self + (gh_long)param_3 * 0x288 + 0x8db24);
  iVar3 = *(int *)(self + (gh_long)param_4 * 0x48 + 0xc1670);
  if (fVar16 == 1.0) {
    *(int *)(self + 0x32c86c) = iVar3;
    iVar5 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc1674);
    *(int *)(self + 0x32c870) = iVar5;
    iVar6 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc1678);
    *(int *)(self + 0x32c874) = iVar6;
    iVar7 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc167c);
    *(int *)(self + 0x32c878) = iVar7;
    iVar10 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc1680);
    *(int *)(self + 0x32c87c) = iVar10;
    iVar11 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc1684);
    *(int *)(self + 0x32c880) = iVar11;
    iVar12 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc1688);
    *(int *)(self + 0x32c884) = iVar12;
    iVar13 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc168c);
    *(int *)(self + 0x32c888) = iVar13;
    iVar14 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc1690);
    *(int *)(self + 0x32c88c) = iVar14;
    iVar2 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc1694);
    *(int *)(self + 0x32c890) = iVar2;
    iVar15 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc1698);
    *(int *)(self + 0x32c894) = iVar15;
    iVar4 = *(int *)(self + (gh_long)iVar4 * 4 + 0xc169c);
  }
  else {
    fVar17 = (float)iVar3;
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar3 = (int)fVar17;
    *(int *)(self + 0x32c86c) = iVar3;
    lVar1 = (gh_long)iVar4;
    fVar17 = (float)*(int *)(self + (gh_long)iVar4 * 4 + 0xc1674);
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar5 = (int)fVar17;
    *(int *)(self + 0x32c870) = iVar5;
    fVar17 = (float)*(int *)(self + lVar1 * 4 + 0xc1678);
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar6 = (int)fVar17;
    *(int *)(self + 0x32c874) = iVar6;
    fVar17 = (float)*(int *)(self + lVar1 * 4 + 0xc167c);
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar7 = (int)fVar17;
    *(int *)(self + 0x32c878) = iVar7;
    fVar17 = (float)*(int *)(self + lVar1 * 4 + 0xc1680);
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar10 = (int)fVar17;
    *(int *)(self + 0x32c87c) = iVar10;
    fVar17 = (float)*(int *)(self + lVar1 * 4 + 0xc1684);
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar11 = (int)fVar17;
    *(int *)(self + 0x32c880) = iVar11;
    fVar17 = (float)*(int *)(self + lVar1 * 4 + 0xc1688);
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar12 = (int)fVar17;
    *(int *)(self + 0x32c884) = iVar12;
    fVar17 = (float)*(int *)(self + lVar1 * 4 + 0xc168c);
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar13 = (int)fVar17;
    *(int *)(self + 0x32c888) = iVar13;
    fVar17 = (float)*(int *)(self + lVar1 * 4 + 0xc1690);
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar14 = (int)fVar17;
    *(int *)(self + 0x32c88c) = iVar14;
    fVar17 = (float)*(int *)(self + lVar1 * 4 + 0xc1694);
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar2 = (int)fVar17;
    *(int *)(self + 0x32c890) = iVar2;
    fVar17 = (float)*(int *)(self + lVar1 * 4 + 0xc1698);
    if (fVar16 <= 1.0) {
      fVar17 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar17 = fVar16 * fVar17;
    }
    iVar15 = (int)fVar17;
    *(int *)(self + 0x32c894) = iVar15;
    fVar17 = (float)*(int *)(self + lVar1 * 4 + 0xc169c);
    if (fVar16 <= 1.0) {
      fVar16 = fVar17 - (1.0 - fVar16) * fVar17;
    }
    else {
      fVar16 = fVar16 * fVar17;
    }
    iVar4 = (int)fVar16;
  }
  lVar1 = (gh_long)param_3;
  *(int *)(self + 0x32c898) = iVar4;
  if (param_2 == 0) {
    iVar8 = *(int *)(self + (gh_long)param_3 * 0x288 + 0x8dac8);
    iVar9 = *(int *)(self + lVar1 * 0x288 + 0x8dacc);
  }
  else {
    iVar8 = *(int *)(self + (gh_long)param_3 * 0x288 + 0x8dac8);
    iVar9 = *(int *)(self + lVar1 * 0x288 + 0x8dad4) + *(int *)(self + lVar1 * 0x288 + 0x8dacc);
    if (*(int *)(self + lVar1 * 0x288 + 0x8dad8) == 0) {
      iVar8 = *(int *)(self + lVar1 * 0x288 + 0x8dad0) + iVar8;
    }
    else {
      iVar8 = iVar8 - *(int *)(self + lVar1 * 0x288 + 0x8dad0);
    }
  }
  if (param_7 == 1) {
    fVar18 = (float)((param_5 - param_8) - param_10);
    fVar16 = (float)(param_9 + param_6);
    fVar19 = (float)param_10;
    fVar17 = (float)param_11;
    if (*(int *)(self + lVar1 * 0x288 + 0x8dad8) == 0) {
      fVar22 = (float)iVar15;
      fVar21 = (float)(iVar8 + iVar14);
      fVar20 = (float)iVar4;
      if (fVar19 <= fVar22) {
        if ((fVar18 < fVar21) || (fVar22 + fVar21 <= fVar18)) {
          iVar4 = 1;
          if ((fVar19 + fVar18 <= fVar21) || (fVar22 + fVar21 < fVar19 + fVar18)) goto LAB_0044a8a4;
        }
LAB_0044a8a0:
        iVar4 = 2;
      }
      else {
        if ((fVar18 < fVar21) && (fVar21 < fVar19 + fVar18)) goto LAB_0044a8a0;
        iVar4 = 1;
        if ((fVar18 < fVar22 + fVar21) && (fVar22 + fVar21 < fVar19 + fVar18)) goto LAB_0044a8a0;
      }
LAB_0044a8a4:
      fVar21 = (float)(iVar9 + iVar2);
      if (fVar17 <= fVar20) {
        if (((fVar21 <= fVar16) && (fVar16 < fVar20 + fVar21)) ||
           ((fVar21 < fVar16 + fVar17 && (fVar16 + fVar17 <= fVar20 + fVar21)))) goto LAB_0044a904;
      }
      else if (((fVar16 < fVar21) && (fVar21 < fVar16 + fVar17)) ||
              ((fVar16 < fVar20 + fVar21 && (fVar20 + fVar21 < fVar16 + fVar17)))) {
LAB_0044a904:
        if (iVar4 == 2) {
          return 3;
        }
      }
      fVar22 = (float)iVar12;
      fVar21 = (float)(iVar8 + iVar10);
      fVar20 = (float)iVar13;
      if (fVar19 <= fVar22) {
        if ((fVar18 < fVar21) || (fVar22 + fVar21 <= fVar18)) {
          iVar4 = 1;
          if ((fVar19 + fVar18 <= fVar21) || (fVar22 + fVar21 < fVar19 + fVar18)) goto LAB_0044ac10;
        }
LAB_0044ac0c:
        iVar4 = 2;
      }
      else {
        if ((fVar18 < fVar21) && (fVar21 < fVar19 + fVar18)) goto LAB_0044ac0c;
        iVar4 = 1;
        if ((fVar18 < fVar22 + fVar21) && (fVar22 + fVar21 < fVar19 + fVar18)) goto LAB_0044ac0c;
      }
LAB_0044ac10:
      fVar21 = (float)(iVar9 + iVar11);
      if (fVar17 <= fVar20) {
        if (((fVar21 <= fVar16) && (fVar16 < fVar20 + fVar21)) ||
           ((fVar21 < fVar16 + fVar17 && (fVar16 + fVar17 <= fVar20 + fVar21)))) goto LAB_0044ac70;
      }
      else if (((fVar16 < fVar21) && (fVar21 < fVar16 + fVar17)) ||
              ((fVar16 < fVar20 + fVar21 && (fVar20 + fVar21 < fVar16 + fVar17)))) {
LAB_0044ac70:
        if (iVar4 == 2) {
          return 2;
        }
      }
    }
    else {
      fVar22 = (float)iVar15;
      fVar21 = (float)(iVar8 - (iVar14 + iVar15));
      fVar20 = (float)iVar4;
      if (fVar19 <= fVar22) {
        if ((fVar18 < fVar21) || (fVar22 + fVar21 <= fVar18)) {
          iVar4 = 1;
          if ((fVar19 + fVar18 <= fVar21) || (fVar22 + fVar21 < fVar19 + fVar18)) goto LAB_0044a658;
        }
LAB_0044a654:
        iVar4 = 2;
      }
      else {
        if ((fVar18 < fVar21) && (fVar21 < fVar19 + fVar18)) goto LAB_0044a654;
        iVar4 = 1;
        if ((fVar18 < fVar22 + fVar21) && (fVar22 + fVar21 < fVar19 + fVar18)) goto LAB_0044a654;
      }
LAB_0044a658:
      fVar21 = (float)(iVar9 + iVar2);
      if (fVar17 <= fVar20) {
        if (((fVar21 <= fVar16) && (fVar16 < fVar20 + fVar21)) ||
           ((fVar21 < fVar16 + fVar17 && (fVar16 + fVar17 <= fVar20 + fVar21)))) goto LAB_0044a738;
      }
      else if (((fVar16 < fVar21) && (fVar21 < fVar16 + fVar17)) ||
              ((fVar16 < fVar20 + fVar21 && (fVar20 + fVar21 < fVar16 + fVar17)))) {
LAB_0044a738:
        if (iVar4 == 2) {
          return 3;
        }
      }
      fVar22 = (float)iVar12;
      fVar21 = (float)(iVar8 - (iVar10 + iVar12));
      fVar20 = (float)iVar13;
      if (fVar19 <= fVar22) {
        if ((fVar18 < fVar21) || (fVar22 + fVar21 <= fVar18)) {
          iVar4 = 1;
          if ((fVar19 + fVar18 <= fVar21) || (fVar22 + fVar21 < fVar19 + fVar18)) goto LAB_0044a9f8;
        }
LAB_0044a9f4:
        iVar4 = 2;
      }
      else {
        if ((fVar18 < fVar21) && (fVar21 < fVar19 + fVar18)) goto LAB_0044a9f4;
        iVar4 = 1;
        if ((fVar18 < fVar22 + fVar21) && (fVar22 + fVar21 < fVar19 + fVar18)) goto LAB_0044a9f4;
      }
LAB_0044a9f8:
      fVar21 = (float)(iVar9 + iVar11);
      if (fVar17 <= fVar20) {
        if (((fVar21 <= fVar16) && (fVar16 < fVar20 + fVar21)) ||
           ((fVar21 < fVar16 + fVar17 && (fVar16 + fVar17 <= fVar20 + fVar21)))) goto LAB_0044aac0;
      }
      else if (((fVar16 < fVar21) && (fVar21 < fVar16 + fVar17)) ||
              ((fVar16 < fVar20 + fVar21 && (fVar20 + fVar21 < fVar16 + fVar17)))) {
LAB_0044aac0:
        if (iVar4 == 2) {
          return 2;
        }
      }
      iVar3 = -(iVar3 + iVar6);
    }
    fVar17 = (float)(iVar8 + iVar3);
    if ((float)iVar6 < fVar19) {
      fVar19 = fVar19 + fVar18;
      if (fVar18 < fVar17) goto LAB_0044aa8c;
      goto LAB_0044aaf4;
    }
    fVar20 = (float)iVar6 + fVar17;
    if ((fVar18 < fVar17) || (fVar20 <= fVar18)) {
      fVar18 = fVar19 + fVar18;
      goto LAB_0044acb4;
    }
  }
  else {
    if (param_7 != 0) {
      return 0xffffffff;
    }
    fVar18 = (float)(param_8 + param_5);
    fVar16 = (float)(param_9 + param_6);
    fVar19 = (float)param_10;
    fVar17 = (float)param_11;
    if (*(int *)(self + lVar1 * 0x288 + 0x8dad8) == 0) {
      fVar22 = (float)iVar15;
      fVar21 = (float)(iVar8 + iVar14);
      fVar20 = (float)iVar4;
      if (fVar19 <= fVar22) {
        if ((fVar18 < fVar21) || (fVar22 + fVar21 <= fVar18)) {
          iVar4 = 1;
          if ((fVar18 + fVar19 <= fVar21) || (fVar22 + fVar21 < fVar18 + fVar19)) goto LAB_0044a7c0;
        }
LAB_0044a7bc:
        iVar4 = 2;
      }
      else {
        if ((fVar18 < fVar21) && (fVar21 < fVar18 + fVar19)) goto LAB_0044a7bc;
        iVar4 = 1;
        if ((fVar18 < fVar22 + fVar21) && (fVar22 + fVar21 < fVar18 + fVar19)) goto LAB_0044a7bc;
      }
LAB_0044a7c0:
      fVar21 = (float)(iVar9 + iVar2);
      if (fVar20 < fVar17) {
        if (((fVar16 < fVar21) && (fVar21 < fVar16 + fVar17)) ||
           ((fVar16 < fVar20 + fVar21 && (fVar20 + fVar21 < fVar16 + fVar17)))) goto LAB_0044a820;
      }
      else if (((fVar21 <= fVar16) && (fVar16 < fVar20 + fVar21)) ||
              ((fVar21 < fVar16 + fVar17 && (fVar16 + fVar17 <= fVar20 + fVar21)))) {
LAB_0044a820:
        if (iVar4 == 2) {
          return 3;
        }
      }
      fVar22 = (float)iVar12;
      fVar21 = (float)(iVar8 + iVar10);
      fVar20 = (float)iVar13;
      if (fVar19 <= fVar22) {
        if ((fVar18 < fVar21) || (fVar22 + fVar21 <= fVar18)) {
          iVar4 = 1;
          if ((fVar18 + fVar19 <= fVar21) || (fVar22 + fVar21 < fVar18 + fVar19)) goto LAB_0044ab40;
        }
LAB_0044ab3c:
        iVar4 = 2;
      }
      else {
        if ((fVar18 < fVar21) && (fVar21 < fVar18 + fVar19)) goto LAB_0044ab3c;
        iVar4 = 1;
        if ((fVar18 < fVar22 + fVar21) && (fVar22 + fVar21 < fVar18 + fVar19)) goto LAB_0044ab3c;
      }
LAB_0044ab40:
      fVar21 = (float)(iVar9 + iVar11);
      if (fVar17 <= fVar20) {
        if (((fVar21 <= fVar16) && (fVar16 < fVar20 + fVar21)) ||
           ((fVar21 < fVar16 + fVar17 && (fVar16 + fVar17 <= fVar20 + fVar21)))) goto LAB_0044aba0;
      }
      else if (((fVar16 < fVar21) && (fVar21 < fVar16 + fVar17)) ||
              ((fVar16 < fVar20 + fVar21 && (fVar20 + fVar21 < fVar16 + fVar17)))) {
LAB_0044aba0:
        if (iVar4 == 2) {
          return 2;
        }
      }
    }
    else {
      fVar22 = (float)iVar15;
      fVar21 = (float)(iVar8 - (iVar14 + iVar15));
      fVar20 = (float)iVar4;
      if (fVar19 <= fVar22) {
        if ((fVar18 < fVar21) || (fVar22 + fVar21 <= fVar18)) {
          iVar4 = 1;
          if ((fVar18 + fVar19 <= fVar21) || (fVar22 + fVar21 < fVar18 + fVar19)) goto LAB_0044a5f0;
        }
LAB_0044a5ec:
        iVar4 = 2;
      }
      else {
        if ((fVar18 < fVar21) && (fVar21 < fVar18 + fVar19)) goto LAB_0044a5ec;
        iVar4 = 1;
        if ((fVar18 < fVar22 + fVar21) && (fVar22 + fVar21 < fVar18 + fVar19)) goto LAB_0044a5ec;
      }
LAB_0044a5f0:
      fVar21 = (float)(iVar9 + iVar2);
      if (fVar17 <= fVar20) {
        if (((fVar21 <= fVar16) && (fVar16 < fVar20 + fVar21)) ||
           ((fVar21 < fVar16 + fVar17 && (fVar16 + fVar17 <= fVar20 + fVar21)))) goto LAB_0044a6b8;
      }
      else if (((fVar16 < fVar21) && (fVar21 < fVar16 + fVar17)) ||
              ((fVar16 < fVar20 + fVar21 && (fVar20 + fVar21 < fVar16 + fVar17)))) {
LAB_0044a6b8:
        if (iVar4 == 2) {
          return 3;
        }
      }
      fVar22 = (float)iVar12;
      fVar21 = (float)(iVar8 - (iVar10 + iVar12));
      fVar20 = (float)iVar13;
      if (fVar19 <= fVar22) {
        if ((fVar18 < fVar21) || (fVar22 + fVar21 <= fVar18)) {
          iVar4 = 1;
          if ((fVar18 + fVar19 <= fVar21) || (fVar22 + fVar21 < fVar18 + fVar19)) goto LAB_0044a990;
        }
LAB_0044a98c:
        iVar4 = 2;
      }
      else {
        if ((fVar18 < fVar21) && (fVar21 < fVar18 + fVar19)) goto LAB_0044a98c;
        iVar4 = 1;
        if ((fVar18 < fVar22 + fVar21) && (fVar22 + fVar21 < fVar18 + fVar19)) goto LAB_0044a98c;
      }
LAB_0044a990:
      fVar21 = (float)(iVar9 + iVar11);
      if (fVar17 <= fVar20) {
        if (((fVar21 <= fVar16) && (fVar16 < fVar20 + fVar21)) ||
           ((fVar21 < fVar16 + fVar17 && (fVar16 + fVar17 <= fVar20 + fVar21)))) goto LAB_0044aa58;
      }
      else if (((fVar16 < fVar21) && (fVar21 < fVar16 + fVar17)) ||
              ((fVar16 < fVar20 + fVar21 && (fVar20 + fVar21 < fVar16 + fVar17)))) {
LAB_0044aa58:
        if (iVar4 == 2) {
          return 2;
        }
      }
      iVar3 = -(iVar3 + iVar6);
    }
    fVar17 = (float)(iVar8 + iVar3);
    if ((float)iVar6 < fVar19) {
      fVar19 = fVar18 + fVar19;
      if (fVar18 < fVar17) {
LAB_0044aa8c:
        if (fVar17 < fVar19) goto LAB_0044acc8;
      }
LAB_0044aaf4:
      iVar3 = 1;
      if (((float)iVar6 + fVar17 <= fVar18) || (fVar19 <= (float)iVar6 + fVar17)) goto LAB_0044accc;
    }
    else {
      fVar20 = (float)iVar6 + fVar17;
      if ((fVar18 < fVar17) || (fVar20 <= fVar18)) {
        fVar18 = fVar18 + fVar19;
LAB_0044acb4:
        iVar3 = 1;
        if ((fVar18 <= fVar17) || (fVar20 < fVar18)) goto LAB_0044accc;
      }
    }
  }
LAB_0044acc8:
  iVar3 = 2;
LAB_0044accc:
  fVar17 = (float)param_11;
  fVar19 = (float)iVar7;
  fVar18 = (float)(iVar9 + iVar5);
  if (fVar17 <= fVar19) {
    if ((fVar16 < fVar18) || (fVar19 + fVar18 <= fVar16)) {
      if (fVar16 + fVar17 <= fVar18) {
        return 0xffffffff;
      }
      if (fVar19 + fVar18 < fVar16 + fVar17) {
        return 0xffffffff;
      }
    }
  }
  else if ((fVar18 <= fVar16) || (fVar16 + fVar17 <= fVar18)) {
    if (fVar19 + fVar18 <= fVar16) {
      return 0xffffffff;
    }
    if (fVar16 + fVar17 <= fVar19 + fVar18) {
      return 0xffffffff;
    }
  }
  if (iVar3 != 2) {
    return 0xffffffff;
  }
  return 1;
}

