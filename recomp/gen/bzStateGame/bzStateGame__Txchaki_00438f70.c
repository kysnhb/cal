/* bzStateGame::Txchaki_00438f70 @ 0x00438f70 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__Txchaki_00438f70(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8)
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

  uint uVar1;
  int iVar2;
  int in_w8 = 0;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  
  if (param_5 < 1) {
    if (param_5 < 0) {
      if (param_9 == 0) {
        if (0 < param_4) {
          iVar6 = *(int *)(self + 0x32ba14);
          iVar8 = *(int *)(self + 0x32ba20) + param_7;
          iVar4 = 0;
          if (iVar6 != 0) {
            iVar4 = (param_8 + *(int *)(self + 0x32ba24) + -1) / iVar6;
          }
          iVar3 = 0;
          do {
            iVar5 = 0;
            if (iVar6 != 0) {
              iVar5 = iVar8 / iVar6;
            }
            if ((0 < *(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar5 * 0x2d0 + 0x140598)) &&
               (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 +
                                                                      (gh_long)iVar5 * 0x2d0 + 0x140598
                                                              ) * 0x12 | 1) * 4 + 0x11c378))) {
              return iVar3 - param_4;
            }
            iVar3 = iVar3 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar3 < param_4);
        }
        iVar8 = *(int *)(self + 0x32ba14);
        iVar6 = 0;
        if (iVar8 != 0) {
          iVar6 = (param_8 + *(int *)(self + 0x32ba24) + -1) / iVar8;
        }
        iVar4 = (*(int *)(self + 0x32ba20) + param_7) - param_4;
        iVar3 = -1;
        while( true ) {
          in_w8 = iVar3;
          iVar3 = 0;
          if (iVar8 != 0) {
            iVar3 = iVar4 / iVar8;
          }
          if ((0 < *(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598)) &&
             (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 +
                                                                    (gh_long)iVar3 * 0x2d0 + 0x140598)
                                                    * 0x12 | 1) * 4 + 0x11c378))) break;
          iVar4 = iVar4 + -1;
          iVar3 = in_w8 + 1;
          if (-param_5 <= in_w8 + 2) {
            return in_w8 + 2;
          }
        }
      }
      else {
        if (param_9 != 1) {
          return param_5;
        }
        if (0 < param_4) {
          iVar8 = *(int *)(self + 0x32ba14);
          iVar6 = 0;
          if (iVar8 != 0) {
            iVar6 = (param_8 + *(int *)(self + 0x32ba24) + -1) / iVar8;
          }
          iVar4 = 0;
          do {
            iVar3 = 0;
            if (iVar8 != 0) {
              iVar3 = (*(int *)(self + 0x32ba20) + param_7 + iVar4) / iVar8;
            }
            if ((0 < *(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598)) &&
               (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 +
                                                                      (gh_long)iVar3 * 0x2d0 + 0x140598
                                                              ) * 0x12 | 1) * 4 + 0x11c378))) {
              return iVar4 - param_4;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_4);
        }
        iVar8 = *(int *)(self + 0x32ba14);
        iVar6 = 0;
        if (iVar8 != 0) {
          iVar6 = (param_8 + *(int *)(self + 0x32ba24) + -1) / iVar8;
        }
        in_w8 = 0;
        do {
          iVar4 = 0;
          if (iVar8 != 0) {
            iVar4 = (*(int *)(self + 0x32ba20) + param_7 + param_4 + in_w8) / iVar8;
          }
          if ((0 < *(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar4 * 0x2d0 + 0x140598)) &&
             (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 +
                                                                    (gh_long)iVar4 * 0x2d0 + 0x140598)
                                                    * 0x12 | 1) * 4 + 0x11c378))) {
            return in_w8 + -1;
          }
          in_w8 = in_w8 + 1;
        } while (in_w8 < -param_5);
      }
    }
    else {
      if (param_9 != 2) {
        return 0;
      }
      iVar4 = *(int *)(self + 0x32ba14);
      iVar8 = *(int *)(self + 0x32ba20) + param_7;
      iVar6 = *(int *)(self + 0x32ba24) + param_8;
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = iVar8 / iVar4;
      }
      uVar7 = 0;
      if (iVar4 != 0) {
        uVar7 = iVar6 / iVar4;
      }
      uVar9 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = (iVar8 + -0x14) / iVar4;
      }
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = (iVar8 + 0x14) / iVar4;
      }
      if ((((0 < *(int *)(self + uVar9 + (gh_long)iVar3 * 0x2d0 + 0x140598)) &&
           (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + uVar9 + (gh_long)iVar3 * 0x2d0 +
                                                                          0x140598) * 0x12 | 1) * 4
                                      + 0x11c378))) ||
          ((0 < *(int *)(self + uVar9 + (gh_long)iVar5 * 0x2d0 + 0x140598) &&
           (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + uVar9 + (gh_long)iVar5 * 0x2d0 +
                                                                          0x140598) * 0x12 | 1) * 4
                                      + 0x11c378))))) ||
         ((0 < *(int *)(self + uVar9 + (gh_long)iVar2 * 0x2d0 + 0x140598) &&
          (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + uVar9 + (gh_long)iVar2 * 0x2d0 +
                                                                         0x140598) * 0x12 | 1) * 4 +
                                     0x11c378))))) {
        uVar7 = 0xffffffff;
        while( true ) {
          uVar1 = 0;
          if (iVar4 != 0) {
            uVar1 = iVar6 / iVar4;
          }
          uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
          if (((*(int *)(self + (ulong)((*(uint *)(self + uVar9 + (gh_long)iVar3 * 0x2d0 + 0x140598) &
                                        ((int)*(uint *)(self + uVar9 + (gh_long)iVar3 * 0x2d0 +
                                                                       0x140598) >> 0x1f ^
                                        0xffffffffU)) * 0x12 | 1) * 4 + 0x11c378) < param_3) &&
              (*(int *)(self + (ulong)((*(uint *)(self + uVar9 + (gh_long)iVar5 * 0x2d0 + 0x140598) &
                                       ((int)*(uint *)(self + uVar9 + (gh_long)iVar5 * 0x2d0 + 0x140598
                                                      ) >> 0x1f ^ 0xffffffffU)) * 0x12 | 1) * 4 +
                               0x11c378) < param_3)) &&
             (*(int *)(self + (ulong)((*(uint *)(self + uVar9 + (gh_long)iVar2 * 0x2d0 + 0x140598) &
                                      ((int)*(uint *)(self + uVar9 + (gh_long)iVar2 * 0x2d0 + 0x140598)
                                       >> 0x1f ^ 0xffffffffU)) * 0x12 | 1) * 4 + 0x11c378) < param_3
             )) break;
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + -1;
          if (0x3e6 < uVar7) {
            return 0;
          }
        }
        return *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc) - uVar7;
      }
      in_w8 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc);
    }
  }
  else if (param_9 == 2) {
    iVar8 = *(int *)(self + 0x32ba14);
    iVar6 = 0;
    if (iVar8 != 0) {
      iVar6 = (*(int *)(self + 0x32ba20) + param_7) / iVar8;
    }
    iVar4 = 0;
    do {
      iVar3 = 0;
      if (iVar8 != 0) {
        iVar3 = (*(int *)(self + 0x32ba24) + param_8 + iVar4) / iVar8;
      }
      if ((0 < *(int *)(self + (gh_long)iVar3 * 4 + (gh_long)iVar6 * 0x2d0 + 0x140598)) &&
         (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar3 * 4 +
                                                                (gh_long)iVar6 * 0x2d0 + 0x140598) *
                                                0x12 | 1) * 4 + 0x11c378))) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_5);
    iVar8 = *(int *)(self + 0x32ba14);
    iVar6 = 0;
    if (iVar8 != 0) {
      iVar6 = (param_7 + *(int *)(self + 0x32ba20) + -0x14) / iVar8;
    }
    iVar4 = 0;
    do {
      iVar3 = 0;
      if (iVar8 != 0) {
        iVar3 = (*(int *)(self + 0x32ba24) + param_8 + iVar4) / iVar8;
      }
      if ((0 < *(int *)(self + (gh_long)iVar3 * 4 + (gh_long)iVar6 * 0x2d0 + 0x140598)) &&
         (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar3 * 4 +
                                                                (gh_long)iVar6 * 0x2d0 + 0x140598) *
                                                0x12 | 1) * 4 + 0x11c378))) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_5);
    iVar8 = *(int *)(self + 0x32ba14);
    iVar6 = 0;
    if (iVar8 != 0) {
      iVar6 = (param_7 + *(int *)(self + 0x32ba20) + 0x14) / iVar8;
    }
    in_w8 = 0;
    do {
      iVar4 = 0;
      if (iVar8 != 0) {
        iVar4 = (*(int *)(self + 0x32ba24) + param_8 + in_w8) / iVar8;
      }
    } while (((*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar6 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar6 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <=
              param_3)) && (in_w8 = in_w8 + 1, in_w8 < param_5));
  }
  else {
    iVar8 = param_4 * 2;
    if (param_9 == 1) {
      if (0 < param_4) {
        iVar4 = *(int *)(self + 0x32ba14);
        iVar6 = *(int *)(self + 0x32ba20) + param_7;
        iVar3 = 0;
        if (iVar4 != 0) {
          iVar3 = (param_8 + *(int *)(self + 0x32ba24) + -1) / iVar4;
        }
        iVar5 = 0;
        do {
          iVar2 = 0;
          if (iVar4 != 0) {
            iVar2 = iVar6 / iVar4;
          }
          if ((0 < *(int *)(self + (gh_long)iVar3 * 4 + (gh_long)iVar2 * 0x2d0 + 0x140598)) &&
             (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar3 * 4 +
                                                                    (gh_long)iVar2 * 0x2d0 + 0x140598)
                                                    * 0x12 | 1) * 4 + 0x11c378))) {
            return iVar5 + param_4 * -2;
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar5 < iVar8);
      }
      iVar8 = *(int *)(self + 0x32ba14);
      iVar4 = *(int *)(self + 0x32ba20) + param_7 + param_4 * -2;
      iVar6 = 0;
      if (iVar8 != 0) {
        iVar6 = (param_8 + *(int *)(self + 0x32ba24) + -1) / iVar8;
      }
      iVar3 = -1;
      while( true ) {
        in_w8 = iVar3;
        iVar3 = 0;
        if (iVar8 != 0) {
          iVar3 = iVar4 / iVar8;
        }
        if ((0 < *(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598)) &&
           (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 +
                                                                  (gh_long)iVar3 * 0x2d0 + 0x140598) *
                                                  0x12 | 1) * 4 + 0x11c378))) break;
        iVar4 = iVar4 + -1;
        iVar3 = in_w8 + 1;
        if (param_5 <= in_w8 + 2) {
          return in_w8 + 2;
        }
      }
    }
    else if (param_9 == 0) {
      if (0 < param_4) {
        iVar6 = *(int *)(self + 0x32ba14);
        iVar4 = 0;
        if (iVar6 != 0) {
          iVar4 = (param_8 + *(int *)(self + 0x32ba24) + -1) / iVar6;
        }
        iVar3 = 0;
        do {
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = (*(int *)(self + 0x32ba20) + param_7 + iVar3) / iVar6;
          }
          if ((0 < *(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar5 * 0x2d0 + 0x140598)) &&
             (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 +
                                                                    (gh_long)iVar5 * 0x2d0 + 0x140598)
                                                    * 0x12 | 1) * 4 + 0x11c378))) {
            return iVar3 + param_4 * -2;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar8);
      }
      iVar6 = *(int *)(self + 0x32ba14);
      iVar4 = 0;
      if (iVar6 != 0) {
        iVar4 = (param_8 + *(int *)(self + 0x32ba24) + -1) / iVar6;
      }
      in_w8 = 0;
      do {
        iVar3 = 0;
        if (iVar6 != 0) {
          iVar3 = (*(int *)(self + 0x32ba20) + param_7 + iVar8 + in_w8) / iVar6;
        }
        if ((0 < *(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598)) &&
           (param_3 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 +
                                                                  (gh_long)iVar3 * 0x2d0 + 0x140598) *
                                                  0x12 | 1) * 4 + 0x11c378))) {
          return in_w8 + -1;
        }
        in_w8 = in_w8 + 1;
      } while (in_w8 < param_5);
    }
  }
  return in_w8;
}

