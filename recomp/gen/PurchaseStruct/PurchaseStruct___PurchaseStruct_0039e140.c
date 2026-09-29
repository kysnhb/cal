/* PurchaseStruct::_PurchaseStruct_0039e140 @ 0x0039e140 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long PurchaseStruct___PurchaseStruct_0039e140(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  undefined8 *puVar5;
  gh_long lVar6;
  int *piVar7;
  
  lVar4 = tpidr_el0;
  lVar6 = *(gh_long *)(lVar4 + 0x28);
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x30) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x30) + -8);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x28) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x28) + -8);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x20) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x20) + -8);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x18) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x18) + -8);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x10) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x10) + -8);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined8 *)(*(gh_long *)(self + 8) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 8) + -8);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined8 *)(*(gh_long *)self + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)self + -8);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      operator_delete(puVar5);
    }
  }
  if (*(gh_long *)(lVar4 + 0x28) != lVar6) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
