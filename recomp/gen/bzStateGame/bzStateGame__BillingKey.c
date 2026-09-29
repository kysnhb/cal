/* bzStateGame::BillingKey @ 0x003abb0c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__BillingKey(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  Application *this;
  undefined4 uVar1;
  
  if ((param_2 != -99) && (param_2 != -0x58)) {
    self[0x8da4c] = 0;
    this = (Application *)cocos2d__Application__getInstance_00484a3c();
    cocos2d__Application__purchase_00485ae8(GH_ARG(this), GH_ARG(param_2));
    self[0x8da4c] = 1;
    if (*(int *)(self + 0x1af0) == 0) {
      uVar1 = 6;
      if (*(int *)(self + 0x8da50) < 6) {
        uVar1 = 1;
      }
      *(undefined4 *)(self + 0x1ae8) = uVar1;
    }
    else {
      self[0x1af4] = 1;
    }
  }
  return 0;
  return 0;
}
