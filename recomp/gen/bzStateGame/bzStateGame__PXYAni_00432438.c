/* bzStateGame::PXYAni_00432438 @ 0x00432438 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__PXYAni_00432438(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;

  gh_long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  gh_long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  int iVar8;
  gh_long lVar9;
  
  lVar9 = (gh_long)param_2;
  lVar5 = (gh_long)param_3 * 0x128 + 0x1b38;
  uVar7 = 0;
  iVar8 = 0;
  uVar6 = 0;
  do {
    switch(uVar6) {
    case 0:
      if (*(int *)(self + uVar7 * 4 + lVar5) == -0x4d) {
        iVar8 = 0;
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
        *(int *)(self + (gh_long)iVar8 * 4 + lVar9 * 0x288 + 0x8dc90) =
             *(int *)(self + uVar7 * 4 + lVar5);
        iVar8 = iVar8 + 1;
      }
      break;
    case 1:
      iVar2 = *(int *)(self + uVar7 * 4 + lVar5);
      if (iVar2 < 0) {
        lVar1 = (gh_long)iVar8 * 4 + lVar9 * 0x288;
        *(int *)(self + lVar1 + 0x8db2c) = iVar2;
        *(int *)(self + lVar1 + 0x8db28) = iVar2;
        uVar6 = 2;
        iVar8 = 0;
      }
      else {
        lVar1 = (gh_long)iVar8;
        iVar8 = iVar8 + 1;
        *(int *)(self + lVar1 * 4 + lVar9 * 0x288 + 0x8db28) = iVar2;
        uVar6 = 1;
      }
      break;
    case 2:
      iVar2 = *(int *)(self + uVar7 * 4 + lVar5);
      if (iVar2 < -0x46) {
        if (iVar2 == -0x4d) {
          iVar8 = 0;
          goto LAB_00432534;
        }
        memset(self + lVar9 * 0x288 + 0x8dc18,0,0x78);
        goto LAB_0043258c;
      }
      lVar1 = (gh_long)iVar8;
      iVar8 = iVar8 + 1;
      *(int *)(self + lVar1 * 4 + lVar9 * 0x288 + 0x8dba0) = iVar2;
      uVar6 = 2;
      break;
    case 3:
      if (*(int *)(self + uVar7 * 4 + lVar5) == -0x58) goto LAB_0043258c;
      lVar1 = (gh_long)iVar8;
      iVar8 = iVar8 + 1;
      *(int *)(self + lVar1 * 4 + lVar9 * 0x288 + 0x8dc18) = *(int *)(self + uVar7 * 4 + lVar5);
LAB_00432534:
      uVar6 = 3;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x57);
LAB_0043258c:
  iVar2 = *(int *)(self + 0x32ba14);
  iVar8 = *(int *)(self + 0x32ba20) + *(int *)(self + lVar9 * 0x288 + 0x8dac8);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar8 / iVar2;
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = (*(int *)(self + 0x32ba24) + *(int *)(self + lVar9 * 0x288 + 0x8dacc)) / iVar2;
  }
  if ((*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598) < 1) ||
     (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598)
                                  * 0x12 | 1) * 4 + 0x11c378) < 0x32)) {
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (iVar8 + -0x14) / iVar2;
    }
    if ((*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598) < 1) ||
       (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598
                                            ) * 0x12 | 1) * 4 + 0x11c378) < 0x32)) {
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = (iVar8 + 0x14) / iVar2;
      }
      if ((*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      goto LAB_004326d0;
    }
  }
  *(int *)(self + lVar9 * 0x288 + 0x8dae8) = *(int *)(self + lVar9 * 0x288 + 0x8dacc);
LAB_004326d0:
  iVar8 = *(int *)(self + (gh_long)param_3 * 0x128 + 0x1b34);
  *(int *)(self + lVar9 * 0x288 + 0x8dae0) = iVar8;
  if (iVar8 == 0x34) {
    *(undefined4 *)(self + 0x32c138) = 0;
  }
  *(int *)(self + lVar9 * 0x288 + 0x8dad8) = param_4;
  *(undefined4 *)(self + lVar9 * 0x288 + 0x8dd08) = 0;
  *(undefined4 *)(self + lVar9 * 0x288 + 0x8daf0) = *(undefined4 *)(self + lVar9 * 0x288 + 0x8db28);
  return 0;
  return 0;
}
