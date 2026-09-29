/* bzStateGame::NEWCouponNUM @ 0x003b4d6c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__NEWCouponNUM(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  char *__s;
  int *piVar1;
  int iVar2;
  gh_long lVar3;
  int iVar4;
  ulong uVar5;
  CurlResData aCStack_48 [16];
  uint64_t gh_frame64[10] = {0};   /* 원작 스택 프레임 (SP-0x38 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x38;
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar3 = tpidr_el0;
  local_38 = *(gh_long *)(lVar3 + 0x28);
  iVar4 = bzStateGame__CouponRand_003b4560(GH_ARG(self));
  piVar1 = (int *)(self + 0x32c114);
  *piVar1 = iVar4;
  if (iVar4 < 0) goto LAB_003b4ee0;
  iVar2 = *(int *)((gh_long)(self + 0x32c048) + (gh_long)iVar4 * 4);
  if (((((((iVar4 == 0) || (iVar2 != *(int *)(self + 0x32c048))) &&
         ((iVar4 == 4 || (iVar2 != *(int *)(self + 0x32c058))))) &&
        (((iVar4 == 8 || (iVar2 != *(int *)(self + 0x32c068))) &&
         ((iVar4 == 0xc || (iVar2 != *(int *)(self + 0x32c078))))))) &&
       (((iVar4 == 0x10 || (iVar2 != *(int *)(self + 0x32c088))) &&
        ((iVar4 == 0x14 || (iVar2 != *(int *)(self + 0x32c098))))))) &&
      (((iVar4 == 0x18 || (iVar2 != *(int *)(self + 0x32c0a8))) &&
       ((iVar4 == 0x1c || (iVar2 != *(int *)(self + 0x32c0b8))))))) &&
     (((iVar4 == 0x20 || (iVar2 != *(int *)(self + 0x32c0c8))) &&
      ((iVar4 == 0x24 || (iVar2 != *(int *)(self + 0x32c0d8))))))) {
    iVar4 = bzStateGame__CouponDataLoad_003adabc(GH_ARG(self), GH_ARG(iVar2));
    if (iVar4 != 999) {
      if (iVar4 != 1) {
        __s = self + 0xd38;
        sprintf(__s,
                         "http://nesmgames.cafe24.com/inpo.php?game_id=Coupon/%d.txt&game_name=%d&from_id=Coupon/%d.txt"
                         ,(ulong)*(uint *)(self + (gh_long)*piVar1 * 4 + 0x32c048),
                         (ulong)*(uint *)(self + (gh_long)*piVar1 * 4 + 0x32c050),
                         (ulong)*(uint *)(self + (gh_long)*piVar1 * 4 + 0x32c048));
        uVar5 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48));
        if ((((((uVar5 & 1) != 0) ||
              (uVar5 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48)),
              (uVar5 & 1) != 0)) ||
             (uVar5 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48)), (uVar5 & 1) != 0
             )) || ((uVar5 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48)),
                    (uVar5 & 1) != 0 ||
                    (uVar5 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48)),
                    (uVar5 & 1) != 0)))) ||
           (uVar5 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48)), (uVar5 & 1) != 0))
        {
          kScene__clearResData_0047e310(GH_ARG((kScene *)self), GH_ARG(aCStack_48));
        }
        goto LAB_003b4ee0;
      }
      iVar4 = *piVar1;
      goto LAB_003b4ed4;
    }
    bzStateGame__CouponDel_003adf80(GH_ARG(self), GH_ARG(0), GH_ARG(*piVar1));
    iVar4 = 999;
  }
  else {
LAB_003b4ed4:
    bzStateGame__CouponDel_003adf80(GH_ARG(self), GH_ARG(0), GH_ARG(iVar4));
    iVar4 = -5;
  }
  *piVar1 = iVar4;
LAB_003b4ee0:
  if (*(gh_long *)(lVar3 + 0x28) != local_38) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
