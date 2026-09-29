/* bzStateGame::GetRebirthCheck @ 0x0043a5dc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
int bzStateGame__GetRebirthCheck(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  if (0 < *(int *)(self + 0x32c9ac)) {
    return *(int *)(self + 0x32c46c) % 10;
  }
  if (*(int *)(self + 0x32c854) != 100) {
    if (*(int *)(self + 0x32c854) == 0) {
      return *(int *)(self + 0x32c46c) / 100;
    }
    return 0;
  }
  return (*(int *)(self + 0x32c46c) % 100) / 10;
}

