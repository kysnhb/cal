/* bzStateGame::_bzStateGame_0039dbb0 @ 0x0039dbb0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(undefined8 *)IMG(0x00d23c48))
#undef PTR__bzStateGame_0039dbb0_00cc25a0
#define PTR__bzStateGame_0039dbb0_00cc25a0 (*(uint8_t * *)IMG(0x00cc25a0))
#undef PTR__kScene_0047e6d4_00cc40d0
#define PTR__kScene_0047e6d4_00cc40d0 (*(uint8_t * *)IMG(0x00cc40d0))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame___bzStateGame_0039dbb0(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  char cVar2;
  bool bVar3;
  gh_long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  int *piVar7;
  gh_long lVar8;
  gh_long *plVar9;
  gh_long lVar10;
  undefined *self_00;
  undefined *puVar11;
  gh_long *plVar12;
  
  lVar4 = tpidr_el0;
  lVar8 = *(gh_long *)(lVar4 + 0x28);
  *(undefined ***)self = &PTR__bzStateGame_0039dbb0_00cc25a0;
  DAT_00d23c48 = 0;
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x32c960) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x32c960) + -8);
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
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x32c958) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x32c958) + -8);
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
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x8da70) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x8da70) + -8);
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
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x8da68) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x8da68) + -8);
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
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x8da60) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x8da60) + -8);
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
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x8da58) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x8da58) + -8);
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
  plVar9 = *(gh_long **)(self + 0x1938);
  plVar12 = *(gh_long **)(self + 0x1940);
  if (plVar9 != plVar12) {
    do {
      puVar5 = (undefined8 *)(*plVar9 + -0x18);
      if (puVar5 != &DAT_00d40300) {
        piVar7 = (int *)(*plVar9 + -8);
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
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar12);
    plVar9 = *(gh_long **)(self + 0x1938);
  }
  if (plVar9 != (gh_long *)0x0) {
    operator_delete(plVar9);
  }
  SoundClip___SoundClip_0047e354(GH_ARG((SoundClip *)(self + 0x1920)));
  SoundClip___SoundClip_0047e354(GH_ARG((SoundClip *)(self + 0x1908)));
  SoundClip___SoundClip_0047e354(GH_ARG((SoundClip *)(self + 0x18f0)));
  lVar10 = 0;
  do {
    SoundClip___SoundClip_0047e354(GH_ARG((SoundClip *)(self + lVar10 + 0x18d8)));
    lVar10 = lVar10 + -0x18;
  } while (lVar10 != -0x708);
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x1148) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x1148) + -8);
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
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x1140) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x1140) + -8);
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
      pvVar6 = *(void **)(self + 0xbb0);
      goto joined_r0x0039e09c;
    }
  }
  pvVar6 = *(void **)(self + 0xbb0);
joined_r0x0039e09c:
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x890) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x890) + -8);
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
  puVar5 = (undefined8 *)(*(gh_long *)(self + 0x888) + -0x18);
  if (puVar5 != &DAT_00d40300) {
    piVar7 = (int *)(*(gh_long *)(self + 0x888) + -8);
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
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_erase_0047795c(GH_ARG((_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
                       *)(self + 0x3d0)), GH_ARG(*(_Rb_tree_node **)(self + 0x3e0)));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_erase_0047795c(GH_ARG((_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
                       *)(self + 0x3a0)), GH_ARG(*(_Rb_tree_node **)(self + 0x3b0)));
  self_00 = *(undefined **)(self + 0x388);
  puVar11 = *(undefined **)(self + 0x390);
  if (self_00 != puVar11) {
    do {
      PurchaseStruct___PurchaseStruct_0039e140(GH_ARG(self_00));
      self_00 = self_00 + 0x38;
    } while (puVar11 != self_00);
    self_00 = *(undefined **)(self + 0x388);
  }
  if (self_00 != (undefined *)0x0) {
    operator_delete(self_00);
  }
  *(undefined ***)self = &PTR__kScene_0047e6d4_00cc40d0;
  std___Rb_tree_int_std__pair_int_const_kSprite___std___Select1st_std__pair_int_const_kSprite____std__less_int__std__allocator_std__pair_int_const_kSprite_______M_erase_00477a84(GH_ARG((_Rb_tree_int_std__pair_int_const_kSprite___std___Select1st_std__pair_int_const_kSprite____std__less_int__std__allocator_std__pair_int_const_kSprite____
                       *)(self + 0x318)), GH_ARG(*(_Rb_tree_node **)(self + 0x328)));
  cocos2d__Scene___Scene_0058fc84(GH_ARG((Scene *)self));
  if (*(gh_long *)(lVar4 + 0x28) != lVar8) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
