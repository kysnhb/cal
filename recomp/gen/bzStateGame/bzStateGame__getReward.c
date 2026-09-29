/* bzStateGame::getReward @ 0x0039ca04 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__getReward(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;

  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = strcmp(param_2,self + 0x92e);
  iVar1 = -(uint)(iVar1 != 0);
  iVar2 = strcmp(param_2,self + 0x960);
  if (iVar2 == 0) {
    iVar1 = 1;
  }
  iVar3 = strcmp(param_2,self + 0x992);
  iVar2 = 2;
  if (iVar3 != 0) {
    iVar2 = iVar1;
  }
  iVar3 = strcmp(param_2,self + 0x9c4);
  iVar1 = 3;
  if (iVar3 != 0) {
    iVar1 = iVar2;
  }
  iVar3 = strcmp(param_2,self + 0x9f6);
  iVar2 = 4;
  if (iVar3 != 0) {
    iVar2 = iVar1;
  }
  iVar3 = strcmp(param_2,self + 0xa28);
  iVar1 = 5;
  if (iVar3 != 0) {
    iVar1 = iVar2;
  }
  iVar3 = strcmp(param_2,self + 0xabe);
  iVar2 = 8;
  if (iVar3 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}

