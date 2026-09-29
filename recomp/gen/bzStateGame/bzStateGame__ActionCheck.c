/* bzStateGame::ActionCheck @ 0x0044ad50 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
bool bzStateGame__ActionCheck(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5, uint64_t gh_a6, uint64_t gh_a7, uint64_t gh_a8)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  float param_2 = gh_b2f(gh_a1);
  float param_3 = gh_b2f(gh_a2);
  float param_4 = gh_b2f(gh_a3);
  float param_5 = gh_b2f(gh_a4);
  float param_6 = gh_b2f(gh_a5);
  float param_7 = gh_b2f(gh_a6);
  float param_8 = gh_b2f(gh_a7);
  float param_9 = gh_b2f(gh_a8);

  int iVar1;
  
  if (param_4 <= param_8) {
    if ((param_2 < param_6) || (param_6 + param_8 <= param_2)) {
      iVar1 = 0;
      if ((param_2 + param_4 <= param_6) || (param_6 + param_8 < param_2 + param_4))
      goto LAB_0044adb8;
    }
LAB_0044adb4:
    iVar1 = 1;
  }
  else {
    if ((param_2 < param_6) && (param_6 < param_2 + param_4)) goto LAB_0044adb4;
    iVar1 = 0;
    if ((param_2 < param_6 + param_8) && (param_6 + param_8 < param_2 + param_4)) goto LAB_0044adb4;
  }
LAB_0044adb8:
  if (param_5 <= param_9) {
    if (((param_3 < param_7) || (param_7 + param_9 <= param_3)) &&
       ((param_3 + param_5 <= param_7 || (param_7 + param_9 < param_3 + param_5))))
    goto LAB_0044ae18;
  }
  else if (((param_7 <= param_3) || (param_3 + param_5 <= param_7)) &&
          ((param_7 + param_9 <= param_3 || (param_3 + param_5 <= param_7 + param_9))))
  goto LAB_0044ae18;
  iVar1 = iVar1 + 1;
LAB_0044ae18:
  return iVar1 == 2;
}

