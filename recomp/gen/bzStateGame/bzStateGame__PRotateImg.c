/* bzStateGame::PRotateImg @ 0x0046bc50 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__PRotateImg(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;

  int iVar1;
  int iVar2;
  
  iVar1 = param_3 + param_2;
  iVar2 = iVar1 + -0x274;
  if (iVar1 < 0x274) {
    iVar2 = iVar1;
  }
  return iVar2;
}

