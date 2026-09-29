/* std::vector<PurchaseStruct,std::allocator<PurchaseStruct>>::_M_emplace_back_aux_PurchaseStruct_const___00477d34 @ 0x00477d34 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
gh_long std__vector_PurchaseStruct_std__allocator_PurchaseStruct_____M_emplace_back_aux_PurchaseStruct_const___00477d34(uint64_t gh_a0, uint64_t gh_a1)
{
  vector_PurchaseStruct_std__allocator_PurchaseStruct__ * this = (vector_PurchaseStruct_std__allocator_PurchaseStruct__ *)(uintptr_t)gh_a0;
  PurchaseStruct * param_1 = (PurchaseStruct *)(uintptr_t)gh_a1;

  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *self;
  gh_long lVar7;
  
  uVar5 = (*(gh_long *)(this + 8) - *(gh_long *)this >> 3) * 0x6db6db6db6db6db7;
  uVar2 = uVar5;
  if (*(gh_long *)(this + 8) - *(gh_long *)this == 0) {
    uVar2 = 1;
  }
  uVar1 = 0x492492492492492;
  if (!CARRY8(uVar2,uVar5) && uVar2 + uVar5 < 0x492492492492493) {
    uVar1 = uVar2 + uVar5;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x492492492492492 < uVar1) {
                    
      FUN_009d1a48();
    }
    pvVar4 = operator_new(uVar1 * 0x38);
    uVar5 = (*(gh_long *)(this + 8) - *(gh_long *)this >> 3) * 0x6db6db6db6db6db7;
  }
  PurchaseStruct__PurchaseStruct_00477efc(GH_ARG((undefined *)((gh_long)pvVar4 + uVar5 * 0x38)), GH_ARG(param_1));
  self = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  lVar7 = (gh_long)pvVar4 + 0x38;
  puVar6 = self;
  if (self != puVar3) {
    do {
      *(undefined8 *)(lVar7 + -0x38) = *puVar6;
      *puVar6 = &DAT_00d40318;
      *(undefined8 *)(lVar7 + -0x30) = puVar6[1];
      puVar6[1] = &DAT_00d40318;
      *(undefined8 *)(lVar7 + -0x28) = puVar6[2];
      puVar6[2] = &DAT_00d40318;
      *(undefined8 *)(lVar7 + -0x20) = puVar6[3];
      puVar6[3] = &DAT_00d40318;
      *(undefined8 *)(lVar7 + -0x18) = puVar6[4];
      puVar6[4] = &DAT_00d40318;
      *(undefined8 *)(lVar7 + -0x10) = puVar6[5];
      puVar6[5] = &DAT_00d40318;
      *(undefined8 *)(lVar7 + -8) = puVar6[6];
      puVar6[6] = &DAT_00d40318;
      puVar6 = puVar6 + 7;
      lVar7 = lVar7 + 0x38;
    } while (puVar6 != puVar3);
    do {
      PurchaseStruct___PurchaseStruct_0039e140(GH_ARG((undefined *)self));
      self = self + 7;
    } while (puVar3 != self);
    self = *(undefined8 **)this;
  }
  if (self != (undefined8 *)0x0) {
    operator_delete(self);
  }
  *(void **)this = pvVar4;
  *(gh_long *)(this + 8) = lVar7;
  *(void **)(this + 0x10) = (void *)((gh_long)pvVar4 + uVar1 * 0x38);
  return 0;
  return 0;
}
