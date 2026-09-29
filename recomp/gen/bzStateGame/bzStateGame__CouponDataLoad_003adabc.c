/* bzStateGame::CouponDataLoad_003adabc @ 0x003adabc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__CouponDataLoad_003adabc(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  char *__s;
  gh_long lVar1;
  int iVar2;
  ulong uVar3;
  char *__nptr;
  size_t __n;
  gh_long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  uint64_t gh_frame64[18] = {0};   /* 원작 스택 프레임 (SP-0x78 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x78;
#define local_78 (*(void **)(gh_fb - 0x78))
#define local_70 (*(size_t *)(gh_fb - 0x70))
  CurlResData aCStack_68 [16];
#define local_58 (*(gh_long *)(gh_fb - 0x58))
  
  lVar1 = tpidr_el0;
  local_58 = *(gh_long *)(lVar1 + 0x28);
  uVar5 = param_2;
  if (param_2 == 0) {
    uVar5 = *(uint *)(self + 0x32bfc0);
  }
  uVar6 = (ulong)uVar5;
  __s = self + 0xd38;
  sprintf(__s,"http://nesmgames.cafe24.com/Coupon/%d.txt",uVar6);
  uVar3 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG((char *)0x0), GH_ARG((CurlResData *)&local_78));
  if ((uVar3 & 1) == 0) {
    iVar7 = -1;
    do {
      iVar7 = iVar7 + 1;
      if (4 < iVar7) {
        iVar7 = 999;
        goto LAB_003adf3c;
      }
      uVar3 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG((char *)0x0), GH_ARG((CurlResData *)&local_78));
    } while ((uVar3 & 1) == 0);
  }
  __nptr = malloc(local_70 + 1);
  memcpy(__nptr,local_78,local_70);
  __nptr[local_70] = '\0';
  kScene__clearResData_0047e310(GH_ARG((kScene *)self), GH_ARG((CurlResData *)&local_78));
  iVar2 = atoi(__nptr);
  if (__nptr != (char *)0x0) {
    operator_delete(__nptr);
  }
  if (0 < param_2) {
    iVar7 = -1;
    if (999 < iVar2) {
      iVar7 = 1;
    }
    goto LAB_003adf3c;
  }
  *(int *)(self + 0x32bfc8) = iVar2;
  if (iVar2 < 1000) {
    *(undefined4 *)(self + 0x32bfc4) = 0xffffffc4;
    iVar7 = 0;
    goto LAB_003adf3c;
  }
  *(undefined4 *)(self + 0x32bfc4) = 0x3c;
  if (*(int *)(self + 0x32bfcc) != 1) {
    bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(iVar2));
    goto LAB_003adeb0;
  }
  switch(iVar2) {
  case 0x15d3905:
    *(undefined4 *)(self + 0x32c424) = 0xf6;
    goto LAB_003adeb0;
  case 0x15d3906:
    if (*(int *)(self + 0x404) < 1) {
      *(undefined4 *)(self + 0x404) = 0;
    }
    if (*(int *)(self + 0x408) < 1) {
      *(undefined4 *)(self + 0x408) = 0;
    }
    if (*(int *)(self + 0x40c) < 1) {
      *(undefined4 *)(self + 0x40c) = 0;
    }
    if (*(int *)(self + 0x410) < 1) {
      *(undefined4 *)(self + 0x410) = 0;
    }
    if (*(int *)(self + 0x414) < 1) {
      *(undefined4 *)(self + 0x414) = 0;
    }
    if (*(int *)(self + 0x418) < 1) {
      *(undefined4 *)(self + 0x418) = 0;
    }
    if (*(int *)(self + 0x41c) < 1) {
      *(undefined4 *)(self + 0x41c) = 0;
    }
    if (*(int *)(self + 0x420) < 1) {
      *(undefined4 *)(self + 0x420) = 0;
    }
    if (*(int *)(self + 0x424) < 1) {
      *(undefined4 *)(self + 0x424) = 0;
    }
    if (*(int *)(self + 0x428) < 1) {
      *(undefined4 *)(self + 0x428) = 0;
    }
    if (*(int *)(self + 0x42c) < 1) {
      *(undefined4 *)(self + 0x42c) = 0;
    }
    if (*(int *)(self + 0x430) < 1) {
      *(undefined4 *)(self + 0x430) = 0;
    }
    if (*(int *)(self + 0x434) < 1) {
      *(undefined4 *)(self + 0x434) = 0;
    }
    if (*(int *)(self + 0x438) < 1) {
      *(undefined4 *)(self + 0x438) = 0;
    }
    if (*(int *)(self + 0x43c) < 1) {
      *(undefined4 *)(self + 0x43c) = 0;
    }
    if (*(int *)(self + 0x440) < 1) {
      *(undefined4 *)(self + 0x440) = 0;
    }
    if (*(int *)(self + 0x444) < 1) {
      *(undefined4 *)(self + 0x444) = 0;
    }
    if (*(int *)(self + 0x448) < 1) {
      *(undefined4 *)(self + 0x448) = 0;
    }
    if (*(int *)(self + 0x44c) < 1) {
      *(undefined4 *)(self + 0x44c) = 0;
    }
    if (*(int *)(self + 0x450) < 1) {
      *(undefined4 *)(self + 0x450) = 0;
    }
    break;
  case 0x15d3907:
    lVar4 = 0;
    do {
      uVar8 = *(undefined8 *)(self + lVar4 + 0x404);
      if ((int)uVar8 < 1) {
        *(undefined4 *)(self + lVar4 + 0x404) = 0;
      }
      if ((int)((ulong)uVar8 >> 0x20) < 1) {
        *(undefined4 *)(self + lVar4 + 0x408) = 0;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x78);
    break;
  case 0x15d3908:
    lVar4 = 0;
    do {
      uVar8 = *(undefined8 *)(self + lVar4 + 0x404);
      if ((int)uVar8 < 1) {
        *(undefined4 *)(self + lVar4 + 0x404) = 0;
      }
      if ((int)((ulong)uVar8 >> 0x20) < 1) {
        *(undefined4 *)(self + lVar4 + 0x408) = 0;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0xa0);
    break;
  case 0x15d3909:
    lVar4 = 0;
    do {
      uVar8 = *(undefined8 *)(self + lVar4 + 0x404);
      if ((int)uVar8 < 1) {
        *(undefined4 *)(self + lVar4 + 0x404) = 0;
      }
      if ((int)((ulong)uVar8 >> 0x20) < 1) {
        *(undefined4 *)(self + lVar4 + 0x408) = 0;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 200);
    break;
  case 0x15d390a:
    __n = 0x50;
    goto LAB_003adea0;
  case 0x15d390b:
    __n = 0x78;
    goto LAB_003adea0;
  case 0x15d390c:
    __n = 0xa0;
    goto LAB_003adea0;
  case 0x15d390d:
    __n = 200;
LAB_003adea0:
    memset(self + 0x594,0,__n);
    break;
  case 0x15d390e:
    bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x13), GH_ARG(-2));
    goto LAB_003adeb0;
  default:
    bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(iVar2));
    goto LAB_003adeb0;
  }
  bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
LAB_003adeb0:
  bzStateGame__AitemSsave_003ab270(GH_ARG(self));
  bzStateGame__CouponDel_003adf80(GH_ARG(self), GH_ARG(uVar5), GH_ARG(-1));
  sprintf(__s,
                   "http://nesmgames.cafe24.com/inpoDeletes.php?game_id=Coupon/%d.txt&game_name=0&from_id=Coupon/%d.txt"
                   ,uVar6,uVar6);
  uVar3 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_68));
  if ((uVar3 & 1) == 0) {
    uVar5 = 0xffffffff;
    do {
      uVar5 = uVar5 + 1;
      if (4 < uVar5) goto LAB_003adf2c;
      uVar3 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG(aCStack_68));
    } while ((uVar3 & 1) == 0);
  }
  kScene__clearResData_0047e310(GH_ARG((kScene *)self), GH_ARG(aCStack_68));
LAB_003adf2c:
  *(undefined4 *)(self + 0x32c110) = 0;
  iVar7 = 0;
LAB_003adf3c:
  if (*(gh_long *)(lVar1 + 0x28) != local_58) {
                    
    __stack_chk_fail();
  }
  return iVar7;
}

