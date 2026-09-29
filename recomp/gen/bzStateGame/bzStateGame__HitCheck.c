/* bzStateGame::HitCheck @ 0x004379c0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
bool bzStateGame__HitCheck(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;

  return param_2 - param_4 < param_3 && param_3 < param_4 + param_2;
}

