/* bzStateGame::MoveProKey_0043a9a4 @ 0x0043a9a4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
undefined8 bzStateGame__MoveProKey_0043a9a4(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;

  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_w4 = 0;
  int iVar10;
  gh_long lVar11;
  int iVar12;
  
  piVar1 = (int *)(self + 0x8db14);
  iVar7 = 0x17;
  switch(*piVar1) {
  case 0:
  case 0x13:
switchD_0043a9e4_caseD_0:
    iVar7 = 0;
    break;
  default:
    if (*piVar1 - 0xdU < 5) goto switchD_0043a9e4_caseD_0;
    iVar7 = 1;
    break;
  case 0x16:
    iVar7 = 0x16;
    break;
  case 0x17:
    break;
  }
  iVar9 = *(int *)(self + 0x8dae0);
  if (iVar9 == 3) {
    piVar2 = (int *)(self + 0x8dad8);
    puVar3 = (undefined8 *)(self + 0x8dac8);
    if (*piVar2 == 1) {
      if (0xb2 < param_3 - 0xbfU) {
        return 0;
      }
      if (0x9e < param_4 - 0x1e1U) {
        return 0;
      }
      *puVar3 = CONCAT44((int)((ulong)*puVar3 >> 0x20) + 0x5a,(int)*puVar3 + 10);
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(in_w4));
      if (*piVar1 != 0) {
        return 0;
      }
      *piVar2 = 0;
      *(undefined4 *)(self + 0x32c84c) = 0;
      return 0;
    }
    if (*piVar2 != 0) {
      return 0;
    }
    if (0x9e < param_3 - 0xbU) {
      return 0;
    }
    if (0x9e < param_4 - 0x1e1U) {
      return 0;
    }
    *puVar3 = CONCAT44((int)((ulong)*puVar3 >> 0x20) + 0x5a,(int)*puVar3 + -10);
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0), GH_ARG(1), GH_ARG(in_w4));
    if (*piVar1 != 0) {
      return 0;
    }
    *piVar2 = 1;
    *(undefined4 *)(self + 0x32c84c) = 1;
    return 0;
  }
  if (iVar7 == 0) {
    iVar12 = 2;
    iVar8 = 1;
    if (iVar9 < 0x46) {
      iVar10 = 1;
      iVar12 = 2;
      iVar8 = 1;
    }
    else {
      iVar10 = 1;
      if (8 < *(int *)(self + (gh_long)*(int *)(self + 0x8dd08) * 4 + 0x8dc90)) {
        return 0;
      }
    }
  }
  else {
    if (iVar7 == 0x17) {
      if ((0x45 < iVar9) && (8 < *(int *)(self + (gh_long)*(int *)(self + 0x8dd08) * 4 + 0x8dc90))) {
        return 0;
      }
      if ((iVar9 == 0x41) || (iVar9 == 0x1e)) {
        if ((param_3 - 0xbU < 0x9f) && (param_4 - 0x1e1U < 0x9f)) {
          *(undefined4 *)(self + 0x32b82c) = 0;
          *(undefined4 *)(self + 0x8dad8) = 1;
          *(undefined4 *)(self + 0x32c84c) = 1;
          return 0;
        }
        if (0xb2 < param_3 - 0xbfU) {
          return 0;
        }
        if (0x9e < param_4 - 0x1e1U) {
          return 0;
        }
        uVar5 = 0x32b82c;
        uVar4 = 0x8dad8;
        goto LAB_0043ae58;
      }
      if (*(int *)(self + 0x8dd24) != 0) {
        return 0;
      }
      piVar1 = (int *)(self + 0x8dad8);
      if (*piVar1 != 1) {
        if (*piVar1 != 0) {
          return 0;
        }
        if (0x9e < param_3 - 0xbU) {
          return 0;
        }
        if (0x9e < param_4 - 0x1e1U) {
          return 0;
        }
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0xa9), GH_ARG(1), GH_ARG(in_w4));
        *piVar1 = 1;
        *(undefined4 *)(self + 0x32b82c) = 0;
        *(undefined4 *)(self + 0x32c84c) = 1;
        return 0;
      }
      if (0xb2 < param_3 - 0xbfU) {
        return 0;
      }
      if (0x9e < param_4 - 0x1e1U) {
        return 0;
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0xa9), GH_ARG(0), GH_ARG(in_w4));
      *piVar1 = 0;
      lVar11 = 0x32b82c;
      goto LAB_0043ad3c;
    }
    if (iVar7 == 0x16) {
      if ((param_3 - 0xbU < 0x9f) && (param_4 - 0x1e1U < 0x9f)) {
        if (*(int *)(self + 0x32c8a0) == 1) {
          *(undefined4 *)(self + 0x8dad8) = 1;
          goto LAB_0043af1c;
        }
        if (*(int *)(self + 0x32c864) == 1) {
          iVar7 = 0x6b;
        }
        else {
          iVar7 = 0x67;
        }
        iVar9 = 1;
      }
      else {
        if ((0xb2 < param_3 - 0xbfU) || (0x9e < param_4 - 0x1e1U)) goto LAB_0043af1c;
        if (*(int *)(self + 0x32c8a0) == 1) {
          *(undefined4 *)(self + 0x8dad8) = 0;
          goto LAB_0043af1c;
        }
        if (*(int *)(self + 0x32c864) == 1) {
          iVar7 = 0x6b;
        }
        else {
          iVar7 = 0x67;
        }
        iVar9 = 0;
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar7), GH_ARG(iVar9), GH_ARG(in_w4));
LAB_0043af1c:
      *(undefined4 *)(self + 0x32c8a0) = 1;
      return 0;
    }
    iVar10 = 6;
    iVar12 = 5;
    iVar8 = 4;
  }
  if ((iVar9 == 0x41) || (iVar9 == 0x1e)) {
    if ((param_3 - 0xbU < 0x9f) && (param_4 - 0x1e1U < 0x9f)) {
      *(undefined4 *)(self + 0x32b82c) = 0;
      if (iVar7 != 0) {
        return 0;
      }
      *(undefined4 *)(self + 0x8dad8) = 1;
      *(undefined4 *)(self + 0x32c84c) = 1;
      return 0;
    }
    if (0xb2 < param_3 - 0xbfU) {
      return 0;
    }
    if (0x9e < param_4 - 0x1e1U) {
      return 0;
    }
    *(undefined4 *)(self + 0x32b82c) = 0;
    if (iVar7 != 0) {
      return 0;
    }
    lVar11 = 0x8dad8;
LAB_0043ad3c:
    *(undefined4 *)(self + lVar11) = 0;
    *(undefined4 *)(self + 0x32c84c) = 0;
    return 0;
  }
  if ((0x28 < iVar9) && (iVar9 != 0x30)) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      return 0;
    }
    if (*(int *)(self + 0x8dd24) != 0) {
      if ((param_3 - 0xbU < 0x9f) && (param_4 - 0x1e1U < 0x9f)) {
        piVar1 = (int *)(self + 0x32c848);
        if (*(int *)(self + 0x8dad8) != 1) {
          if (*piVar1 == 2) {
            return 0;
          }
          bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar10), GH_ARG(0), GH_ARG(in_w4));
          *piVar1 = 2;
          return 0;
        }
        if (*piVar1 == 1) {
          return 0;
        }
        if (*(int *)(self + 0x32c844) != 0) {
          iVar8 = iVar12;
        }
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar8), GH_ARG(1), GH_ARG(in_w4));
        *piVar1 = 1;
        return 0;
      }
      if (0xb2 < param_3 - 0xbfU) {
        return 0;
      }
      if (0x9e < param_4 - 0x1e1U) {
        return 0;
      }
      piVar1 = (int *)(self + 0x32c848);
      if (*(int *)(self + 0x8dad8) == 0) {
        if (*piVar1 == 3) {
          return 0;
        }
        if (*(int *)(self + 0x32c844) != 0) {
          iVar8 = iVar12;
        }
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar8), GH_ARG(0), GH_ARG(in_w4));
        *piVar1 = 3;
        return 0;
      }
      if (*piVar1 == 4) {
        return 0;
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar10), GH_ARG(1), GH_ARG(in_w4));
      *piVar1 = 4;
      return 0;
    }
    piVar1 = (int *)(self + 0x8dad8);
    if (*piVar1 != 1) {
      if (*piVar1 != 0) {
        return 0;
      }
      if (0x9e < param_3 - 0xbU) {
        return 0;
      }
      if (0x9e < param_4 - 0x1e1U) {
        return 0;
      }
      iVar9 = 2;
      iVar7 = bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(2));
      if (iVar7 != 0) {
        return 0;
      }
      if (*(int *)(self + 0x32c844) != 0) {
        iVar8 = iVar12;
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar8), GH_ARG(1), GH_ARG(iVar9));
      *piVar1 = 1;
      *(undefined4 *)(self + 0x32b82c) = 0;
      *(undefined4 *)(self + 0x32c84c) = 1;
      return 0;
    }
    if (0xb2 < param_3 - 0xbfU) {
      return 0;
    }
    if (0x9e < param_4 - 0x1e1U) {
      return 0;
    }
    iVar9 = 2;
    iVar7 = bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(1), GH_ARG(0), GH_ARG(0), GH_ARG(2));
    if (iVar7 != 0) {
      return 0;
    }
    if (*(int *)(self + 0x32c844) != 0) {
      iVar8 = iVar12;
    }
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar8), GH_ARG(0), GH_ARG(iVar9));
    *piVar1 = 0;
    lVar11 = 0x32b82c;
    goto LAB_0043ad3c;
  }
  bVar6 = 0x9e < param_3 - 0xbU;
  uVar5 = param_4 - 0x1e1;
  if (*(int *)(self + 0x8dd24) == 0) {
    if (!bVar6 && 0x9e >= uVar5) {
      iVar9 = 2;
      iVar7 = bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(2));
      if (iVar7 != 0) {
        return 0;
      }
      if (*(int *)(self + 0x32c844) != 0) {
        iVar8 = iVar12;
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar8), GH_ARG(1), GH_ARG(iVar9));
      *(undefined4 *)(self + 0x8dad8) = 1;
      *(undefined4 *)(self + 0x32b82c) = 0;
      *(undefined4 *)(self + 0x32c84c) = 1;
      return 0;
    }
    if (0xb2 < param_3 - 0xbfU) {
      return 0;
    }
    if (0x9e < uVar5) {
      return 0;
    }
    iVar9 = 2;
    iVar7 = bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(1), GH_ARG(0), GH_ARG(0), GH_ARG(2));
    if (iVar7 != 0) {
      return 0;
    }
    if (*(int *)(self + 0x32c844) != 0) {
      iVar8 = iVar12;
    }
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar8), GH_ARG(0), GH_ARG(iVar9));
    uVar5 = 0x8dad8;
    uVar4 = 0x32b82c;
LAB_0043ae58:
    *(undefined4 *)(self + uVar5) = 0;
    *(undefined4 *)(self + uVar4) = 0;
    *(undefined4 *)(self + 0x32c84c) = 0;
    return 0;
  }
  if (bVar6 || 0x9e < uVar5) {
    if (0xb2 < param_3 - 0xbfU) {
      return 0;
    }
    if (0x9e < uVar5) {
      return 0;
    }
    if (*(int *)(self + 0x8dad8) != 0) {
      iVar7 = 1;
      goto LAB_0043b1b0;
    }
    iVar10 = iVar8;
    if (*(int *)(self + 0x32c844) != 0) {
      iVar10 = iVar12;
    }
  }
  else if (*(int *)(self + 0x8dad8) == 1) {
    if (*(int *)(self + 0x32c844) == 0) {
      iVar7 = 1;
      iVar10 = iVar8;
    }
    else {
      iVar7 = 1;
      iVar10 = iVar12;
    }
    goto LAB_0043b1b0;
  }
  iVar7 = 0;
LAB_0043b1b0:
  bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar10), GH_ARG(iVar7), GH_ARG(in_w4));
  return 0;
}

