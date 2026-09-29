/* bzStateGame::CouponSend @ 0x003ad9ac — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__CouponSend(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;

  char *__s;
  gh_long lVar1;
  ulong uVar2;
  CurlResData aCStack_48 [16];
  uint64_t gh_frame64[10] = {0};   /* 원작 스택 프레임 (SP-0x38 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x38;
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar1 = tpidr_el0;
  local_38 = *(gh_long *)(lVar1 + 0x28);
  __s = self + 0xd38;
  sprintf(__s,
                   "http://nesmgames.cafe24.com/inpo.php?game_id=Coupon/%d.txt&game_name=%d&from_id=Coupon/%d.txt"
                   ,(ulong)(uint)param_2,(ulong)(uint)param_3,(ulong)(uint)param_2);
  uVar2 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48));
  if (((((uVar2 & 1) != 0) ||
       (uVar2 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48)), (uVar2 & 1) != 0)) ||
      (uVar2 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48)), (uVar2 & 1) != 0)) ||
     (((uVar2 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48)), (uVar2 & 1) != 0 ||
       (uVar2 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48)), (uVar2 & 1) != 0)) ||
      (uVar2 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48)), (uVar2 & 1) != 0)))) {
    kScene__clearResData_0047e310(GH_ARG((kScene *)self), GH_ARG(aCStack_48));
  }
  if (*(gh_long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
