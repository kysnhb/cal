/* bzStateGame::CouponDataDel @ 0x003ae130 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__CouponDataDel(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  char *__s;
  gh_long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  CurlResData aCStack_48 [16];
  uint64_t gh_frame64[10] = {0};   /* 원작 스택 프레임 (SP-0x38 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x38;
#define local_38 (*(gh_long *)(gh_fb - 0x38))
  
  lVar1 = tpidr_el0;
  local_38 = *(gh_long *)(lVar1 + 0x28);
  __s = self + 0xd38;
  sprintf(__s,
                   "http://nesmgames.cafe24.com/inpoDeletes.php?game_id=Coupon/%d.txt&game_name=0&from_id=Coupon/%d.txt"
                   ,(ulong)(uint)param_2,(ulong)(uint)param_2);
  uVar2 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48));
  if ((uVar2 & 1) == 0) {
    iVar4 = -1;
    do {
      iVar4 = iVar4 + 1;
      if (4 < iVar4) {
        uVar3 = 999;
        goto LAB_003ae1cc;
      }
      uVar2 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_48));
    } while ((uVar2 & 1) == 0);
  }
  kScene__clearResData_0047e310(GH_ARG((kScene *)self), GH_ARG(aCStack_48));
  uVar3 = 0;
LAB_003ae1cc:
  if (*(gh_long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    
  __stack_chk_fail(uVar3);
  return 0;
}
