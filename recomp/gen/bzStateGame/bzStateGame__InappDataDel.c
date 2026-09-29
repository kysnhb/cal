/* bzStateGame::InappDataDel @ 0x003abb04 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_u128 bzStateGame__InappDataDel(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  gh_u128 auVar1;
  
  GH_PART(auVar1, 12, uint32_t) = 0;
  GH_PART(auVar1, 8, uint32_t) = param_2;
  GH_PART(auVar1, 0, uint64_t) = 0xffffffff;
  return auVar1;
}

