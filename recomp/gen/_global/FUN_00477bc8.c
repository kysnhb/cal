/* FUN_00477bc8 @ 0x00477bc8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
ulong FUN_00477bc8(uint64_t gh_a0)
{
  ulong * param_1 = (ulong *)(uintptr_t)gh_a0;

  ulong *puVar1;
  ulong uVar2;
  gh_long lVar3;
  ulong uVar4;
  
  uVar2 = param_1[0x270];
  if (uVar2 < 0x270) {
    puVar1 = param_1 + uVar2;
    uVar2 = uVar2 + 1;
  }
  else {
    uVar2 = *param_1;
    lVar3 = 0;
    do {
      puVar1 = (ulong *)((gh_long)param_1 + lVar3);
      uVar4 = uVar2 & 0xffffffff80000000;
      uVar2 = puVar1[1];
      lVar3 = lVar3 + 8;
      *puVar1 = puVar1[0x18d] ^ (uVar2 & 0x7ffffffe | uVar4) >> 1 ^ -(uVar2 & 1) & 0x9908b0df;
    } while (lVar3 != 0x718);
    uVar2 = param_1[0xe3];
    lVar3 = 0;
    do {
      puVar1 = (ulong *)((gh_long)param_1 + lVar3);
      uVar4 = uVar2 & 0xffffffff80000000;
      uVar2 = puVar1[0xe4];
      lVar3 = lVar3 + 8;
      puVar1[0xe3] = *puVar1 ^ (uVar2 & 0x7ffffffe | uVar4) >> 1 ^ -(uVar2 & 1) & 0x9908b0df;
    } while (lVar3 != 0xc60);
    param_1[0x270] = 0;
    param_1[0x26f] =
         param_1[0x18c] ^ (*param_1 & 0x7ffffffe | param_1[0x26f] & 0xffffffff80000000) >> 1 ^
         -(*param_1 & 1) & 0x9908b0df;
    uVar2 = 1;
    puVar1 = param_1;
  }
  param_1[0x270] = uVar2;
  uVar2 = *puVar1 >> 0xb & 0xffffffff ^ *puVar1;
  uVar2 = (uVar2 & 0x13a58ad) << 7 ^ uVar2;
  uVar2 = (uVar2 & 0x1df8c) << 0xf ^ uVar2;
  return uVar2 ^ uVar2 >> 0x12;
}

