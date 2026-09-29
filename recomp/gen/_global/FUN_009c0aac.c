/* FUN_009c0aac @ 0x009c0aac — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long FUN_009c0aac(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  char param_1 = (char)gh_a0;
  int * param_2 = (int *)(uintptr_t)gh_a1;
  gh_long param_3 = (gh_long)gh_a2;
  gh_long param_4 = (gh_long)gh_a3;

  gh_long lVar1;
  int *piVar2;
  gh_long lVar3;
  int *piVar4;
  gh_long lVar5;
  int *piVar6;
  int *piVar7;
  
  *(gh_long *)(param_2 + 2) = param_3;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  lVar1 = param_4 + 8;
  *param_2 = 0;
  if (param_1 == '\0') {
    *(int **)(param_3 + 0x18) = param_2;
    if (*(gh_long *)(param_4 + 0x18) == param_3) {
      *(int **)(param_4 + 0x18) = param_2;
    }
  }
  else {
    *(int **)(param_3 + 0x10) = param_2;
    if (param_3 == param_4) {
      *(int **)(param_4 + 8) = param_2;
      *(int **)(param_4 + 0x18) = param_2;
    }
    else if (*(gh_long *)(param_4 + 0x10) == param_3) {
      *(int **)(param_4 + 0x10) = param_2;
    }
  }
  piVar4 = *(int **)(param_4 + 8);
  do {
    while( true ) {
      if ((param_2 == piVar4) || (piVar7 = *(int **)(param_2 + 2), *piVar7 != 0)) {
        *piVar4 = 1;
        return 0;
      }
      piVar6 = *(int **)(piVar7 + 2);
      piVar2 = *(int **)(piVar6 + 4);
      if (piVar7 == piVar2) break;
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        piVar4 = piVar7;
        if (*(int **)(piVar7 + 4) == param_2) {
          FUN_009c07ec(GH_ARG(piVar7), GH_ARG(lVar1));
          piVar4 = *(int **)(piVar7 + 2);
          param_2 = piVar7;
        }
        lVar5 = *(gh_long *)(piVar6 + 6);
        *piVar4 = 1;
        *piVar6 = 0;
        lVar3 = *(gh_long *)(lVar5 + 0x10);
        *(gh_long *)(piVar6 + 6) = lVar3;
        if (lVar3 != 0) {
          *(int **)(lVar3 + 8) = piVar6;
        }
        *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(piVar6 + 2);
        if (piVar6 == *(int **)(param_4 + 8)) {
          *(gh_long *)(param_4 + 8) = lVar5;
        }
        else {
          lVar3 = *(gh_long *)(piVar6 + 2);
          if (piVar6 == *(int **)(lVar3 + 0x10)) {
            *(gh_long *)(lVar3 + 0x10) = lVar5;
          }
          else {
            *(gh_long *)(lVar3 + 0x18) = lVar5;
          }
        }
        *(int **)(lVar5 + 0x10) = piVar6;
        *(gh_long *)(piVar6 + 2) = lVar5;
        piVar4 = *(int **)(param_4 + 8);
      }
      else {
LAB_009c0b34:
        *piVar7 = 1;
        *piVar2 = 1;
        *piVar6 = 0;
        param_2 = piVar6;
      }
    }
    piVar2 = *(int **)(piVar6 + 6);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) goto LAB_009c0b34;
    piVar4 = piVar7;
    if (*(int **)(piVar7 + 6) == param_2) {
      FUN_009c078c(GH_ARG(piVar7), GH_ARG(lVar1));
      piVar4 = *(int **)(piVar7 + 2);
      param_2 = piVar7;
    }
    *piVar4 = 1;
    *piVar6 = 0;
    FUN_009c07ec(GH_ARG(piVar6), GH_ARG(lVar1));
    piVar4 = *(int **)(param_4 + 8);
  } while( true );
  return 0;
}
