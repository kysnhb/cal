/* bzStateGame::setPopup @ 0x004337ec — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__setPopup(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;

  *(int *)(self + 0x1af8) = param_2;
  *(int *)(self + 0x1afc) = param_3;
  *(int *)(self + 0x1b00) = param_4;
  return 0;
  return 0;
}
