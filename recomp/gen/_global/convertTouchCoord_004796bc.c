/* convertTouchCoord_004796bc @ 0x004796bc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long convertTouchCoord_004796bc(uint64_t gh_a0)
{
  Vec2 * param_1 = (Vec2 *)(uintptr_t)gh_a0;

  *(float *)param_1 = *(float *)param_1 * 0.5;
  *(float *)(param_1 + 4) = (640.0 - *(float *)(param_1 + 4)) * 0.5;
  return 0;
  return 0;
}
