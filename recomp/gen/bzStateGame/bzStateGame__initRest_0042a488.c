/* bzStateGame::initRest_0042a488 @ 0x0042a488 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__initRest_0042a488(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8, uint64_t gh_a9, uint64_t gh_a10)
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
  float param_10 = gh_b2f(gh_a9);
  int param_11 = (int)gh_a10;

  int iVar1;
  undefined4 *puVar2;
  gh_long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if ((((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
       ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
      (*(int *)(self + 0xba8) != 1)) && (0 < *(int *)(self + 0x32b828))) {
    lVar3 = 0;
    puVar2 = (undefined4 *)(self + 0xb0ce0);
    do {
      if ((int)puVar2[-5] < 1) {
        puVar2[-6] = param_3;
        iVar1 = *(int *)(self + 0x32c9ac);
        puVar2[-4] = param_4;
        puVar2[-3] = param_9;
        uVar4 = 600;
        if (iVar1 != 1 || param_3 != 0x31) {
          uVar4 = 100;
        }
        puVar2[-10] = param_6;
        puVar2[-9] = param_7;
        puVar2[-8] = param_5;
        puVar2[-2] = param_10;
        puVar2[-1] = 0x3f800000;
        puVar2[3] = param_8;
        puVar2[4] = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[-5] = uVar4;
        puVar2[5] = param_2;
        puVar2[6] = param_11;
        if (param_3 == 0x98) {
          uVar5 = *(undefined8 *)(self + (gh_long)param_2 * 0x288 + 0x8dd14);
          uVar4 = *(undefined4 *)(self + (gh_long)param_2 * 0x288 + 0x8dd1c);
          uVar6 = *(undefined4 *)(self + (gh_long)param_2 * 0x288 + 0x8db24);
        }
        else {
          uVar5 = 0xff000000ff;
          uVar6 = 0x3f800000;
          uVar4 = 0xff;
        }
        *(undefined8 *)(puVar2 + 7) = uVar5;
        puVar2[9] = uVar4;
        *puVar2 = uVar6;
        return 0;
      }
      lVar3 = lVar3 + 1;
      puVar2 = puVar2 + 0x14;
    } while (lVar3 < *(int *)(self + 0x32b828));
  }
  return 0;
  return 0;
}
