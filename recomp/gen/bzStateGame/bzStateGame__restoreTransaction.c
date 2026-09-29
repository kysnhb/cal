/* bzStateGame::restoreTransaction @ 0x003ad1a8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a4dfdc
#define DAT_00a4dfdc (*(undefined1 *)IMG(0x00a4dfdc))
#undef DAT_00d23c70
#define DAT_00d23c70 (*(undefined8 *)IMG(0x00d23c70))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__restoreTransaction(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  gh_long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  size_t __n;
  int *piVar8;
  ulong *puVar9;
  int iVar10;
  gh_long lVar11;
  ulong uVar12;
  uint64_t gh_frame64[18] = {0};   /* 원작 스택 프레임 (SP-0x78 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x78;
#define local_78 (*(void *(*)[2])(gh_fb - 0x78))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar4 = tpidr_el0;
  local_68 = *(gh_long *)(lVar4 + 0x28);
  iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG(&DAT_00a4dfdc), GH_ARG(0));
  if (iVar5 == 0) {
    *(undefined4 *)(self + 0x32c784) = 1;
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    *(undefined4 *)(self + 0x1ae8) = 0x13;
    goto LAB_003ad8c8;
  }
  FUN_009d881c(GH_ARG(local_78), GH_ARG(param_2));
  lVar11 = 0;
  puVar9 = (ulong *)((gh_long)local_78[0] + -0x18);
  uVar12 = *puVar9;
  iVar5 = -1;
  do {
    __n = *(ulong *)((gh_long)(&DAT_00d23c70)[lVar11] + -0x18);
    lVar3 = uVar12 - __n;
    if (uVar12 < __n || lVar3 == 0) {
      __n = uVar12;
    }
    iVar6 = memcmp(local_78[0],(void *)(&DAT_00d23c70)[lVar11],__n);
    iVar10 = iVar5;
    if ((iVar6 == 0) && (lVar3 < 0x80000000)) {
      iVar6 = (int)lVar3;
      if (lVar3 < -0x7fffffff) {
        iVar6 = -0x80000000;
      }
      iVar10 = (int)lVar11;
      if (iVar6 != 0) {
        iVar10 = iVar5;
      }
    }
    lVar11 = lVar11 + 1;
    iVar5 = iVar10;
  } while (lVar11 != 0x16);
  if (puVar9 != &DAT_00d40300) {
    piVar8 = (int *)((gh_long)local_78[0] + -8);
    do {
      iVar5 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 < 1) {
      operator_delete(puVar9);
    }
  }
  if ((iVar10 < 0) || (*(undefined4 *)(self + (gh_long)iVar10 * 4 + 0xc44) = 1, param_3 == -1))
  goto LAB_003ad8c8;
  switch(iVar10) {
  case 6:
    *(undefined4 *)(self + 0x32c2cc) = 0x16a8;
    *(undefined4 *)(self + 0x32c31c) = 0x16a8;
    *(undefined4 *)(self + 0x32c3bc) = 0xa1;
    *(undefined4 *)(self + 0x32c36c) = 3;
    *(undefined8 *)(self + 0x32c2dc) = 0x2a3000001d4c;
    *(undefined8 *)(self + 0x32c32c) = 0x2a3000001d4c;
    *(undefined8 *)(self + 0x32c3cc) = 0x18000000130;
    uVar7 = 0xc37c;
    break;
  case 7:
    *(undefined4 *)(self + 0x32c2d0) = 0x16a8;
    *(undefined4 *)(self + 0x32c320) = 0x16a8;
    *(undefined4 *)(self + 0x32c3c0) = 0x143;
    *(undefined4 *)(self + 0x32c370) = 3;
    *(undefined8 *)(self + 0x32c2d8) = 0x1d4c00001b08;
    *(undefined8 *)(self + 0x32c328) = 0x1d4c00001b08;
    *(undefined8 *)(self + 0x32c3c8) = 0x13000000078;
    uVar7 = 0xc378;
    break;
  case 8:
    *(undefined4 *)(self + 0x32c2e0) = 0x2a30;
    *(undefined4 *)(self + 0x32c330) = 0x2a30;
    *(undefined4 *)(self + 0x32c3d0) = 0x180;
    *(undefined4 *)(self + 0x32c380) = 3;
    goto LAB_003ad3e8;
  case 9:
    *(undefined4 *)(self + 0x32c440) = *(undefined4 *)(self + 0x133ec);
    *(undefined4 *)(self + 0x32c43c) = *(undefined4 *)(self + 0x133ec);
    *(undefined4 *)(self + 0x32c3dc) = *(undefined4 *)(self + 0x134e4);
    *(undefined4 *)(self + 0x32c38c) = 1;
LAB_003ad3e8:
    if (1 < *(int *)(self + 0x1ae8) - 8U) {
      if (*(int *)(self + 0x1ae8) == 0xb) {
        *(int *)(self + 0x32c8f4) = *(int *)(self + 0x32c8f4) + 180000;
        *(undefined4 *)(self + 0x32c91c) = 8;
        if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
            (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
           ((-0x1e < *(int *)(self + 0x8dacc) &&
            (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
        }
      }
      *(int *)(self + 0x32c164) = *(int *)(self + 0x32c164) + 0x2bf1e;
      *(int *)(self + 0x32c434) = *(int *)(self + 0x32c434) + 2;
    }
    uVar7 = 50000;
LAB_003ad890:
    bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(uVar7));
switchD_003ad2bc_default:
    goto joined_r0x003ad89c;
  case 10:
    *(undefined4 *)(self + 0x32c2cc) = 0x16a8;
    *(undefined4 *)(self + 0x32c31c) = 0x16a8;
    *(undefined4 *)(self + 0x32c3bc) = 0xa1;
    *(undefined4 *)(self + 0x32c36c) = 3;
    *(undefined4 *)(self + 0x32c2dc) = 0x1d4c;
    *(undefined4 *)(self + 0x32c32c) = 0x1d4c;
    *(undefined4 *)(self + 0x32c3cc) = 0x130;
    uVar7 = 0xc37c;
    goto LAB_003ad638;
  case 0xb:
    *(undefined4 *)(self + 0x32c2d0) = 0x16a8;
    *(undefined4 *)(self + 0x32c320) = 0x16a8;
    *(undefined4 *)(self + 0x32c3c0) = 0x143;
    *(undefined4 *)(self + 0x32c370) = 3;
    *(undefined4 *)(self + 0x32c2d8) = 0x1b08;
    *(undefined4 *)(self + 0x32c328) = 0x1b08;
    *(undefined4 *)(self + 0x32c3c8) = 0x78;
    uVar7 = 0xc378;
LAB_003ad638:
    *(undefined4 *)(self + (uVar7 | 0x320000)) = 3;
    if (1 < *(int *)(self + 0x1ae8) - 8U) {
      if (*(int *)(self + 0x1ae8) == 0xb) {
        *(int *)(self + 0x32c8f4) = *(int *)(self + 0x32c8f4) + 200000;
        *(undefined4 *)(self + 0x32c91c) = 8;
        if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
           ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
            ((-0x1e < *(int *)(self + 0x8dacc) &&
             (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
        }
      }
      *(int *)(self + 0x32c164) = *(int *)(self + 0x32c164) + 0x30d3e;
      *(int *)(self + 0x32c434) = *(int *)(self + 0x32c434) + 2;
    }
    uVar7 = 0x1170;
LAB_003ad88c:
    uVar7 = uVar7 | 0x10000;
    goto LAB_003ad890;
  case 0xc:
    *(undefined4 *)(self + 0x32c2cc) = 0x16a8;
    *(undefined4 *)(self + 0x32c31c) = 0x16a8;
    *(undefined4 *)(self + 0x32c3bc) = 0xa1;
    *(undefined4 *)(self + 0x32c36c) = 3;
    *(undefined8 *)(self + 0x32c2dc) = 0x2a3000001d4c;
    *(undefined8 *)(self + 0x32c32c) = 0x2a3000001d4c;
    *(undefined8 *)(self + 0x32c3cc) = 0x18000000130;
    *(undefined8 *)(self + 0x32c37c) = 0x300000003;
    if (1 < *(int *)(self + 0x1ae8) - 8U) {
      if (*(int *)(self + 0x1ae8) == 0xb) {
        *(int *)(self + 0x32c8f4) = *(int *)(self + 0x32c8f4) + 260000;
        *(undefined4 *)(self + 0x32c91c) = 8;
        if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
            (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
           ((-0x1e < *(int *)(self + 0x8dacc) &&
            (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1368)), GH_ARG(false));
        }
      }
      *(int *)(self + 0x32c164) = *(int *)(self + 0x32c164) + 0x3f79e;
      *(int *)(self + 0x32c434) = *(int *)(self + 0x32c434) + 2;
    }
    uVar7 = 0x5f90;
    goto LAB_003ad88c;
  default:
    goto switchD_003ad2bc_default;
  }
  *(undefined8 *)(self + (uVar7 | 0x320000)) = 0x300000003;
joined_r0x003ad89c:
  if (param_3 == 1) {
    *(undefined4 *)(self + 0x32c784) = 1;
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    *(undefined4 *)(self + 0x1ae8) = 0x13;
  }
  bzStateGame__AitemSsave_003ab270(GH_ARG(self));
LAB_003ad8c8:
  if (*(gh_long *)(lVar4 + 0x28) == local_68) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
