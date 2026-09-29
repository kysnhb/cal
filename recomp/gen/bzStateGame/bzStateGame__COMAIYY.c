/* bzStateGame::COMAIYY @ 0x00449ed4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
undefined4 bzStateGame__COMAIYY(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc) + *(int *)(self + 0x32ba24);
  if (iVar1 < 0x50a) {
    return 6;
  }
  if (iVar1 < 0x78a) {
    return 5;
  }
  if (iVar1 < 0xa0a) {
    return 4;
  }
  if (iVar1 < 0xc8a) {
    return 3;
  }
  uVar2 = 1;
  if (iVar1 < 0xf0a) {
    uVar2 = 2;
  }
  return uVar2;
}

