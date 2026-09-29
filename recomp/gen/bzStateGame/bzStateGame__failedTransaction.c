/* bzStateGame::failedTransaction @ 0x003ad94c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__failedTransaction(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gh_a2;

  undefined4 uVar1;
  
  self[0x8da4c] = 0;
  if (*(int *)(self + 0x1af0) != 0) {
    self[0x1af4] = 0;
    return 0;
  }
  uVar1 = 0x17;
  if (5 < *(int *)(self + 0x8da50)) {
    uVar1 = 0x13;
  }
  *(undefined4 *)(self + 0x1ae8) = uVar1;
  *(undefined4 *)(self + 0x32c970) = 0x33;
  return 0;
  return 0;
}
