/* bzStateGame::OnRestored @ 0x0039c03c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__OnRestored(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;

                    
                    
  gh_vcall(GH_ARG((gh_long *)self), 0x560, GH_ARG(param_2), GH_ARG(param_3), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  return 0;
  return 0;
}
