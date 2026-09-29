/* bzStateGame::initPimg_0043215c @ 0x0043215c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
undefined8 bzStateGame__initPimg_0043215c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10, uint64_t gh_a11, uint64_t gh_a12, uint64_t gh_a13, uint64_t gh_a14)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;
  int param_7 = (int)gh_a6;
  int param_8 = (int)gh_a7;
  int param_9 = (int)gh_a8;
  int param_10 = (int)gh_a9;
  int param_11 = (int)gh_a10;
  float param_12 = gh_b2f(gh_a11);
  int param_13 = (int)gh_a12;
  int param_14 = (int)gh_a13;
  int param_15 = (int)gh_a14;

  int iVar1;
  int iVar2;
  gh_long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  gh_long lVar8;
  int *piVar9;
  
  iVar2 = *(int *)(self + 0x32c134);
  iVar7 = iVar2;
  if (iVar2 <= param_2) {
    iVar7 = *(int *)(self + 0x32b824);
  }
  if (param_2 < iVar7) {
    lVar3 = (ulong)(uint)param_2 << 0x20;
    piVar6 = (int *)(self + (gh_long)param_2 * 0x288 + 0x8daec);
    lVar8 = (gh_long)param_2;
    do {
      if ((param_2 == 0) || (*piVar6 < 1)) {
        lVar3 = lVar3 >> 0x20;
        piVar6 = (int *)(self + lVar3 * 0x288 + 0x8dac8);
        piVar9 = piVar6 + 4;
        *piVar9 = param_5;
        *piVar6 = param_6;
        piVar6[1] = param_7;
        *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dae8) = param_7;
        piVar6[9] = param_8;
        piVar6[10] = 0;
        piVar6[6] = 0;
        piVar6[0x14] = 0;
        piVar6[0x15] = 0;
        piVar6[0x16] = 0x3f800000;
        piVar6[0x17] = GH_F2I(int, param_12);
        piVar6[0x11] = param_14;
        piVar6[0x12] = param_13;
        piVar6[0x92] = 0;
        piVar6[0x13] = param_3;
        iVar7 = (int)lVar8;
        if (iVar7 == 0) {
          param_9 = *(int *)(self + 0x32c174);
        }
        *(int *)(self + lVar3 * 0x288 + 0x8db04) = param_9;
        *(int *)(self + lVar3 * 0x288 + 0x8db08) = param_10;
        *(int *)(self + lVar3 * 0x288 + 0x8dd20) = param_11;
        if (param_15 == 0x5dd) {
          uVar5 = (uint)(60000 < *(int *)(self + 0x32ba20));
        }
        else {
          uVar5 = 0;
        }
        *(uint *)(self + lVar3 * 0x288 + 0x8dd0c) = uVar5;
        if (param_3 == 0x15) {
          *(undefined8 *)(self + lVar3 * 0x288 + 0x8dd14) = 0x6e00000000;
          uVar4 = 5;
        }
        else {
          *(undefined4 *)(self + lVar3 * 0x288 + 0x8dd14) =
               *(undefined4 *)(self + (gh_long)param_11 * 0x10 + 0x8cb70);
          *(undefined4 *)(self + lVar3 * 0x288 + 0x8dd18) =
               *(undefined4 *)(self + (gh_long)param_11 * 0x10 + 0x8cb74);
          uVar4 = *(undefined4 *)(self + (gh_long)param_11 * 0x10 + 0x8cb78);
        }
        *(undefined4 *)(self + lVar3 * 0x288 + 0x8dd1c) = uVar4;
        *(undefined4 *)(self + lVar3 * 0x288 + 0x8dd08) = 0;
        *(int *)(self + lVar3 * 0x288 + 0x8dd4c) = param_4;
        *(int *)(self + lVar3 * 0x288 + 0x8dd3c) = param_15;
        if ((iVar7 < iVar2) && (iVar7 == 0)) {
          *(undefined4 *)(self + 0x32c84c) = 2;
          *(undefined4 *)(self + lVar3 * 4 + 0x32b8d4) = 0;
          *(undefined4 *)(self + lVar3 * 4 + 0x32b974) = 1;
          *(undefined4 *)(self + lVar3 * 4 + 0x32b82c) = 0;
          *(undefined4 *)(self + lVar3 * 0x288 + 0x8dadc) = 2;
          *(undefined4 *)(self + lVar3 * 0x288 + 0x8dd24) = 0;
        }
        if (param_3 == 0x1a) {
          iVar2 = *piVar9;
          iVar1 = 0xc4;
        }
        else {
          bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(4), GH_ARG(iVar7), GH_ARG(0));
          if (param_15 != 0x5dc) {
            return 0;
          }
          iVar2 = *piVar9;
          iVar1 = 0x26;
        }
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(iVar7), GH_ARG(iVar1), GH_ARG(iVar2), GH_ARG(param_5));
        return 0;
      }
      lVar8 = lVar8 + 1;
      lVar3 = lVar3 + 0x100000000;
      piVar6 = piVar6 + 0xa2;
    } while (lVar8 < iVar7);
  }
  return 0;
}

