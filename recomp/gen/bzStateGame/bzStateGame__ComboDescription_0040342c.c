/* bzStateGame::ComboDescription_0040342c @ 0x0040342c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef joyY2
#define joyY2 (*(undefined4 *)IMG(0x00d23c58))
#undef joyX2
#define joyX2 (*(undefined4 *)IMG(0x00d23c54))
gh_long bzStateGame__ComboDescription_0040342c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;

  int *piVar1;
  int *piVar2;
  gh_long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  piVar1 = (int *)(self + 0x32c9b4);
  iVar6 = *piVar1;
  uVar5 = iVar6 - 10;
  if (iVar6 < 10) goto LAB_00403c54;
  if (8 < *(int *)(self + (gh_long)*(int *)(self + 0x8dd08) * 4 + 0x8dc90))
  goto switchD_004034a4_caseD_10;
  switch(param_2) {
  case 0:
    *(undefined4 *)(self + 0x32c94c) = *(undefined4 *)(self + 0x32c180);
    break;
  case 1:
    uVar5 = 0xb974;
    goto LAB_004034d0;
  case 2:
    uVar5 = 0xb8d4;
LAB_004034d0:
    piVar2 = (int *)(self + 0x32b82c);
    if (-1 < *(int *)(self + (gh_long)*piVar2 * 4 + (gh_long)*(int *)(self + (uVar5 | 0x320000)) * 0x20 +
                             0x12ca8)) {
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(*(int *)(self + (gh_long)*piVar2 * 4 +
                                             (gh_long)*(int *)(self + (uVar5 | 0x320000)) * 0x20 +
                                             0x12ca8)), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(param_5));
      *piVar2 = *piVar2 + 1;
    }
    break;
  case 3:
    if (iVar6 == 10) {
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(8), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(param_5));
      iVar6 = *piVar1;
    }
    if (iVar6 == 0xf) {
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0x18;
      goto LAB_00403c1c;
    }
    goto LAB_00403c2c;
  case 4:
    if (iVar6 == 10) {
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(8), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(param_5));
      iVar6 = *piVar1;
    }
    if (iVar6 != 0xf) goto LAB_00403c2c;
    iVar6 = *(int *)(self + 0x8dad8);
    iVar4 = 0x16;
    goto LAB_00403c1c;
  case 5:
    uVar5 = *(uint *)(self + 0x8dad8);
    if (iVar6 == 10) {
      iVar6 = 0x11;
    }
    else {
      iVar6 = 0x22;
    }
    param_3 = 0;
    goto LAB_00403a70;
  case 6:
    if (iVar6 == 10) {
      bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(2));
      break;
    }
    if (iVar6 < 0x23) break;
    goto LAB_00403a80;
  case 7:
    *(uint *)(self + (gh_long)param_3 * 0x288 + 0x8dad8) = (uint)(*(int *)(self + 0x8dad8) == 0);
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x13), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(param_5));
    iVar6 = 0x3e;
    uVar5 = (uint)(*(int *)(self + 0x8dad8) == 0);
LAB_00403a70:
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_3), GH_ARG(iVar6), GH_ARG(uVar5), GH_ARG(param_5));
    iVar6 = *piVar1;
    if (iVar6 < 0x29) goto LAB_00403c54;
LAB_00403a80:
    *piVar1 = 0x3d;
    goto LAB_00403c34;
  case 8:
    switch(uVar5) {
    case 0:
switchD_00403674_caseD_0:
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0xa0;
      break;
    default:
      goto switchD_004034a4_caseD_10;
    case 8:
switchD_00403674_caseD_8:
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0xa1;
      break;
    case 0xe:
switchD_00403674_caseD_1a:
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0xa4;
      break;
    case 0x18:
switchD_00403674_caseD_24:
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0xa5;
    }
    goto LAB_00403c1c;
  case 9:
    switch(uVar5) {
    case 0:
      goto switchD_00403674_caseD_0;
    default:
      goto switchD_004034a4_caseD_10;
    case 8:
      goto switchD_00403674_caseD_8;
    case 0xe:
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0xa2;
      break;
    case 0x14:
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0xa3;
      break;
    case 0x1a:
      goto switchD_00403674_caseD_1a;
    case 0x24:
      goto switchD_00403674_caseD_24;
    }
    goto LAB_00403c1c;
  case 10:
    if (iVar6 < 0x14) {
      fVar7 = *(float *)(self + 0x1b08);
      fVar8 = *(float *)(self + 0x1b0c);
      fVar9 = 1085.0;
      fVar10 = 507.0;
    }
    else if (iVar6 < 0x28) {
      fVar7 = *(float *)(self + 0x1b08);
      fVar8 = *(float *)(self + 0x1b0c);
      fVar9 = 1120.0;
      fVar10 = 550.0;
    }
    else {
      if (0x3b < iVar6) {
        if (iVar6 < 0x50) goto LAB_00403c78;
        break;
      }
      fVar7 = *(float *)(self + 0x1b08);
      fVar8 = *(float *)(self + 0x1b0c);
      fVar9 = 1083.0;
      fVar10 = 565.0;
    }
LAB_00403b54:
    bzStateGame__joyPad_00432894(GH_ARG(self), GH_ARG(0), GH_ARG(fVar7), GH_ARG(fVar8), GH_ARG(fVar9), GH_ARG(fVar10));
    break;
  case 0xb:
    if (iVar6 == 0x21) {
LAB_00403c78:
      joyX2 = *(undefined4 *)(self + 0x1b08);
      joyY2 = *(undefined4 *)(self + 0x1b0c);
      *(undefined4 *)(self + 0x8dd38) = 0;
      *(undefined4 *)(self + 0x8dd24) = 0;
    }
    else {
      if (iVar6 == 0xf) {
        fVar7 = *(float *)(self + 0x1b08);
        fVar8 = *(float *)(self + 0x1b0c);
        fVar9 = 1028.0;
        fVar10 = 563.0;
        goto LAB_00403b54;
      }
      if (iVar6 == 10) goto switchD_004036e8_caseD_f;
    }
    break;
  case 0xc:
    switch(iVar6) {
    case 0xf:
switchD_004036e8_caseD_f:
      *(undefined4 *)(self + 0x8db14) = 4;
      *(int *)(self + 0x8dd08) = 0;
      *(undefined4 *)(self + 0x8dae8) = *(undefined4 *)(self + 0x8dacc);
      *(undefined8 *)(self + 0x8dae0) = 0xffffffde0000001e;
      break;
    case 0x23:
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0x2e;
      goto LAB_00403c1c;
    case 0x32:
      iVar4 = 5;
      iVar6 = 1;
      goto LAB_00403c1c;
    case 0x34:
      bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
    }
    break;
  case 0xd:
    if (iVar6 == 0x14) {
      if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
         ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
          ((-0x1e < *(int *)(self + 0x8dacc) &&
           (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1350)), GH_ARG(false));
      }
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0x15;
      goto LAB_00403c1c;
    }
    if (0x23 < iVar6) goto LAB_00403a80;
    break;
  case 0xe:
    switch(uVar5 >> 1 | iVar6 << 0x1f) {
    case 0:
      *(undefined4 *)(self + 0x8db14) = 0x16;
      *(undefined4 *)(self + 0x32c860) = *(undefined4 *)(self + 0x8daec);
      *(undefined4 *)(self + 0x8db08) = 0x3c;
      lVar3 = (gh_long)*(int *)(self + 0x32ba68) * 0x2d0 + 0x140598;
      *(int *)(self + 0x8daec) =
           -*(int *)(self + (gh_long)(*(int *)(self + 0x32ba6c) + -1) * 4 + lVar3);
      *(int *)(self + 0x8dad8) =
           -*(int *)(self + (gh_long)(*(int *)(self + 0x32ba6c) + -2) * 4 + lVar3);
      *(undefined4 *)(self + 0x8db0c) = 0;
      *(int *)(self + 0x8dacc) = *(int *)(self + 0x8dacc) + -0x40;
      *(undefined8 *)(self + 0x8dd14) = 0xff000000ff;
      *(undefined4 *)(self + 0x8dd1c) = 0xff;
      bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0));
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32ba6c) * 4 +
               (gh_long)*(int *)(self + 0x32ba68) * 0x2d0 + 0x140598) = 0;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32ba6c) * 4 + (gh_long)*(int *)(self + 0x32ba68) * 0x2d0 +
               0x140594) = 0;
      *(undefined4 *)
       (self + (gh_long)*(int *)(self + 0x32ba6c) * 4 + (gh_long)*(int *)(self + 0x32ba68) * 0x2d0 +
               0x140590) = 0;
      break;
    case 1:
      *(undefined4 *)(self + 0x8dae0) = 0xc;
      *(undefined4 *)(self + 0x32c85c) = 0x1e;
      break;
    case 4:
      *(undefined4 *)(self + 0x32c85c) = 0x1d;
      break;
    case 6:
      *(undefined4 *)(self + 0x32c864) = 1;
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0x68;
      goto LAB_00403c1c;
    }
    break;
  case 0xf:
    if (iVar6 == 0x19) {
      *(undefined4 *)(self + 0x8dd0c) = 1;
      *(undefined8 *)(self + 0x32ba50) = *(undefined8 *)(self + 0x32ba20);
      *(undefined8 *)(self + 0x32ba58) = *(undefined8 *)(self + 0x8dac8);
      bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0xb), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      *(undefined8 *)(self + 0x32ba20) = 0x35e0000f298;
      *(undefined8 *)(self + 0x8dac8) = 0x1860000023c;
    }
    break;
  case 0x14:
    if (((((iVar6 == 10) &&
          (bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(0x77), GH_ARG(*(int *)(self + 0x8dad8)), GH_ARG(param_5)),
          *(int *)(self + 0x32c160) == 0)) && (-0x96 < *(int *)(self + 0x8dac8))) &&
        ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
         (-0x1e < *(int *)(self + 0x8dacc))))) &&
       (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1350)), GH_ARG(false));
    }
    break;
  case 0x15:
    if (iVar6 == 0x10) {
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0x75;
    }
    else {
      if (iVar6 != 10) break;
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0x74;
    }
LAB_00403c1c:
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar4), GH_ARG(iVar6), GH_ARG(param_5));
    break;
  case 0x16:
    if (iVar6 == 10) {
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0x76;
      goto LAB_00403c1c;
    }
    break;
  case 0x17:
    if (iVar6 == 10) {
      iVar6 = *(int *)(self + 0x8dad8);
      iVar4 = 0x7a;
      goto LAB_00403c1c;
    }
  }
switchD_004034a4_caseD_10:
  iVar6 = *piVar1;
LAB_00403c2c:
  if (iVar6 < 0x3d) {
LAB_00403c54:
    iVar6 = iVar6 + 1;
  }
  else {
LAB_00403c34:
    *(undefined4 *)(self + 0x32c98c) = *(undefined4 *)(self + 0x32c9b0);
    iVar6 = 0x3d;
  }
  *piVar1 = iVar6;
  return 0;
  return 0;
}
