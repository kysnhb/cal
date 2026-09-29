/* bzStateGame::MapNumBer @ 0x00437dbc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
undefined4 bzStateGame__MapNumBer(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;

  return *(undefined4 *)(self + (gh_long)(param_3 + param_2 * 0x12) * 4 + 0x11c378);
}

