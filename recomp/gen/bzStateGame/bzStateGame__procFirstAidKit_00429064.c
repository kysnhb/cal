/* bzStateGame::procFirstAidKit_00429064 @ 0x00429064 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__procFirstAidKit_00429064(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *__dest;
  ulong uVar6;
  int iVar7;
  uint64_t gh_frame64[16] = {0};   /* 원작 스택 프레임 (SP-0x68 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x68;
#define uStack_68 (*(undefined8 *)(gh_fb - 0x68))
#define local_60 (*(undefined8 *)(gh_fb - 0x60))
#define uStack_58 (*(undefined8 *)(gh_fb - 0x58))
  
  piVar3 = *(int **)(self + 3000);
  if (piVar3 != *(int **)(self + 0xbb0)) {
    uVar6 = 0;
    __dest = *(int **)(self + 0xbb0);
    do {
      iVar7 = 100;
      if (__dest[2] != 1) {
        iVar7 = 300;
      }
      piVar4 = __dest;
      if (__dest[3] < iVar7) {
        __dest[3] = __dest[3] + 1;
        if (*(int *)(self + (gh_long)__dest[1] * 4 + (gh_long)*__dest * 0x2d0 + 0x140598) == 0) {
          piVar1 = __dest + 4;
          *(int *)(self + (gh_long)__dest[1] * 4 + (gh_long)*__dest * 0x2d0 + 0x140598) = 700;
          piVar2 = piVar1;
          if ((piVar1 != piVar3) && (piVar2 = piVar3, (gh_long)piVar3 - (gh_long)piVar1 != 0)) {
            memmove(__dest,piVar1,(gh_long)piVar3 - (gh_long)piVar1);
            piVar2 = *(int **)(self + 3000);
          }
          piVar3 = piVar2 + -4;
          *(int **)(self + 3000) = piVar3;
          puVar5 = &uStack_58;
        }
        else {
          puVar5 = &local_60;
          piVar4 = __dest + 4;
        }
      }
      else {
        piVar1 = __dest + 4;
        *(undefined4 *)(self + (gh_long)__dest[1] * 4 + (gh_long)*__dest * 0x2d0 + 0x140598) = 700;
        piVar2 = piVar1;
        if ((piVar1 != piVar3) && (piVar2 = piVar3, (gh_long)piVar3 - (gh_long)piVar1 != 0)) {
          memmove(__dest,piVar1,(gh_long)piVar3 - (gh_long)piVar1);
          piVar2 = *(int **)(self + 3000);
        }
        piVar3 = piVar2 + -4;
        puVar5 = &uStack_68;
        *(int **)(self + 3000) = piVar3;
      }
      *puVar5 = __dest;
      uVar6 = uVar6 + 1;
      __dest = piVar4;
    } while (uVar6 < (ulong)((gh_long)piVar3 - *(gh_long *)(self + 0xbb0) >> 4));
  }
  return 0;
  return 0;
}
