/* bzStateGame::sizeXXYY @ 0x0041db38 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__sizeXXYY(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  float param_3 = gh_b2f(gh_a2);

  float fVar1;
  
  if (param_3 == 1.0) {
    return param_2;
  }
  fVar1 = (float)param_2;
  if (param_3 <= 1.0) {
    fVar1 = fVar1 - (1.0 - param_3) * fVar1;
  }
  else {
    fVar1 = fVar1 * param_3;
  }
  return (int)fVar1;
}

