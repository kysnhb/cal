/* bzStateGame::msgBoxCallback @ 0x00473988 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__msgBoxCallback(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;

  int iVar1;
  
  iVar1 = gh_vcall(GH_ARG((gh_long *)param_2), 0x2b8, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if ((iVar1 == -2) &&
     (iVar1 = *(int *)(param_2 + 0x3c0), gh_vcall(GH_ARG((gh_long *)param_2), 0x670, GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0)),
     iVar1 == 1)) {
    byebye_0047e184(GH_ARG(0));
    return 0;
  }
  return 0;
  return 0;
}
