/* convertScreenCoord_00479660 @ 0x00479660 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long convertScreenCoord_00479660(uint64_t gh_a0, uint64_t gh_a1)
{
  float * param_1 = (float *)(uintptr_t)gh_a0;
  float * param_2 = (float *)(uintptr_t)gh_a1;

  *param_2 = 640.0 - *param_2;
  return 0;
  return 0;
}
