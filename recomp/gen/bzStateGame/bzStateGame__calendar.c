/* bzStateGame::calendar @ 0x003aab80 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a53530
#define DAT_00a53530 (*(undefined1 *)IMG(0x00a53530))
gh_long bzStateGame__calendar(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  undefined4 uVar1;
  gh_long lVar2;
  undefined8 uVar3;
  
  lVar2 = kDate__getSingleton_004797f8();
  uVar3 = *(undefined8 *)(lVar2 + 0xc);
  *(undefined8 *)(self + 0x32bb9c) = uVar3;
  uVar1 = *(undefined4 *)(&DAT_00a53530 + (gh_long)(int)uVar3 * 4);
  *(undefined4 *)(self + 0x32bb98) = *(undefined4 *)(lVar2 + 8);
  *(undefined4 *)(self + 0x32bfb4) = uVar1;
  return 0;
  return 0;
}
