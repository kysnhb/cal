/* bzStateGame::checkDate @ 0x003a4170 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
bool bzStateGame__checkDate(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  if ((*(int *)(self + 0xb78) == *(int *)(self + 0xb7c)) &&
     (*(int *)(self + 0xb74) == *(int *)(self + 0xb80))) {
    return *(int *)(self + 0xb70) != *(int *)(self + 0xb84);
  }
  return true;
}

