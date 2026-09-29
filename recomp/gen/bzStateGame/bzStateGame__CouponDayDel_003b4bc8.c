/* bzStateGame::CouponDayDel_003b4bc8 @ 0x003b4bc8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__CouponDayDel_003b4bc8(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  char *__s;
  int iVar2;
  int iVar3;
  uint uVar4;
  gh_long lVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  gh_long lVar9;
  uint uVar10;
  uint uVar11;
  CurlResData aCStack_78 [16];
  uint64_t gh_frame64[16] = {0};   /* 원작 스택 프레임 (SP-0x68 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x68;
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar5 = tpidr_el0;
  local_68 = *(gh_long *)(lVar5 + 0x28);
  __s = self + 0xd38;
  lVar9 = 0x24;
  do {
    if (0 < (int)*(uint *)(self + (lVar9 << 2 | 0xcU) + 0x32c048)) {
      uVar11 = *(uint *)(self + 0x32bb9c);
      uVar4 = *(uint *)(self + (lVar9 << 2 | 0xcU) + 0x32c048) % 10000;
      uVar10 = uVar4 / 100;
      bVar6 = SBORROW4(uVar11,uVar10);
      iVar2 = uVar11 - uVar10;
      bVar7 = false;
      if (uVar11 == uVar10) {
        iVar3 = *(int *)(self + 0x32bba0);
        iVar1 = uVar4 % 100 + 1;
        bVar6 = SBORROW4(iVar3,iVar1);
        iVar2 = iVar3 - iVar1;
        bVar7 = iVar3 == iVar1;
      }
      if (!bVar7 && iVar2 < 0 == bVar6) {
        sprintf(__s,
                         "http://nesmgames.cafe24.com/inpoDeletes.php?game_id=Coupon/%d.txt&game_name=0&from_id=Coupon/%d.txt"
                         ,(ulong)*(uint *)(self + lVar9 * 4 + 0x32c048),
                         (ulong)*(uint *)(self + lVar9 * 4 + 0x32c048));
        uVar8 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_78));
        if ((uVar8 & 1) == 0) {
          uVar11 = 0xffffffff;
          do {
            uVar11 = uVar11 + 1;
            if (4 < uVar11) {
              *(undefined4 *)(self + 0x32c114) = 999;
              goto LAB_003b4d34;
            }
            uVar8 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_78));
          } while ((uVar8 & 1) == 0);
        }
        kScene__clearResData_0047e310(GH_ARG((kScene *)self), GH_ARG(aCStack_78));
        bzStateGame__CouponDel_003adf80(GH_ARG(self), GH_ARG(0), GH_ARG((int)lVar9));
        *(undefined4 *)(self + 0x32c114) = 1999;
      }
    }
    bVar7 = lVar9 != 0;
    lVar9 = lVar9 + -4;
  } while (bVar7);
LAB_003b4d34:
  if (*(gh_long *)(lVar5 + 0x28) != local_68) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
