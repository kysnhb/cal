/* bzStateGame::getRestoreBill @ 0x003abb98 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c70
#define DAT_00d23c70 (*(undefined8 *)IMG(0x00d23c70))
undefined4 bzStateGame__getRestoreBill(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;

  gh_long lVar1;
  int iVar2;
  size_t __n;
  void *__s1;
  undefined4 uVar3;
  undefined4 uVar4;
  gh_long lVar5;
  ulong uVar6;
  
  __s1 = *(void **)param_2;
  lVar5 = 0;
  uVar6 = *(ulong *)((gh_long)__s1 + -0x18);
  uVar3 = 0xffffffff;
  do {
    __n = *(ulong *)((gh_long)(&DAT_00d23c70)[lVar5] + -0x18);
    lVar1 = uVar6 - __n;
    if (uVar6 < __n || lVar1 == 0) {
      __n = uVar6;
    }
    iVar2 = memcmp(__s1,(void *)(&DAT_00d23c70)[lVar5],__n);
    uVar4 = uVar3;
    if ((iVar2 == 0) && (lVar1 < 0x80000000)) {
      iVar2 = (int)lVar1;
      if (lVar1 < -0x7fffffff) {
        iVar2 = -0x80000000;
      }
      uVar4 = (int)lVar5;
      if (iVar2 != 0) {
        uVar4 = uVar3;
      }
    }
    lVar5 = lVar5 + 1;
    uVar3 = uVar4;
  } while (lVar5 != 0x16);
  return uVar4;
}

