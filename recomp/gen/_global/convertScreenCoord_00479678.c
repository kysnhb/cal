/* convertScreenCoord_00479678 @ 0x00479678 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long convertScreenCoord_00479678(uint64_t gh_a0)
{
  Vec2 * param_1 = (Vec2 *)(uintptr_t)gh_a0;

  *(float *)(param_1 + 4) = 640.0 - *(float *)(param_1 + 4);
  return 0;
  return 0;
}
