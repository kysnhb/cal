/* bzStateGame::getCurPrice_0039e3e0 @ 0x0039e3e0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a4d796
#define DAT_00a4d796 (*(undefined1 *)IMG(0x00a4d796))
#undef DAT_00a4d79a
#define DAT_00a4d79a (*(undefined1 *)IMG(0x00a4d79a))
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__getCurPrice_0039e3e0(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * ret = (undefined *)(uintptr_t)gh_a0;
  undefined * self = (undefined *)(uintptr_t)gh_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gh_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gh_a3;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  gh_long lVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  size_t __n;
  gh_long lVar10;
  gh_long lVar11;
  ulong uVar12;
  gh_long lVar13;
  uint64_t gh_frame64[22] = {0};   /* 원작 스택 프레임 (SP-0x98 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x98;
#define local_98 (*(gh_long *)(gh_fb - 0x98))
#define local_90 (*(gh_long *)(gh_fb - 0x90))
#define local_88 (*(gh_long *)(gh_fb - 0x88))
#define local_80 (*(gh_long *)(gh_fb - 0x80))
#define local_78 (*(gh_long (*)[2])(gh_fb - 0x78))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar4 = tpidr_el0;
  local_68 = *(gh_long *)(lVar4 + 0x28);
  FUN_009d4eac(GH_ARG(ret), GH_ARG(&DAT_00afe81e), GH_ARG(local_78), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  lVar13 = *(gh_long *)(self + 0x390);
  lVar10 = *(gh_long *)(self + 0x388);
  if (lVar13 != lVar10) {
    lVar11 = 0;
    uVar12 = 0;
    do {
      uVar8 = *(ulong *)((gh_long)*(void **)(lVar10 + lVar11) + -0x18);
      __n = *(ulong *)((gh_long)*(void **)param_3 + -0x18);
      lVar3 = uVar8 - __n;
      if (uVar8 < __n || lVar3 == 0) {
        __n = uVar8;
      }
      iVar5 = memcmp(*(void **)(lVar10 + lVar11),*(void **)param_3,__n);
      if ((iVar5 == 0) && (lVar3 < 0x80000000)) {
        iVar5 = (int)lVar3;
        if (lVar3 < -0x7fffffff) {
          iVar5 = -0x80000000;
        }
        if (iVar5 == 0) {
          FUN_009d899c(GH_ARG(ret), GH_ARG(lVar10 + lVar11 + 0x10));
          lVar13 = *(gh_long *)(self + 0x390);
          lVar10 = *(gh_long *)(self + 0x388);
        }
      }
      uVar12 = uVar12 + 1;
      uVar8 = (lVar13 - lVar10 >> 3) * 0x6db6db6db6db6db7;
      lVar11 = lVar11 + 0x38;
    } while (uVar12 <= uVar8 && uVar8 - uVar12 != 0);
  }
  if ((*(gh_long *)(*(gh_long *)ret + -0x18) == 0) ||
     (iVar5 = FUN_009d6cd4(GH_ARG(ret), GH_ARG(&DAT_00afe81e), GH_ARG(0)), iVar5 == 0)) {
    puVar6 = (undefined *)FUN_009d881c(GH_ARG(&local_80), GH_ARG(param_3));
    iVar5 = bzStateGame__GetPurchaseState_0039f7f0(GH_ARG(puVar6), GH_ARG((undefined *)&local_80));
    puVar6 = (undefined *)FUN_009d881c(GH_ARG(&local_88), GH_ARG(param_4));
    bzStateGame__getDefaultPrice_0039ea68(GH_ARG((undefined *)local_78), GH_ARG(puVar6), GH_ARG(iVar5), GH_ARG((undefined *)&local_88));
    FUN_009d5ec8(GH_ARG(ret), GH_ARG(local_78));
    if ((undefined8 *)(local_78[0] + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_78[0] + -8);
      do {
        iVar5 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 < 1) {
        operator_delete((undefined8 *)(local_78[0] + -0x18));
      }
    }
    if ((undefined8 *)(local_88 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_88 + -8);
      do {
        iVar5 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 < 1) {
        operator_delete((undefined8 *)(local_88 + -0x18));
      }
    }
    puVar7 = (undefined8 *)(local_80 + -0x18);
    if (puVar7 == &DAT_00d40300) goto LAB_0039e630;
    piVar9 = (int *)(local_80 + -8);
    do {
      iVar5 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    iVar5 = FUN_009d6cd4(GH_ARG(param_4), GH_ARG(&DAT_00a4d796), GH_ARG(0));
    if ((iVar5 == 0) || (iVar5 = FUN_009d6cd4(GH_ARG(param_4), GH_ARG(&DAT_00a4d79a), GH_ARG(0)), iVar5 == 0))
    goto LAB_0039e630;
    puVar6 = (undefined *)FUN_009d881c(GH_ARG(&local_90), GH_ARG(param_3));
    iVar5 = bzStateGame__GetPurchaseState_0039f7f0(GH_ARG(puVar6), GH_ARG((undefined *)&local_90));
    puVar6 = (undefined *)FUN_009d881c(GH_ARG(&local_98), GH_ARG(param_4));
    bzStateGame__getDefaultPrice_0039ea68(GH_ARG((undefined *)local_78), GH_ARG(puVar6), GH_ARG(iVar5), GH_ARG((undefined *)&local_98));
    FUN_009d5ec8(GH_ARG(ret), GH_ARG(local_78));
    if ((undefined8 *)(local_78[0] + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_78[0] + -8);
      do {
        iVar5 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 < 1) {
        operator_delete((undefined8 *)(local_78[0] + -0x18));
      }
    }
    if ((undefined8 *)(local_98 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_98 + -8);
      do {
        iVar5 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 < 1) {
        operator_delete((undefined8 *)(local_98 + -0x18));
      }
    }
    puVar7 = (undefined8 *)(local_90 + -0x18);
    if (puVar7 == &DAT_00d40300) goto LAB_0039e630;
    piVar9 = (int *)(local_90 + -8);
    do {
      iVar5 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar5 < 1) {
    operator_delete(puVar7);
  }
LAB_0039e630:
  if (*(gh_long *)(lVar4 + 0x28) == local_68) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
