/* FUN_0099dbb8 @ 0x0099dbb8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long FUN_0099dbb8(uint64_t gh_a0, uint64_t gh_a1)
{
  gh_long * param_1 = (gh_long *)(uintptr_t)gh_a0;
  gh_long param_2 = (gh_long)gh_a1;

  param_1[1] = *(gh_long *)(param_2 + 8);
  *param_1 = param_2;
  **(gh_long **)(param_2 + 8) = (gh_long)param_1;
  *(gh_long **)(param_2 + 8) = param_1;
  return 0;
  return 0;
}
