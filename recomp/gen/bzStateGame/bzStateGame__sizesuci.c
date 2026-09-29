/* bzStateGame::sizesuci @ 0x0041dafc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__sizesuci(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  gh_long param_2 = (gh_long)gh_a1;
  gh_long param_3 = (gh_long)gh_a2;

  int iVar1;
  
  if (param_2 == 1) {
    return 0;
  }
  iVar1 = (int)((float)param_2 / ((float)param_3 / 100.0));
  if (iVar1 == 0 && 1 < param_2) {
    iVar1 = 1;
  }
  return iVar1;
}

