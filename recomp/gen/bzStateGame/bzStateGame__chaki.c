/* bzStateGame::chaki @ 0x00432770 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__chaki(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(self + 0x32ba14);
  iVar1 = *(int *)(self + 0x32ba20) + param_2;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = (*(int *)(self + 0x32ba24) + param_3) / iVar2;
  }
  if ((0 < *(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598)) &&
     (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 +
                                                         0x140598) * 0x12 | 1) * 4 + 0x11c378))) {
    return *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 +
                                                       0x140598) * 0x12 | 1) * 4 + 0x11c378);
  }
  if (0 < param_4) {
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (iVar1 - param_4) / iVar2;
    }
    if ((0 < *(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378))) {
      return *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 +
                                                         0x140598) * 0x12 | 1) * 4 + 0x11c378);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (iVar1 + param_4) / iVar2;
    }
    if ((0 < *(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378))) {
      return *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar4 * 4 + (gh_long)iVar3 * 0x2d0 +
                                                         0x140598) * 0x12 | 1) * 4 + 0x11c378);
    }
  }
  return 0;
}

