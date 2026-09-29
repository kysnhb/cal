/* bzStateGame::BoxCheck @ 0x004337b4 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
bool bzStateGame__BoxCheck(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  int param_7 = (int)gh_a6;

  return ((param_3 < param_2 && param_2 < param_4 + param_3) && param_6 < param_5) &&
         param_5 < param_7 + param_6;
}

