/* bzStateGame::Scroll_0041a3f0 @ 0x0041a3f0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__Scroll_0041a3f0(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;

  int iVar1;
  int iVar2;
  gh_long lVar3;
  int *piVar4;
  
  if ((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
     ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) {
    return 0;
  }
  if (*(int *)(self + 0xba8) == 1) {
    return 0;
  }
  if (param_3 < 1) {
    if (-1 < param_3) goto LAB_0041a7b0;
    if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8) < *(int *)(self + 0x1160) + -0x1e) {
      iVar2 = *(int *)(self + 0x32ba20);
      iVar1 = 0;
      if (*(int *)(self + 0x32ba14) != 0) {
        iVar1 = (iVar2 + -0x80) / *(int *)(self + 0x32ba14);
      }
      if (*(int *)(self + (gh_long)iVar1 * 0x2d0 + 0x140598) != 0x1b6) {
        *(int *)(self + 0x32ba20) = iVar2 + param_3;
        iVar2 = *(int *)(self + 0x32b824);
        if (0 < iVar2) {
          lVar3 = 0;
          piVar4 = (int *)(self + 0x8dac8);
          do {
            if (0 < piVar4[9]) {
              *piVar4 = *piVar4 - param_3;
            }
            lVar3 = lVar3 + 1;
            piVar4 = piVar4 + 0xa2;
          } while (lVar3 < iVar2);
        }
        iVar2 = *(int *)(self + 0x32b828);
        if (0 < iVar2) {
          lVar3 = 0;
          piVar4 = (int *)(self + 0xb0cb8);
          do {
            if (0 < piVar4[5]) {
              *piVar4 = *piVar4 - param_3;
            }
            lVar3 = lVar3 + 1;
            piVar4 = piVar4 + 0x14;
          } while (lVar3 < iVar2);
        }
        goto LAB_0041a79c;
      }
    }
    if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8) <= *(int *)(self + 0x1160) + 0x1e)
    goto LAB_0041a7b0;
    iVar2 = *(int *)(self + 0x32ba20);
    iVar1 = 0;
    if (*(int *)(self + 0x32ba14) != 0) {
      iVar1 = (*(int *)(self + 0x1158) + iVar2) / *(int *)(self + 0x32ba14);
    }
    if (*(int *)(self + (gh_long)iVar1 * 0x2d0 + 0x140598) == 0x25) goto LAB_0041a7b0;
    *(int *)(self + 0x32ba20) = iVar2 - param_3;
    iVar2 = *(int *)(self + 0x32b824);
    if (0 < iVar2) {
      lVar3 = 0;
      piVar4 = (int *)(self + 0x8dac8);
      do {
        if (0 < piVar4[9]) {
          *piVar4 = *piVar4 + param_3;
        }
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 0xa2;
      } while (lVar3 < iVar2);
    }
    iVar2 = *(int *)(self + 0x32b828);
    if (0 < iVar2) {
      lVar3 = 0;
      piVar4 = (int *)(self + 0xb0cb8);
      do {
        if (0 < piVar4[5]) {
          *piVar4 = *piVar4 + param_3;
        }
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 0x14;
      } while (lVar3 < iVar2);
    }
LAB_0041a588:
    iVar2 = *(int *)(self + 0x32c92c) + -6;
  }
  else {
    if (*(int *)(self + 0x1160) + -0x1e <= *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8)) {
LAB_0041a498:
      if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8) <= *(int *)(self + 0x1160) + 0x1e)
      goto LAB_0041a7b0;
      iVar2 = *(int *)(self + 0x32ba20);
      iVar1 = 0;
      if (*(int *)(self + 0x32ba14) != 0) {
        iVar1 = (*(int *)(self + 0x1158) + iVar2) / *(int *)(self + 0x32ba14);
      }
      if (*(int *)(self + (gh_long)iVar1 * 0x2d0 + 0x140598) == 0x1b5) goto LAB_0041a7b0;
      *(int *)(self + 0x32ba20) = iVar2 + param_3;
      iVar2 = *(int *)(self + 0x32b824);
      if (0 < iVar2) {
        lVar3 = 0;
        piVar4 = (int *)(self + 0x8dac8);
        do {
          if (0 < piVar4[9]) {
            *piVar4 = *piVar4 - param_3;
          }
          lVar3 = lVar3 + 1;
          piVar4 = piVar4 + 0xa2;
        } while (lVar3 < iVar2);
      }
      iVar2 = *(int *)(self + 0x32b828);
      if (0 < iVar2) {
        lVar3 = 0;
        piVar4 = (int *)(self + 0xb0cb8);
        do {
          if (0 < piVar4[5]) {
            *piVar4 = *piVar4 - param_3;
          }
          lVar3 = lVar3 + 1;
          piVar4 = piVar4 + 0x14;
        } while (lVar3 < iVar2);
      }
      goto LAB_0041a588;
    }
    iVar2 = *(int *)(self + 0x32ba20);
    iVar1 = 0;
    if (*(int *)(self + 0x32ba14) != 0) {
      iVar1 = (iVar2 + -0x80) / *(int *)(self + 0x32ba14);
    }
    if (*(int *)(self + (gh_long)iVar1 * 0x2d0 + 0x140598) == 0x1b6) goto LAB_0041a498;
    *(int *)(self + 0x32ba20) = iVar2 - param_3;
    iVar2 = *(int *)(self + 0x32b824);
    if (0 < iVar2) {
      lVar3 = 0;
      piVar4 = (int *)(self + 0x8dac8);
      do {
        if (0 < piVar4[9]) {
          *piVar4 = *piVar4 + param_3;
        }
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 0xa2;
      } while (lVar3 < iVar2);
    }
    iVar2 = *(int *)(self + 0x32b828);
    if (0 < iVar2) {
      lVar3 = 0;
      piVar4 = (int *)(self + 0xb0cb8);
      do {
        if (0 < piVar4[5]) {
          *piVar4 = *piVar4 + param_3;
        }
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 0x14;
      } while (lVar3 < iVar2);
    }
LAB_0041a79c:
    iVar2 = *(int *)(self + 0x32c92c) + 6;
  }
  *(int *)(self + 0x32c92c) = iVar2;
LAB_0041a7b0:
  iVar2 = 6;
  if (param_4 != 0) {
    iVar2 = param_4;
  }
  if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc) < *(int *)(self + 0x1164)) {
    *(int *)(self + 0x32ba24) = *(int *)(self + 0x32ba24) - iVar2;
    iVar1 = *(int *)(self + 0x32b824);
    if (0 < iVar1) {
      lVar3 = 0;
      piVar4 = (int *)(self + 0x8dae8);
      do {
        if (0 < piVar4[1]) {
          piVar4[-7] = piVar4[-7] + iVar2;
          *piVar4 = *piVar4 + iVar2;
        }
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 0xa2;
      } while (lVar3 < iVar1);
    }
    iVar1 = *(int *)(self + 0x32b828);
    if (0 < iVar1) {
      lVar3 = 0;
      piVar4 = (int *)(self + 0xb0cbc);
      do {
        if (0 < piVar4[4]) {
          *piVar4 = *piVar4 + iVar2;
        }
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 0x14;
      } while (lVar3 < iVar1);
    }
  }
  else if (*(int *)(self + 0x1164) + 100 < *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc)) {
    *(int *)(self + 0x32ba24) = *(int *)(self + 0x32ba24) + iVar2;
    iVar1 = *(int *)(self + 0x32b824);
    if (0 < iVar1) {
      lVar3 = 0;
      piVar4 = (int *)(self + 0x8dae8);
      do {
        if (0 < piVar4[1]) {
          piVar4[-7] = piVar4[-7] - iVar2;
          *piVar4 = *piVar4 + iVar2;
        }
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 0xa2;
      } while (lVar3 < iVar1);
    }
    iVar1 = *(int *)(self + 0x32b828);
    if (0 < iVar1) {
      lVar3 = 0;
      piVar4 = (int *)(self + 0xb0cbc);
      do {
        if (0 < piVar4[4]) {
          *piVar4 = *piVar4 - iVar2;
        }
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 0x14;
      } while (lVar3 < iVar1);
    }
  }
  return 0;
  return 0;
}
