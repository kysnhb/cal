/* bzStateGame::CouponDel_003adf80 @ 0x003adf80 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__CouponDel_003adf80(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;

  int iVar1;
  gh_long lVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (0 < *(int *)(self + 0x32bfc0)) {
    if (*(int *)(self + 0x32c048) == param_2) {
      param_3 = 0;
      goto LAB_003ae0b0;
    }
    if (*(int *)(self + 0x32c058) == param_2) {
      param_3 = 4;
      goto LAB_003ae0b0;
    }
    if (*(int *)(self + 0x32c068) == param_2) {
      param_3 = 8;
      goto LAB_003ae0b0;
    }
    if (*(int *)(self + 0x32c078) == param_2) {
      param_3 = 0xc;
      goto LAB_003ae0b0;
    }
    if (*(int *)(self + 0x32c088) == param_2) {
      param_3 = 0x10;
      goto LAB_003ae0b0;
    }
    if (*(int *)(self + 0x32c098) == param_2) {
      param_3 = 0x14;
      goto LAB_003ae0b0;
    }
    if (*(int *)(self + 0x32c0a8) == param_2) {
      param_3 = 0x18;
      goto LAB_003ae0b0;
    }
    if (*(int *)(self + 0x32c0b8) == param_2) {
      param_3 = 0x1c;
      goto LAB_003ae0b0;
    }
    if (*(int *)(self + 0x32c0c8) == param_2) {
      param_3 = 0x20;
      goto LAB_003ae0b0;
    }
    if (*(int *)(self + 0x32c0d8) == param_2) {
      param_3 = 0x24;
      goto LAB_003ae0b0;
    }
  }
  if (param_3 < 0) {
    return 0;
  }
LAB_003ae0b0:
  *(undefined8 *)(self + (gh_long)param_3 * 4 + 0x32c050) = 0;
  *(undefined8 *)(self + (gh_long)param_3 * 4 + 0x32c048) = 0;
  if ((0 < *(int *)(self + (gh_long)param_3 * 4 + 0x32c058)) && (param_3 < 0x28)) {
    lVar2 = (gh_long)param_3 + -4;
    piVar3 = (int *)(self + (gh_long)param_3 * 4 + 0x32c058);
    do {
      if (0 < *piVar3) {
        piVar3[-4] = *piVar3;
        uVar4 = *(undefined8 *)(piVar3 + 1);
        iVar1 = piVar3[3];
        piVar3[0] = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        *(undefined8 *)(piVar3 + -3) = uVar4;
        piVar3[-1] = iVar1;
      }
      lVar2 = lVar2 + 4;
      piVar3 = piVar3 + 4;
    } while (lVar2 < 0x24);
  }
  return 0;
  return 0;
}
