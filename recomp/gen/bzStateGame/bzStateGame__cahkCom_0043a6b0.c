/* bzStateGame::cahkCom_0043a6b0 @ 0x0043a6b0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
ulong bzStateGame__cahkCom_0043a6b0(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  gh_long lVar8;
  int *piVar9;
  
  iVar3 = *(int *)(self + 0x32c134);
  uVar5 = (ulong)iVar3;
  lVar8 = (gh_long)param_2;
  piVar1 = (int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8);
  if (param_2 < iVar3) {
    iVar4 = *(int *)(self + 0x32b824);
    if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8dad8) == 0) {
      if (iVar4 <= iVar3) {
        return 0xffffffff;
      }
      piVar9 = (int *)(self + uVar5 * 0x288 + 0x8dac8);
      do {
        if ((1 < piVar9[9]) && (piVar9[6] < 0x5a)) {
          iVar3 = *piVar1;
          iVar2 = *piVar9;
          if ((iVar3 < iVar2) && ((iVar3 - param_3 < iVar2 && (iVar2 < iVar3 + param_3)))) {
            if ((*(int *)(self + lVar8 * 0x288 + 0x8dacc) - param_4 < piVar9[1]) &&
               (piVar9[1] < *(int *)(self + lVar8 * 0x288 + 0x8dacc) + param_4)) {
              return uVar5;
            }
          }
        }
        uVar5 = uVar5 + 1;
        piVar9 = piVar9 + 0xa2;
        if ((gh_long)iVar4 <= (gh_long)uVar5) {
          return 0xffffffff;
        }
      } while( true );
    }
    if (iVar4 <= iVar3) {
      return 0xffffffff;
    }
    piVar9 = (int *)(self + uVar5 * 0x288 + 0x8dac8);
    do {
      if ((1 < piVar9[9]) && (piVar9[6] < 0x5a)) {
        iVar3 = *piVar1;
        iVar2 = *piVar9;
        if ((iVar2 < iVar3) && ((iVar3 - param_3 < iVar2 && (iVar2 < iVar3 + param_3)))) {
          if ((*(int *)(self + lVar8 * 0x288 + 0x8dacc) - param_4 < piVar9[1]) &&
             (piVar9[1] < *(int *)(self + lVar8 * 0x288 + 0x8dacc) + param_4)) {
            return uVar5;
          }
        }
      }
      uVar5 = uVar5 + 1;
      piVar9 = piVar9 + 0xa2;
      if ((gh_long)iVar4 <= (gh_long)uVar5) {
        return 0xffffffff;
      }
    } while( true );
  }
  if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8dad8) != 0) {
    if (iVar3 < 1) {
      return 0xffffffff;
    }
    piVar6 = (int *)(self + 0x8dac8);
    uVar7 = 0;
    piVar9 = piVar6 + lVar8 * 0xa2 + 1;
    do {
      if ((1 < piVar6[9]) && (piVar6[6] < 0x5a)) {
        iVar3 = *piVar1;
        iVar4 = *piVar6;
        if ((iVar4 < iVar3) && ((iVar3 - param_3 < iVar4 && (iVar4 < iVar3 + param_3)))) {
          if ((*piVar9 - param_4 < piVar6[1]) && (piVar6[1] < *piVar9 + param_4)) {
LAB_0043a99c:
            return uVar7 & 0xffffffff;
          }
        }
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 0xa2;
      if ((gh_long)uVar5 <= (gh_long)uVar7) {
        return 0xffffffff;
      }
    } while( true );
  }
  if (iVar3 < 1) {
    return 0xffffffff;
  }
  piVar6 = (int *)(self + 0x8dac8);
  uVar7 = 0;
  piVar9 = piVar6 + lVar8 * 0xa2 + 1;
  do {
    if ((1 < piVar6[9]) && (piVar6[6] < 0x5a)) {
      iVar3 = *piVar1;
      iVar4 = *piVar6;
      if ((iVar3 < iVar4) && ((iVar3 - param_3 < iVar4 && (iVar4 < iVar3 + param_3)))) {
        if ((*piVar9 - param_4 < piVar6[1]) && (piVar6[1] < *piVar9 + param_4)) goto LAB_0043a99c;
      }
    }
    uVar7 = uVar7 + 1;
    piVar6 = piVar6 + 0xa2;
    if ((gh_long)uVar5 <= (gh_long)uVar7) {
      return 0xffffffff;
    }
  } while( true );
}

