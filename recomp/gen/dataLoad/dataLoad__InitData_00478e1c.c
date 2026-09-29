/* dataLoad::InitData_00478e1c @ 0x00478e1c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a53810
#define DAT_00a53810 (*(undefined1 *)IMG(0x00a53810))
uint dataLoad__InitData_00478e1c(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gh_a3;

  size_t __n;
  int iVar1;
  char *__nptr;
  uint uVar2;
  size_t __n_00;
  int iVar3;
  
  if (param_3 < 1) {
    uVar2 = 0;
  }
  else {
    iVar3 = 0;
    uVar2 = 0;
    iVar1 = 0;
    do {
      if (param_2[iVar3] == '\n') {
        iVar1 = 0;
      }
      else if (param_2[iVar3] == ',') {
        __nptr = malloc((gh_long)(iVar1 + 1));
        __n_00 = (size_t)iVar1;
        __n = 0;
        if (iVar1 != -1) {
          __n = (gh_long)(iVar1 + 1) - __n_00;
        }
        memset(__nptr + __n_00,0,__n);
        memcpy(__nptr,param_2 + ((gh_long)iVar3 - __n_00),__n_00);
        iVar1 = atoi(__nptr);
        *(int *)(param_4 + (gh_long)(int)uVar2 * 4) = iVar1;
        uVar2 = uVar2 + 1;
        free(__nptr);
        iVar1 = 0;
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar3 < param_3);
  }
  cocos2d__log_005d21e4(GH_ARG(&DAT_00a53810), GH_ARG((ulong)uVar2), GH_ARG((ulong)*(uint *)(param_4 + (gh_long)(int)uVar2 * 4)), GH_ARG(0), GH_ARG(0))
  ;
  return uVar2;
}

