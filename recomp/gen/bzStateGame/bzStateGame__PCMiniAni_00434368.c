/* bzStateGame::PCMiniAni_00434368 @ 0x00434368 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a497b0
#define DAT_00a497b0 (*(undefined1 *)IMG(0x00a497b0))
#undef DAT_00a497a0
#define DAT_00a497a0 (*(undefined4 *)IMG(0x00a497a0))
gh_long bzStateGame__PCMiniAni_00434368(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4, uint64_t gh_a5)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  int param_4 = (int)gh_a3;
  int param_5 = (int)gh_a4;
  int param_6 = (int)gh_a5;

  int *piVar1;
  int iVar2;
  int iVar3;
  gh_long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  mersenne_twister_engine *pmVar15;
  SoundClip *this;
  uint uVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  gh_long lVar20;
  gh_long lVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  gh_long lVar25;
  int *piVar26;
  uint64_t gh_frame64[25] = {0};   /* 원작 스택 프레임 (SP-0xb0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xb0;
#define local_b0 (*(undefined8 *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
  
  uVar24 = (ulong)(uint)param_5;
  lVar4 = tpidr_el0;
  local_a8 = *(gh_long *)(lVar4 + 0x28);
  uVar23 = 0x3c;
  if ((int)*(uint *)(self + 0x32c8e8) < 0x3e) {
    uVar23 = *(uint *)(self + 0x32c8e8);
  }
  switch(param_4) {
  case 0:
    lVar20 = (gh_long)param_2;
    if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8db14) < 0x15) {
      iVar14 = 0x18;
    }
    else {
      uVar23 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8db14) - 0x16;
      if (uVar23 < 4) {
        iVar14 = (&DAT_00a497a0)[(int)uVar23];
      }
      else {
        iVar14 = 0x32;
      }
    }
    iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dac8);
    iVar12 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
    iVar7 = param_6;
    iVar8 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x32), GH_ARG(iVar14), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(iVar6), GH_ARG(iVar12), GH_ARG(param_6));
    iVar14 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x32), GH_ARG(iVar14), GH_ARG(param_5), GH_ARG(iVar7), GH_ARG(iVar6), GH_ARG(iVar12 + -0x82), GH_ARG(param_6));
    if (iVar8 <= iVar14) {
      iVar14 = iVar8;
    }
    if (((0 < param_2) && (iVar14 < param_5)) &&
       ((*(uint *)(self + lVar20 * 0x288 + 0x8dae0) & 0xfffffffe) != 0x1e)) {
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd48) = 1;
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd40) = 0;
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd24) = 0;
    }
    iVar12 = -iVar14;
    if (param_6 != 0) {
      iVar12 = iVar14;
    }
    iVar7 = -iVar14;
    if (param_6 == 0) {
      iVar7 = iVar14;
    }
    if (param_5 < 0) {
      iVar7 = iVar12;
    }
    *(int *)(self + lVar20 * 0x288 + 0x8dac8) = iVar7 + iVar6;
    if (*(int *)(self + 0x32ba2c) == param_2) {
      *(int *)(self + 0x32ba30) = iVar14;
    }
    break;
  case 1:
    if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8db14) < 0x15) {
      iVar14 = 0x18;
    }
    else {
      uVar23 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8db14) - 0x16;
      if (uVar23 < 4) {
        iVar14 = *(int *)(&DAT_00a497b0 + (gh_long)(int)uVar23 * 4);
      }
      else {
        iVar14 = 0x32;
      }
    }
    iVar6 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8);
    iVar12 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc);
    iVar7 = param_6;
    iVar8 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x32), GH_ARG(iVar14), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(iVar6), GH_ARG(iVar12), GH_ARG((uint)(param_6 == 0)));
    iVar14 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x32), GH_ARG(iVar14), GH_ARG(param_5), GH_ARG(iVar7), GH_ARG(iVar6), GH_ARG(iVar12 + -0x82), GH_ARG((uint)(param_6 == 0)));
    if (iVar8 <= iVar14) {
      iVar14 = iVar8;
    }
    iVar12 = -iVar14;
    if (param_6 != 0) {
      iVar12 = iVar14;
    }
    *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8) = iVar12 + iVar6;
    if (*(int *)(self + 0x32ba2c) == param_2) {
      *(int *)(self + 0x32ba30) = iVar14;
    }
    break;
  case 2:
    if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8db14) == 0x16) break;
    lVar20 = (gh_long)param_2;
    iVar12 = *(int *)(self + 0x32ba20);
    iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dac8);
    iVar7 = *(int *)(self + 0x32ba24);
    iVar8 = *(int *)(self + lVar20 * 0x288 + 0x8dacc);
    iVar13 = *(int *)(self + 0x32ba14);
    iVar14 = iVar12 + iVar6;
    iVar9 = 0;
    if (iVar13 != 0) {
      iVar9 = iVar14 / iVar13;
    }
    iVar2 = 0;
    if (iVar13 != 0) {
      iVar2 = (iVar7 + iVar8) / iVar13;
    }
    if ((0 < *(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378)))
    break;
    iVar9 = 0;
    if (iVar13 != 0) {
      iVar9 = (iVar14 + -0x14) / iVar13;
    }
    if ((0 < *(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378)))
    break;
    iVar9 = 0;
    if (iVar13 != 0) {
      iVar9 = (iVar14 + 0x14) / iVar13;
    }
    if ((0 < *(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598)) &&
       (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378)))
    break;
    iVar14 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
    if (*(int *)(self + lVar20 * 0x288 + 0x8dba0) < 0) {
      if (iVar14 != 0) {
        if (iVar14 == 1) {
          iVar9 = 0;
          if (iVar13 != 0) {
            iVar9 = (iVar6 + iVar12 + 0x46) / iVar13;
          }
          iVar12 = 0;
          if (iVar13 != 0) {
            iVar12 = (iVar8 + iVar7 + -10) / iVar13;
          }
          if ((*(int *)(self + (gh_long)iVar12 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar12 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) goto LAB_004376dc;
        }
        goto LAB_00437494;
      }
      iVar9 = 0;
      if (iVar13 != 0) {
        iVar9 = (iVar6 + iVar12 + -0x46) / iVar13;
      }
      iVar12 = 0;
      if (iVar13 != 0) {
        iVar12 = (iVar8 + iVar7 + -10) / iVar13;
      }
      if ((0 < *(int *)(self + (gh_long)iVar12 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar12 * 4 + (gh_long)iVar9 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_00434de0;
LAB_004376dc:
      iVar12 = 0x14;
      if (iVar14 == 0) {
        iVar12 = -0x14;
      }
    }
    else if (iVar14 == 0) {
LAB_00434de0:
      iVar12 = 0x14;
    }
    else {
LAB_00437494:
      iVar12 = -0x14;
    }
    *(int *)(self + lVar20 * 0x288 + 0x8dac8) = iVar12 + iVar6;
    *(undefined8 *)(self + lVar20 * 0x288 + 0x8dae0) = 0x2000000041;
    *(int *)(self + lVar20 * 0x288 + 0x8dd08) = param_5;
LAB_00437720:
    bzStateGame__PAniinit2_0041fec0(GH_ARG(self), GH_ARG(3), GH_ARG(param_2), GH_ARG(param_5));
    break;
  case 3:
    lVar20 = (gh_long)param_2;
    if (param_5 < 0) {
      piVar17 = (int *)(self + lVar20 * 0x288 + 0x8dacc);
      iVar14 = *piVar17;
      iVar6 = 0;
    }
    else {
      iVar12 = *(int *)(self + 0x32ba14);
      piVar17 = (int *)(self + lVar20 * 0x288 + 0x8dacc);
      iVar14 = *piVar17;
      iVar6 = *(int *)(self + 0x32ba20) + *(int *)(self + lVar20 * 0x288 + 0x8dac8);
      iVar7 = 0;
      if (iVar12 != 0) {
        iVar7 = iVar6 / iVar12;
      }
      iVar8 = 0;
      if (iVar12 != 0) {
        iVar8 = (iVar6 + -0x14) / iVar12;
      }
      iVar13 = 0;
      if (iVar12 != 0) {
        iVar13 = (iVar6 + 0x14) / iVar12;
      }
      iVar9 = 0;
      while( true ) {
        iVar2 = 0;
        if (iVar12 != 0) {
          iVar2 = (iVar14 + *(int *)(self + 0x32ba24) + iVar9) / iVar12;
        }
        iVar6 = iVar9;
        if ((0 < *(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar7 * 0x2d0 + 0x140598)) &&
           (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar7 * 0x2d0
                                                               + 0x140598) * 0x12 | 1) * 4 +
                                   0x11c378))) break;
        if (((0 < *(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598)) &&
            (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 +
                                                                (gh_long)iVar8 * 0x2d0 + 0x140598) *
                                                0x12 | 1) * 4 + 0x11c378))) ||
           (((0 < *(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) &&
             (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 +
                                                                 (gh_long)iVar13 * 0x2d0 + 0x140598) *
                                                 0x12 | 1) * 4 + 0x11c378))) ||
            (iVar6 = iVar9 + 1, bVar5 = param_5 <= iVar9, iVar9 = iVar6, bVar5)))) break;
      }
    }
    iVar14 = iVar14 + iVar6;
    *piVar17 = iVar14;
    if ((*(int *)(self + lVar20 * 0x288 + 0x8dae0) == 0x41) ||
       (*(int *)(self + (gh_long)*(int *)(self + lVar20 * 0x288 + 0x8dd08) * 4 + lVar20 * 0x288 +
                        0x8dc90) != 999)) {
LAB_00436428:
      if (iVar6 + 1 != param_5) {
        iVar7 = *(int *)(self + 0x32ba14);
        iVar12 = *(int *)(self + 0x32ba20) + *(int *)(self + lVar20 * 0x288 + 0x8dac8);
        iVar8 = 0;
        if (iVar7 != 0) {
          iVar8 = iVar12 / iVar7;
        }
        iVar13 = 0;
        if (iVar7 != 0) {
          iVar13 = (iVar14 + *(int *)(self + 0x32ba24) + -1) / iVar7;
        }
        if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          iVar9 = 0;
          if (iVar7 != 0) {
            iVar9 = (iVar12 + -0x14) / iVar7;
          }
          if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar9 = 0;
            if (iVar7 != 0) {
              iVar9 = (iVar12 + 0x14) / iVar7;
            }
            if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                            0x140598) * 0x12 | 1) * 4 + 0x11c378) <
                0x32)) goto LAB_00437168;
          }
        }
        iVar6 = 0;
        if (iVar7 != 0) {
          iVar6 = (iVar12 + -0x14) / iVar7;
        }
        iVar13 = 0;
        if (iVar7 != 0) {
          iVar13 = (iVar12 + 0x14) / iVar7;
        }
        iVar12 = *(int *)(self + 0x32ba24) + -2;
        uVar23 = 1;
        do {
          iVar9 = 0;
          if (iVar7 != 0) {
            iVar9 = (iVar14 + iVar12) / iVar7;
          }
          if ((*(int *)(self + (gh_long)iVar9 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar9 * 4 + (gh_long)iVar8 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            if (((*(int *)(self + (gh_long)iVar9 * 4 + (gh_long)iVar6 * 0x2d0 + 0x140598) < 1) ||
                (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar9 * 4 + (gh_long)iVar6 * 0x2d0 +
                                                             0x140598) * 0x12 | 1) * 4 + 0x11c378) <
                 0x32)) &&
               ((*(int *)(self + (gh_long)iVar9 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1 ||
                (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar9 * 4 + (gh_long)iVar13 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
                 < 0x32)))) {
              *piVar17 = iVar14 - uVar23;
              iVar6 = 1000;
              goto LAB_00437168;
            }
          }
          uVar23 = uVar23 + 1;
          iVar12 = iVar12 + -1;
        } while (uVar23 < 99);
        if (*(int *)(self + lVar20 * 0x288 + 0x8db14) == 0x17) {
          iVar14 = 0xaa;
        }
        else {
          iVar14 = 0x3d;
        }
        bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar14), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8dad8)), GH_ARG(param_5));
        iVar6 = 100;
      }
    }
    else {
      iVar7 = *(int *)(self + 0x32ba14);
      iVar12 = *(int *)(self + 0x32ba20) + *(int *)(self + lVar20 * 0x288 + 0x8dac8);
      iVar8 = 0;
      if (iVar7 != 0) {
        iVar8 = iVar12 / iVar7;
      }
      iVar13 = 0;
      if (iVar7 != 0) {
        iVar13 = (iVar14 + *(int *)(self + 0x32ba24) + 0x14) / iVar7;
      }
      if ((0 < *(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_00436428;
      iVar8 = 0;
      if (iVar7 != 0) {
        iVar8 = (iVar12 + -0x14) / iVar7;
      }
      if ((0 < *(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_00436428;
      iVar8 = 0;
      if (iVar7 != 0) {
        iVar8 = (iVar12 + 0x14) / iVar7;
      }
      if ((0 < *(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598)) &&
         (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0
                                                             + 0x140598) * 0x12 | 1) * 4 + 0x11c378)
         )) goto LAB_00436428;
      *(int *)(self + lVar20 * 0x288 + 0x8dae8) = iVar14 + -1;
    }
LAB_00437168:
    if (*(int *)(self + 0x32ba2c) != param_2) break;
    iVar14 = 0x20;
    if (iVar6 < 0x1f5) {
      iVar14 = iVar6;
    }
    goto LAB_00437188;
  case 4:
    lVar20 = (gh_long)param_2;
    if (param_5 < 1) {
      piVar17 = (int *)(self + lVar20 * 0x288 + 0x8dacc);
      iVar6 = *piVar17;
      iVar14 = 0;
    }
    else {
      iVar7 = *(int *)(self + 0x32ba14);
      piVar17 = (int *)(self + lVar20 * 0x288 + 0x8dacc);
      iVar14 = *(int *)(self + 0x32ba20) + *(int *)(self + lVar20 * 0x288 + 0x8dac8);
      iVar6 = *piVar17;
      iVar12 = -300;
      if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8db14) != 0x16) {
        iVar12 = -0x8c;
      }
      iVar8 = 0;
      if (iVar7 != 0) {
        iVar8 = iVar14 / iVar7;
      }
      iVar13 = -0xdc;
      if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8db14) != 0x17) {
        iVar13 = iVar12;
      }
      iVar12 = 0;
      if (iVar7 != 0) {
        iVar12 = (iVar14 + -0x14) / iVar7;
      }
      iVar9 = 0;
      if (iVar7 != 0) {
        iVar9 = (iVar14 + 0x14) / iVar7;
      }
      iVar14 = 0;
      iVar13 = iVar13 + iVar6 + *(int *)(self + 0x32ba24);
      do {
        iVar2 = 0;
        if (iVar7 != 0) {
          iVar2 = iVar13 / iVar7;
        }
        if ((*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598) < 1) ||
           (iVar10 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 +
                                                                 (gh_long)iVar8 * 0x2d0 + 0x140598) *
                                                 0x12 | 1) * 4 + 0x11c378), iVar10 < 0x32)) {
          if (((0 < *(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar12 * 0x2d0 + 0x140598)) &&
              (iVar10 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 +
                                                                    (gh_long)iVar12 * 0x2d0 + 0x140598)
                                                    * 0x12 | 1) * 4 + 0x11c378), 0x31 < iVar10)) ||
             ((0 < *(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) &&
              (iVar10 = *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 +
                                                                    (gh_long)iVar9 * 0x2d0 + 0x140598)
                                                    * 0x12 | 1) * 4 + 0x11c378), 0x31 < iVar10))))
          goto LAB_00434840;
        }
        else {
LAB_00434840:
          if (0x32 < iVar10) break;
        }
        iVar14 = iVar14 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar14 < param_5);
    }
    *piVar17 = iVar6 - iVar14;
    if (*(int *)(self + 0x32ba2c) != param_2) break;
LAB_00437188:
    *(int *)(self + 0x32ba34) = iVar14;
    break;
  case 10:
    iVar14 = *(int *)(self + (gh_long)param_2 * 0x50 + 0xb0cb8);
    iVar6 = bzStateGame__Txchaki_00438f70(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x31), GH_ARG(0), GH_ARG(param_5), GH_ARG(param_6), GH_ARG(iVar14), GH_ARG(*(int *)(self + (gh_long)param_2 * 0x50 + 0xb0cbc)), GH_ARG(param_6));
    if (param_5 < 0) {
      iVar12 = -iVar6;
      if (param_6 != 0) {
        iVar12 = iVar6;
      }
    }
    else {
      iVar12 = iVar6;
      if (param_6 != 0) {
        iVar12 = -iVar6;
      }
    }
    *(int *)(self + (gh_long)param_2 * 0x50 + 0xb0cb8) = iVar12 + iVar14;
    break;
  case 0xb:
    iVar12 = *(int *)(self + 0x32ba14);
    iVar7 = *(int *)(self + 0x32ba24);
    iVar6 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc);
    iVar14 = *(int *)(self + 0x32ba20) + *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8);
    iVar8 = 0;
    if (iVar12 != 0) {
      iVar8 = iVar14 / iVar12;
    }
    iVar13 = 0;
    if (iVar12 != 0) {
      iVar13 = (iVar7 + iVar6) / iVar12;
    }
    lVar20 = (gh_long)param_2;
    if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598) < 1) ||
       (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0 +
                                                    0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32)) {
      iVar9 = 0;
      if (iVar12 != 0) {
        iVar9 = (iVar14 + -0x14) / iVar12;
      }
      if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar9 = 0;
        if (iVar12 != 0) {
          iVar9 = (iVar14 + 0x14) / iVar12;
        }
        if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          *(undefined8 *)(self + lVar20 * 0x288 + 0x8dae0) = 0x2000000041;
          *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd08) = 0x17;
          param_5 = 0x17;
          goto LAB_00437720;
        }
      }
    }
    iVar13 = 0;
    if (iVar12 != 0) {
      iVar13 = (iVar6 + iVar7 + -1) / iVar12;
    }
    if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598) < 1) ||
       (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar8 * 0x2d0 +
                                                    0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32)) {
      iVar9 = 0;
      if (iVar12 != 0) {
        iVar9 = (iVar14 + -0x14) / iVar12;
      }
      if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
      {
        iVar9 = 0;
        if (iVar12 != 0) {
          iVar9 = (iVar14 + 0x14) / iVar12;
        }
        if ((*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar13 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) break;
      }
    }
    if (1 < param_5) {
      iVar13 = 0;
      if (iVar12 != 0) {
        iVar13 = (iVar14 + -0x14) / iVar12;
      }
      iVar9 = 0;
      if (iVar12 != 0) {
        iVar9 = (iVar14 + 0x14) / iVar12;
      }
      iVar7 = iVar7 + -2;
      iVar14 = 1;
      do {
        iVar2 = 0;
        if (iVar12 != 0) {
          iVar2 = (iVar6 + iVar7) / iVar12;
        }
        if ((*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar8 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) {
          if (((*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
              (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378) <
               0x32)) &&
             ((*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar9 * 0x2d0 + 0x140598) < 1 ||
              (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar2 * 4 + (gh_long)iVar9 * 0x2d0 +
                                                           0x140598) * 0x12 | 1) * 4 + 0x11c378) <
               0x32)))) {
            *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc) = iVar6 - iVar14;
            goto switchD_004343f4_caseD_5;
          }
        }
        iVar14 = iVar14 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar14 < param_5);
      if (0x3e6 < iVar14) break;
    }
    if (*(int *)(self + lVar20 * 0x288 + 0x8db14) == 0x17) {
      iVar14 = 0xaa;
    }
    else {
      iVar14 = 0x3d;
    }
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(iVar14), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8dad8)), GH_ARG(param_5));
    break;
  case 0xc:
    iVar7 = *(int *)(self + 0x32ba24);
    iVar14 = *(int *)(self + 0x32ba20);
    iVar6 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc);
    iVar12 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8);
    iVar8 = *(int *)(self + 0x32ba14);
    iVar13 = 0;
    if (iVar8 != 0) {
      iVar13 = (iVar14 + iVar12) / iVar8;
    }
    iVar9 = 0;
    if (iVar8 != 0) {
      iVar9 = (iVar6 + iVar7 + 0x32) / iVar8;
    }
    if ((((*(int *)(self + (gh_long)iVar9 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598) < 1) ||
         (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar9 * 4 + (gh_long)iVar13 * 0x2d0 +
                                                      0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32))
        && (lVar20 = (gh_long)param_2, 1 < *(int *)(self + lVar20 * 0x288 + 0x8daec))) &&
       (*(int *)(self + lVar20 * 0x288 + 0x8db14) < 0x15)) {
      if (param_6 == 0) {
        iVar9 = iVar7 + (iVar6 - param_5);
        iVar2 = 0;
        if (iVar8 != 0) {
          iVar2 = (iVar14 + iVar12 + param_3) / iVar8;
        }
        iVar10 = 0;
        if (iVar8 != 0) {
          iVar10 = iVar9 / iVar8;
        }
        if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar2 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar2 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) break;
        iVar11 = 0;
        if (iVar8 != 0) {
          iVar11 = ((iVar6 - param_5) + iVar7 + -0x20) / iVar8;
        }
        if ((0 < *(int *)(self + (gh_long)iVar11 * 4 + (gh_long)iVar2 * 0x2d0 + 0x140598)) &&
           (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar11 * 4 +
                                                               (gh_long)iVar2 * 0x2d0 + 0x140598) *
                                               0x12 | 1) * 4 + 0x11c378))) break;
        if ((0 < *(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598)) &&
           (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 +
                                                               (gh_long)iVar13 * 0x2d0 + 0x140598) *
                                               0x12 | 1) * 4 + 0x11c378))) break;
        uVar23 = 0xffffffff;
        do {
          uVar16 = (uint)uVar24;
          iVar7 = 0;
          if (iVar8 != 0) {
            iVar7 = (iVar12 + iVar14 + param_3) / iVar8;
          }
          if (*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar7 * 0x2d0 + 0x140598) < 1)
          goto LAB_004373c8;
          uVar16 = *(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar7 * 0x2d0 + 0x140598) * 0x12 | 1;
          uVar24 = (ulong)uVar16;
          if (*(int *)(self + (gh_long)(int)uVar16 * 4 + 0x11c378) < 0x32) goto LAB_004373c8;
          uVar23 = uVar23 + 1;
          param_3 = param_3 + -1;
        } while (uVar23 < 99);
        param_3 = 0;
LAB_004373c8:
        uVar23 = 0xffffffff;
        do {
          uVar22 = uVar23;
          iVar14 = 0;
          if (iVar8 != 0) {
            iVar14 = iVar9 / iVar8;
          }
          if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar2 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar2 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar14 = param_5 + uVar22;
            goto LAB_00437880;
          }
          iVar9 = iVar9 + -1;
          uVar23 = uVar22 + 1;
        } while (uVar22 + 1 < 99);
        iVar14 = uVar22 + 2;
      }
      else {
        iVar14 = iVar14 + (iVar12 - param_3);
        iVar9 = iVar7 + (iVar6 - param_5);
        iVar2 = 0;
        if (iVar8 != 0) {
          iVar2 = iVar14 / iVar8;
        }
        iVar10 = 0;
        if (iVar8 != 0) {
          iVar10 = iVar9 / iVar8;
        }
        if ((*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar2 * 0x2d0 + 0x140598) < 1) ||
           (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar2 * 0x2d0 +
                                                        0x140598) * 0x12 | 1) * 4 + 0x11c378) < 0x32
           )) break;
        iVar11 = 0;
        if (iVar8 != 0) {
          iVar11 = ((iVar6 - param_5) + iVar7 + -0x20) / iVar8;
        }
        if ((0 < *(int *)(self + (gh_long)iVar11 * 4 + (gh_long)iVar2 * 0x2d0 + 0x140598)) &&
           (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar11 * 4 +
                                                               (gh_long)iVar2 * 0x2d0 + 0x140598) *
                                               0x12 | 1) * 4 + 0x11c378))) break;
        if ((0 < *(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar13 * 0x2d0 + 0x140598)) &&
           (0x31 < *(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar10 * 4 +
                                                               (gh_long)iVar13 * 0x2d0 + 0x140598) *
                                               0x12 | 1) * 4 + 0x11c378))) break;
        uVar23 = 0;
        do {
          uVar16 = (uint)uVar24;
          iVar7 = 0;
          if (iVar8 != 0) {
            iVar7 = (int)(iVar14 + uVar23) / iVar8;
          }
          if (*(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar7 * 0x2d0 + 0x140598) < 1) {
LAB_00437768:
            iVar7 = param_3 - uVar23;
            goto LAB_0043776c;
          }
          uVar16 = *(int *)(self + (gh_long)iVar10 * 4 + (gh_long)iVar7 * 0x2d0 + 0x140598) * 0x12 | 1;
          uVar24 = (ulong)uVar16;
          if (*(int *)(self + (gh_long)(int)uVar16 * 4 + 0x11c378) < 0x32) goto LAB_00437768;
          bVar5 = uVar23 < 99;
          uVar23 = uVar23 + 1;
        } while (bVar5);
        iVar7 = 0;
LAB_0043776c:
        uVar23 = 0xffffffff;
        do {
          uVar22 = uVar23;
          iVar14 = 0;
          if (iVar8 != 0) {
            iVar14 = iVar9 / iVar8;
          }
          if ((*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar2 * 0x2d0 + 0x140598) < 1) ||
             (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar14 * 4 + (gh_long)iVar2 * 0x2d0 +
                                                          0x140598) * 0x12 | 1) * 4 + 0x11c378) <
              0x32)) {
            iVar14 = param_5 + uVar22;
            goto LAB_004377d4;
          }
          iVar9 = iVar9 + -1;
          uVar23 = uVar22 + 1;
        } while (uVar22 + 1 < 99);
        iVar14 = uVar22 + 2;
LAB_004377d4:
        param_3 = -iVar7;
      }
LAB_00437880:
      *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc) = iVar6 - iVar14;
      *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8) = iVar12 + param_3;
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x31), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8dad8)), GH_ARG(uVar16));
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd48) = 0;
    }
    break;
  case 0xd:
    if (1 < *(int *)(self + 0x32b824)) {
      lVar25 = 0x8dd50;
      lVar20 = 0x8dd68;
      lVar21 = 1;
      do {
        if ((((1 < *(int *)(self + lVar25 + 0x24)) && (*(int *)(self + lVar20) < 0x1e)) &&
            (*(int *)(self + 0x8daf0) != 0x159)) &&
           ((iVar14 = *(int *)(self + lVar25 + 4), *(int *)(self + 0x8dacc) < iVar14 + -0x50 &&
            (*(int *)(self + lVar25 + 0x274) != 0x30)))) {
          iVar6 = *(int *)(self + lVar25);
          if (((iVar6 + param_2 + -0x13 < param_3) &&
              ((param_3 < iVar6 + param_2 + 0x13 && (iVar14 + -0x7c < param_5)))) &&
             (param_5 < iVar14 + -4)) {
            if (param_6 == 1) {
              if (*(int *)(self + 0x8dac8) < iVar6) goto LAB_004378f4;
            }
            else if ((param_6 == 0) && (iVar6 < *(int *)(self + 0x8dac8))) {
LAB_004378f4:
              if (*(int *)(self + lVar25 + 0x4c) - 1U < 0xc) {
                *(undefined4 *)(self + lVar25 + 0x240) = 0;
                *(int *)(self + lVar25 + 0x20) = iVar14;
                *(undefined8 *)(self + lVar20) = 0xffffffde0000001e;
                *(undefined4 *)(self + lVar25 + 0x248) = 2;
                break;
              }
              switch(*(int *)(self + lVar25 + 0x4c)) {
              case 0x15:
                iVar14 = 0xa6;
                break;
              default:
                if ((param_6 == 1) && (*(int *)(self + lVar25 + 0x10) == 0)) {
                  iVar14 = 0x59;
                  param_6 = 1;
                }
                else {
                  iVar14 = 0x5a;
                }
                bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG((int)lVar21), GH_ARG(iVar14), GH_ARG(param_6), GH_ARG(param_5));
                *(undefined4 *)(self + lVar25 + 0x280) = 0;
                goto switchD_004343f4_caseD_5;
              case 0x17:
                iVar14 = 0xaa;
                break;
              case 0x18:
                iVar14 = 0xb5;
                break;
              case 0x19:
                iVar14 = 0xbc;
              }
              bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG((int)lVar21), GH_ARG(iVar14), GH_ARG(param_6), GH_ARG(param_5));
              break;
            }
          }
        }
        lVar21 = lVar21 + 1;
        lVar25 = lVar25 + 0x288;
        lVar20 = lVar20 + 0x288;
      } while (lVar21 < *(int *)(self + 0x32b824));
    }
    break;
  case 0xe:
    iVar14 = *(int *)(self + 0x32c134);
    if (1 < iVar14) {
      lVar25 = 0x8dd50;
      lVar21 = 1;
      lVar20 = 0x8dd60;
      do {
        if ((((1 < *(int *)(self + lVar25 + 0x24)) && (*(int *)(self + lVar20) == 0)) &&
            (*(int *)(self + lVar25 + 0x18) < 0x1e)) &&
           (((iVar6 = *(int *)(self + lVar25), iVar6 + -0x28 < param_3 && (param_3 < iVar6 + 0x28))
            && ((iVar12 = *(int *)(self + lVar25 + 4), iVar12 + -0x50 < param_5 + 0x40 &&
                (param_5 < iVar12 + 0x10)))))) {
          if (*(int *)(self + lVar25 + 0x4c) - 1U < 0xc) {
            *(undefined4 *)(self + lVar25 + 0x240) = 0;
            *(int *)(self + lVar25 + 0x20) = iVar12;
            *(undefined4 *)(self + lVar25 + 0x248) = 0x12;
            *(undefined8 *)((gh_long)(self + lVar20) + 8) = 0xffffffde0000001e;
            *(undefined8 *)(self + lVar20) = 0;
          }
          else {
            iVar7 = *(int *)(self + 0x32ba14);
            iVar8 = 0;
            if (iVar7 != 0) {
              iVar8 = (iVar6 + *(int *)(self + 0x32ba20) + 0x40) / iVar7;
            }
            iVar6 = 0;
            if (iVar7 != 0) {
              iVar6 = (iVar12 + *(int *)(self + 0x32ba24) + -0x122) / iVar7;
            }
            if ((*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar8 * 0x2d0 +
                                                            0x140598) * 0x12 | 1) * 4 + 0x11c378) <
                0x32)) {
              bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG((int)lVar21), GH_ARG(0x26), GH_ARG(0), GH_ARG((int)uVar24));
              iVar14 = *(int *)(self + 0x32c134);
            }
            *(undefined4 *)(self + lVar25 + 0x280) = 0;
          }
        }
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0x288;
        lVar25 = lVar25 + 0x288;
      } while (lVar21 < iVar14);
    }
    break;
  case 0xf:
    iVar14 = *(int *)(self + 0x32c134);
    if (1 < iVar14) {
      lVar25 = 0x8dd50;
      lVar21 = 1;
      lVar20 = 0x8dd60;
      do {
        if ((((1 < *(int *)(self + lVar25 + 0x24)) && (*(int *)(self + lVar20) == 1)) &&
            (*(int *)(self + lVar25 + 0x18) < 0x1e)) &&
           (((iVar6 = *(int *)(self + lVar25), iVar6 + -0x28 < param_3 && (param_3 < iVar6 + 0x28))
            && ((iVar12 = *(int *)(self + lVar25 + 4), iVar12 + -0x50 < param_5 + 0x40 &&
                (param_5 < iVar12 + 0x10)))))) {
          if (*(int *)(self + lVar25 + 0x4c) - 1U < 0xc) {
            *(undefined4 *)(self + lVar25 + 0x240) = 0;
            *(int *)(self + lVar25 + 0x20) = iVar12;
            *(undefined4 *)(self + lVar25 + 0x248) = 0x12;
            *(undefined8 *)((gh_long)(self + lVar20) + 8) = 0xffffffde0000001e;
            *(undefined8 *)(self + lVar20) = 0x100000001;
          }
          else {
            iVar7 = *(int *)(self + 0x32ba14);
            iVar8 = 0;
            if (iVar7 != 0) {
              iVar8 = (iVar6 + *(int *)(self + 0x32ba20) + -0x40) / iVar7;
            }
            iVar6 = 0;
            if (iVar7 != 0) {
              iVar6 = (iVar12 + *(int *)(self + 0x32ba24) + -0x122) / iVar7;
            }
            if ((*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar8 * 0x2d0 + 0x140598) < 1) ||
               (*(int *)(self + (gh_long)(int)(*(int *)(self + (gh_long)iVar6 * 4 + (gh_long)iVar8 * 0x2d0 +
                                                            0x140598) * 0x12 | 1) * 4 + 0x11c378) <
                0x32)) {
              bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG((int)lVar21), GH_ARG(0x26), GH_ARG(1), GH_ARG((int)uVar24));
              iVar14 = *(int *)(self + 0x32c134);
            }
            *(undefined4 *)(self + lVar25 + 0x280) = 0;
          }
        }
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0x288;
        lVar25 = lVar25 + 0x288;
      } while (lVar21 < iVar14);
    }
    break;
  case 0x10:
    uVar24 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar23 << 2;
    *(int *)(self + 0x32c910) = *(int *)(self + 0x32c910) + 1;
    bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(*(int *)((gh_long)(self + 0x8d35c) + uVar24) * *(int *)(self + 0x8d35c)));
    bzStateGame__PEXP_0043b314(GH_ARG(self), GH_ARG(*(int *)((gh_long)(self + 0x8d454) + uVar24) * *(int *)(self + 0x8d454)));
    break;
  case 0x11:
    iVar14 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dd14);
    lVar20 = (gh_long)param_2;
    if (0 < iVar14) {
      *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dd14) = iVar14 + -1;
      iVar14 = iVar14 + -1;
    }
    iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dd18);
    if (iVar6 != 0xaa) {
      iVar12 = 1;
      if (0xaa < iVar6) {
        iVar12 = -1;
      }
      iVar6 = iVar12 + iVar6;
      *(int *)(self + lVar20 * 0x288 + 0x8dd18) = iVar6;
    }
    iVar12 = *(int *)(self + lVar20 * 0x288 + 0x8dd1c);
    if (iVar12 != 5) {
      iVar7 = 1;
      if (5 < iVar12) {
        iVar7 = -1;
      }
      iVar12 = iVar7 + iVar12;
      *(int *)(self + lVar20 * 0x288 + 0x8dd1c) = iVar12;
    }
    if (((iVar14 != 0) || (iVar6 != 0xaa)) || (iVar12 != 5)) break;
    *(int *)(self + lVar20 * 0x288 + 0x8db1c) = 0;
    piVar17 = (int *)(self + lVar20 * 0x288 + 0x8dd4c);
    iVar14 = *piVar17;
    if (iVar14 == 0) {
      piVar26 = (int *)(self + lVar20 * 0x288 + 0x8daec);
      iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(100), GH_ARG(0x14), GH_ARG(0), GH_ARG(iVar6), GH_ARG(*(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8)), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8dacc)), GH_ARG(*piVar26), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8db04)), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8db04)), GH_ARG(0x21), GH_ARG(1.1), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8db10)), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8db0c)), GH_ARG(0x20a));
    }
    else {
      if (*(int *)(self + lVar20 * 0x288 + 0x8db10) == 3) {
        iVar14 = 3;
        *piVar17 = 3;
      }
      lVar25 = (gh_long)iVar14 * 0x28;
      lVar21 = (gh_long)(int)uVar23 * 4;
      iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8dad8);
      bzStateGame__initPimg_0043215c(GH_ARG(self), GH_ARG(100), GH_ARG(0x14), GH_ARG(0), GH_ARG(iVar6), GH_ARG(*(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8)), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8dacc)), GH_ARG(*(int *)(self + lVar21 + 0x8d54c) + *(int *)(self + lVar25 + 0x1400c)), GH_ARG(*(int *)(self + lVar21 + 0x8d644) + *(int *)(self + lVar25 + 0x14010)), GH_ARG(*(int *)(self + lVar21 + 0x8d73c) + *(int *)(self + lVar25 + 0x14014)), GH_ARG(0x21), GH_ARG(1.1), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8db10)), GH_ARG(*(int *)(self + lVar20 * 0x288 + 0x8db0c)), GH_ARG(iVar14 + 0x212));
      piVar26 = (int *)(self + lVar20 * 0x288 + 0x8daec);
    }
    *piVar26 = 0;
    if (param_2 != 0) break;
    piVar1 = (int *)(self + 0x32c15c);
    iVar14 = *piVar1;
    if (0 < iVar14) {
      *(undefined4 *)(self + 0x8db1c) = 0;
      *(undefined4 *)(self + 0x8dd1c) = 0;
      *(undefined8 *)(self + 0x8dd14) = 0;
      if (0 < *(int *)(self + 0x8daec)) {
        *(undefined4 *)(self + 0x8dda4) = 0;
        *(undefined8 *)(self + 0x8df9c) =
             *(undefined8 *)(self + (gh_long)*(int *)(self + 0x8dfa8) * 0x10 + 0x8cb70);
        *(undefined4 *)(self + 0x8dfa4) =
             *(undefined4 *)((gh_long)(self + (gh_long)*(int *)(self + 0x8dfa8) * 0x10 + 0x8cb70) + 8);
        *(undefined4 *)(self + 0x8e02c) = 0;
        puVar19 = (undefined4 *)(self + (gh_long)*(int *)(self + 0x8e230) * 0x10 + 0x8cb70);
        *(undefined4 *)(self + 0x8e224) = *puVar19;
        *(undefined4 *)(self + 0x8e228) = puVar19[1];
        *(undefined4 *)(self + 0x8e22c) = puVar19[2];
        *(undefined4 *)(self + 0x8e2b4) = 0;
        *(undefined8 *)(self + 0x8e4ac) =
             *(undefined8 *)(self + (gh_long)*(int *)(self + 0x8e4b8) * 0x10 + 0x8cb70);
        *(undefined4 *)(self + 0x8e4b4) =
             *(undefined4 *)((gh_long)(self + (gh_long)*(int *)(self + 0x8e4b8) * 0x10 + 0x8cb70) + 8);
      }
      if (*(int *)(self + 0x32c134) <= *(int *)(self + lVar20 * 0x288 + 0x8db1c)) {
        iVar6 = 0;
        bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x17), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        iVar14 = *piVar1;
      }
      *piVar1 = iVar14 + -10;
      *piVar26 = *(int *)(self + 0x32c170);
      *(undefined4 *)(self + 0x8dd3c) = 0;
      *piVar17 = 0;
      if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
         ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
          ((-0x1e < *(int *)(self + 0x8dacc) &&
           (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1350)), GH_ARG(false));
      }
      if (*(int *)(self + 0x8db14) < 0x14) {
        iVar14 = *(int *)(self + 0x8dad8);
        iVar12 = 0x15;
      }
      else {
        iVar12 = 0xa8;
        *(int *)(self + 0x8dacc) = *(int *)(self + 0x8dacc) + -100;
        iVar14 = *(int *)(self + 0x8dad8);
      }
      bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar12), GH_ARG(iVar14), GH_ARG(iVar6));
      break;
    }
    if ((((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
        (*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96)) &&
       ((-0x1e < *(int *)(self + 0x8dacc) &&
        (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))) {
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1680)), GH_ARG(false));
    }
    *(undefined4 *)(self + 0x32c8bc) = 0;
    *(undefined4 *)(self + 0x1ae8) = 0x14;
    *(undefined4 *)(self + 0xc28) = 1;
    if (*(int *)(self + 0x32c9ac) < 1) {
      if (*(int *)(self + 0x32c854) == 100) {
        iVar14 = *(int *)(self + 0x32c46c) % 100;
        iVar6 = (int)((ulong)((gh_long)iVar14 * 0x66666667) >> 0x20);
        iVar14 = iVar14 / 10 + (iVar14 >> 0x1f);
LAB_00437820:
        iVar14 = iVar14 - (iVar6 >> 0x1f);
        goto joined_r0x00437828;
      }
      if (*(int *)(self + 0x32c854) == 0) {
        iVar14 = *(int *)(self + 0x32c46c);
        iVar6 = (int)((ulong)((gh_long)iVar14 * 0x51eb851f) >> 0x20);
        iVar14 = iVar14 / 100 + (iVar14 >> 0x1f);
        goto LAB_00437820;
      }
    }
    else {
      iVar14 = *(int *)(self + 0x32c46c) % 10;
joined_r0x00437828:
      if ((0 < iVar14) && (*(int *)(self + 0x32c8d8) == 0)) {
        *(undefined4 *)(self + 0x32c970) = 0x30;
      }
    }
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    if (*(int *)(self + 0xbd0) == 1) {
      *(undefined4 *)(self + 0xbd0) = 0;
      *(undefined4 *)(self + 0xc04) = 0;
    }
    break;
  case 0x12:
    if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8db10) != 0xf) {
      if (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8dd3c) != 0x30) {
        *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dd3c) = 0x31;
      }
      iVar14 = *(int *)(self + 0x1ae8);
      if (((iVar14 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar14 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar6 = 2;
      }
      else {
        local_b0 = 0x100000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar14 = *(int *)(self + 0x1ae8);
      }
      iVar12 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8);
      if (((iVar14 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar14 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar7 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar7 = iVar7 + -10;
        iVar14 = *(int *)(self + 0x1ae8);
      }
      if (((iVar14 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar14 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar14 = -0x10;
      }
      else {
        local_b0 = 0xf00000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar14 = -4 - iVar14;
      }
      bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x98), GH_ARG(0x28), GH_ARG(iVar6), GH_ARG(iVar7 + iVar12), GH_ARG(param_5), GH_ARG(iVar14), GH_ARG(1), GH_ARG(0.0), GH_ARG(0));
      *(int *)(self + (gh_long)param_2 * 0x288 + 0x8db10) = 0xf;
    }
    break;
  case 0x13:
    piVar17 = (int *)(self + (gh_long)param_2 * 0x288 + 0x8db14);
    lVar20 = (gh_long)param_2;
    if (*piVar17 < 0x14) {
      piVar17[0] = 0;
      piVar17[1] = 0;
      *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd3c) = 0x31;
    }
    *(undefined4 *)(self + lVar20 * 0x288 + 0x8dd4c) = 9;
    iVar14 = *(int *)(self + 0x1ae8);
    uVar23 = iVar14 - 0xd;
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar21 = 0;
      puVar18 = (undefined8 *)(self + 0xb0cd8);
      do {
        if (*(int *)((gh_long)puVar18 + -0xc) < 1) {
          *(int *)(puVar18 + -4) = *(int *)(self + lVar20 * 0x288 + 0x8dac8);
          *(int *)((gh_long)puVar18 + -0x1c) = param_5;
          *(undefined4 *)(puVar18 + -3) = 0;
          puVar18[-1] = 0xfa00000000;
          puVar18[-2] = 0x64000000fa;
          *(undefined8 *)((gh_long)puVar18 + 0x14) = 0;
          *(undefined8 *)((gh_long)puVar18 + 0xc) = 0;
          *puVar18 = 0x3f80000000000000;
          *(int *)((gh_long)puVar18 + 0x1c) = param_2;
          *(undefined4 *)(puVar18 + 1) = 0x3f800000;
          puVar18[5] = 0xff000000ff;
          puVar18[4] = 0xff00000000;
          break;
        }
        lVar21 = lVar21 + 1;
        puVar18 = puVar18 + 10;
      } while (lVar21 < *(int *)(self + 0x32b828));
    }
    iVar6 = *(int *)(self + lVar20 * 0x288 + 0x8db0c);
    if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar12 = 2;
    }
    else {
      local_b0 = 0x100000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
      iVar14 = *(int *)(self + 0x1ae8);
    }
    iVar7 = *(int *)(self + lVar20 * 0x288 + 0x8dac8);
    iVar6 = iVar6 / 0x1c + 0x14d;
    if (((iVar14 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar14 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar8 = 0x14;
    }
    else {
      local_b0 = 0x1300000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0))
      ;
      iVar8 = iVar8 + -10;
      iVar14 = *(int *)(self + 0x1ae8);
    }
    iVar8 = iVar8 + iVar7;
    if (((0x3d < iVar14 - 0xdU) ||
        ((1LL << ((ulong)(iVar14 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
       (*(int *)(self + 0xba8) != 1)) {
      local_b0 = 0xf00000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0))
      ;
      iVar14 = -4;
      goto LAB_00436d94;
    }
LAB_00435600:
    iVar14 = -0x10;
    goto LAB_00435604;
  case 0x14:
    *(undefined4 *)(self + (gh_long)param_2 * 0x288 + 0x8dd4c) = 0xd;
    *(undefined4 *)(self + (gh_long)param_2 * 0x288 + 0x8db18) = 0;
    *(undefined4 *)(self + (gh_long)param_2 * 0x288 + 0x8db14) = 0;
    *(undefined4 *)(self + (gh_long)param_2 * 0x288 + 0x8dd3c) = 0x30;
    iVar14 = *(int *)(self + 0x1ae8);
    uVar23 = iVar14 - 0xd;
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar20 = 0;
      puVar18 = (undefined8 *)(self + 0xb0cd8);
      do {
        if (*(int *)((gh_long)puVar18 + -0xc) < 1) {
          *(int *)(puVar18 + -4) = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8);
          *(int *)((gh_long)puVar18 + -0x1c) = param_5;
          *(undefined4 *)(puVar18 + -3) = 0;
          puVar18[-1] = 0xfa00000000;
          puVar18[-2] = 0x64000000fa;
          *(undefined8 *)((gh_long)puVar18 + 0x14) = 0;
          *(undefined8 *)((gh_long)puVar18 + 0xc) = 0;
          *puVar18 = 0x3f80000000000000;
          *(int *)((gh_long)puVar18 + 0x1c) = param_2;
          *(undefined4 *)(puVar18 + 1) = 0x3f800000;
          puVar18[5] = 0xff000000ff;
          puVar18[4] = 0xff00000000;
          break;
        }
        lVar20 = lVar20 + 1;
        puVar18 = puVar18 + 10;
      } while (lVar20 < *(int *)(self + 0x32b828));
    }
    iVar6 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8db0c);
    if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar12 = 2;
    }
    else {
      local_b0 = 0x100000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar12 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
      iVar14 = *(int *)(self + 0x1ae8);
    }
    iVar7 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8);
    iVar6 = iVar6 / 0x1c + 0x14d;
    if (((iVar14 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar14 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar8 = 0x14;
    }
    else {
      local_b0 = 0x1300000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0))
      ;
      iVar8 = iVar8 + -10;
      iVar14 = *(int *)(self + 0x1ae8);
    }
    iVar8 = iVar8 + iVar7;
    if (((iVar14 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar14 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) goto LAB_00435600;
    local_b0 = 0xf00000000;
    pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
    iVar14 = -6;
LAB_00436d94:
    iVar14 = iVar14 - iVar7;
LAB_00435604:
    bzStateGame__initRest_0042a488(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x98), GH_ARG(iVar6), GH_ARG(iVar12), GH_ARG(iVar8), GH_ARG(param_6), GH_ARG(iVar14), GH_ARG(1), GH_ARG(0.0), GH_ARG(0));
    break;
  case 0x15:
    if (param_2 == 0) {
      if ((((*(int *)(self + 0x32c160) != 0) || (*(int *)(self + 0x8dac8) < -0x95)) ||
          (*(int *)(self + 0x1158) + 0x96 <= *(int *)(self + 0x8dac8))) ||
         ((*(int *)(self + 0x8dacc) < -0x1d ||
          (*(int *)(self + 0x115c) + 100 <= *(int *)(self + 0x8dacc))))) break;
      this = (SoundClip *)(self + 0x15d8);
    }
    else {
      uVar23 = *(int *)(self + (gh_long)param_2 * 0x288 + 0x8dd3c) - 0x209;
      if (((uVar23 < 0x12) && ((1 << (ulong)(uVar23 & 0x1f) & 0x3fc7fU) != 0)) ||
         (*(int *)(self + (gh_long)param_2 * 0x288 + 0x8dd3c) - 600U < 6)) {
        if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
            ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
           || (*(int *)(self + 0xba8) == 1)) {
          uVar23 = 0x3b;
        }
        else {
          local_b0 = 0x200000000;
          pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
          iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
          uVar23 = iVar14 + 0x38;
        }
      }
      else if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
               ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)
               ) || (*(int *)(self + 0xba8) == 1)) {
        uVar23 = 0x30;
      }
      else {
        local_b0 = 0x400000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        uVar23 = iVar14 + 0x2b;
      }
      if (((*(int *)(self + 0x32c160) != 0) || (*(int *)(self + 0x8dac8) < -0x95)) ||
         ((*(int *)(self + 0x1158) + 0x96 <= *(int *)(self + 0x8dac8) ||
          (((*(int *)(self + 0x8dacc) < -0x1d || (0x4a < uVar23)) ||
           (*(int *)(self + 0x115c) + 100 <= *(int *)(self + 0x8dacc))))))) break;
      this = (SoundClip *)(self + (gh_long)(int)uVar23 * 0x18 + 0x11e8);
    }
    goto LAB_0043652c;
  case 0x16:
    *(undefined4 *)(self + 0x32c85c) = 0;
    piVar17 = (int *)(self + (gh_long)param_2 * 0x288 + 0x8dad8);
    piVar26 = (int *)(self + (gh_long)param_2 * 0x288 + 0x8dac8);
    bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(param_2), GH_ARG(0x69), GH_ARG(*piVar17), GH_ARG(param_5));
    iVar14 = *piVar17;
    iVar6 = *piVar26;
    iVar12 = *(int *)(self + 0x1ae8);
    if (((iVar12 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar7 = 0xb4;
    }
    else {
      local_b0 = 0xb300000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0))
      ;
      iVar7 = iVar7 + -0x5a;
      iVar12 = *(int *)(self + 0x1ae8);
    }
    piVar1 = (int *)(self + (gh_long)param_2 * 0x288 + 0x8dacc);
    iVar8 = *piVar1;
    if (((iVar12 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar13 = 0x46;
    }
    else {
      local_b0 = 0x4500000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
      iVar12 = *(int *)(self + 0x1ae8);
    }
    uVar23 = iVar12 - 0xd;
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar20 = 0;
      puVar18 = (undefined8 *)(self + 0xb0cd8);
      do {
        if (*(int *)((gh_long)puVar18 + -0xc) < 1) {
          *(int *)(puVar18 + -4) = iVar7 + iVar6;
          *(int *)((gh_long)puVar18 + -0x1c) = iVar8 - iVar13;
          *(int *)(puVar18 + -3) = iVar14;
          puVar18[-1] = 0x85;
          puVar18[-2] = 0x6400000078;
          *(undefined8 *)((gh_long)puVar18 + 0x14) = 0;
          *(undefined8 *)((gh_long)puVar18 + 0xc) = 0;
          *puVar18 = 0x3f80000000000000;
          *(int *)((gh_long)puVar18 + 0x1c) = param_2;
          *(undefined4 *)(puVar18 + 1) = 0x3f800000;
          puVar18[5] = 0xff000000ff;
          puVar18[4] = 0xff00000000;
          break;
        }
        lVar20 = lVar20 + 1;
        puVar18 = puVar18 + 10;
      } while (lVar20 < *(int *)(self + 0x32b828));
    }
    iVar14 = *piVar17;
    iVar6 = *piVar26;
    if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar7 = 0x8c;
    }
    else {
      local_b0 = 0x8b00000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0))
      ;
      iVar7 = iVar7 + -0x46;
      iVar12 = *(int *)(self + 0x1ae8);
    }
    iVar8 = *piVar1;
    if (((iVar12 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar13 = 0x3c;
    }
    else {
      local_b0 = 0x3b00000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
      iVar12 = *(int *)(self + 0x1ae8);
    }
    uVar23 = iVar12 - 0xd;
    if (((0x3d < uVar23) || ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar20 = 0;
      puVar18 = (undefined8 *)(self + 0xb0cd8);
      do {
        if (*(int *)((gh_long)puVar18 + -0xc) < 1) {
          *(int *)(puVar18 + -4) = iVar7 + iVar6;
          *(int *)((gh_long)puVar18 + -0x1c) = iVar8 - iVar13;
          *(int *)(puVar18 + -3) = iVar14;
          puVar18[-1] = 0x85;
          puVar18[-2] = 0x6400000078;
          *(undefined8 *)((gh_long)puVar18 + 0x14) = 0;
          *(undefined8 *)((gh_long)puVar18 + 0xc) = 0;
          *puVar18 = 0x3f80000000000000;
          *(int *)((gh_long)puVar18 + 0x1c) = param_2;
          *(undefined4 *)(puVar18 + 1) = 0x3f800000;
          puVar18[5] = 0xff000000ff;
          puVar18[4] = 0xff00000000;
          break;
        }
        lVar20 = lVar20 + 1;
        puVar18 = puVar18 + 10;
      } while (lVar20 < *(int *)(self + 0x32b828));
    }
    iVar14 = *piVar17;
    iVar6 = *piVar26;
    if (((uVar23 < 0x3e) && ((1LL << ((ulong)uVar23 & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar7 = 0xa0;
    }
    else {
      local_b0 = 0x9f00000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0))
      ;
      iVar7 = iVar7 + -0x50;
      iVar12 = *(int *)(self + 0x1ae8);
    }
    iVar8 = *piVar1;
    if (((iVar12 - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar13 = 0x32;
    }
    else {
      local_b0 = 0x3100000000;
      pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
      iVar12 = *(int *)(self + 0x1ae8);
    }
    if (((0x3d < iVar12 - 0xdU) ||
        ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
       ((*(int *)(self + 0xba8) != 1 && (0 < *(int *)(self + 0x32b828))))) {
      lVar20 = 0;
      puVar18 = (undefined8 *)(self + 0xb0cd8);
      do {
        if (*(int *)((gh_long)puVar18 + -0xc) < 1) {
          *(int *)(puVar18 + -4) = iVar7 + iVar6;
          *(int *)((gh_long)puVar18 + -0x1c) = iVar8 - iVar13;
          *(int *)(puVar18 + -3) = iVar14;
          puVar18[-1] = 0x85;
          puVar18[-2] = 0x6400000078;
          *(undefined8 *)((gh_long)puVar18 + 0x14) = 0;
          *(undefined8 *)((gh_long)puVar18 + 0xc) = 0;
          *puVar18 = 0x3f80000000000000;
          *(int *)((gh_long)puVar18 + 0x1c) = param_2;
          *(undefined4 *)(puVar18 + 1) = 0x3f800000;
          puVar18[5] = 0xff000000ff;
          puVar18[4] = 0xff00000000;
          break;
        }
        lVar20 = lVar20 + 1;
        puVar18 = puVar18 + 10;
      } while (lVar20 < *(int *)(self + 0x32b828));
    }
    iVar14 = 0;
    do {
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar6 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar6 = iVar6 + 0xc;
        iVar12 = *(int *)(self + 0x1ae8);
      }
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar7 = 5;
      }
      else {
        local_b0 = 0x400000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar12 = *(int *)(self + 0x1ae8);
      }
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar8 = 1;
      }
      else {
        local_b0 = 0;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar12 = *(int *)(self + 0x1ae8);
      }
      iVar13 = *piVar26;
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar9 = 0x82;
      }
      else {
        local_b0 = 0x8100000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar9 = iVar9 + -0x5a;
        iVar12 = *(int *)(self + 0x1ae8);
      }
      iVar2 = *piVar1;
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar10 = 0x28;
      }
      else {
        local_b0 = 0x2700000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar12 = *(int *)(self + 0x1ae8);
      }
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar11 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar11 = iVar11 + 6;
        iVar12 = *(int *)(self + 0x1ae8);
      }
      if ((((0x3d < iVar12 - 0xdU) ||
           ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
          (*(int *)(self + 0xba8) != 1)) && (iVar3 = *(int *)(self + 0x32b828), 0 < iVar3)) {
        lVar20 = 0;
        puVar19 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar19[-5] < 1) {
            puVar19[2] = 0;
            puVar19[3] = iVar11;
            *(undefined8 *)(puVar19 + -6) = 0x6400000085;
            puVar19[-10] = iVar9 + iVar13;
            puVar19[-9] = iVar2 - iVar10;
            puVar19[-8] = iVar8;
            puVar19[-4] = iVar7 + 0x143;
            puVar19[-3] = 1;
            *(undefined8 *)(puVar19 + -2) = 0x3f80000000000000;
            *puVar19 = 0x3f800000;
            puVar19[1] = 0;
            puVar19[4] = 0;
            puVar19[5] = -iVar6;
            *(undefined8 *)(puVar19 + 6) = 0xff00000000;
            *(undefined8 *)(puVar19 + 8) = 0xff000000ff;
            break;
          }
          lVar20 = lVar20 + 1;
          puVar19 = puVar19 + 0x14;
        } while (lVar20 < iVar3);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 5);
    iVar14 = 0;
    do {
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar6 = 0x14;
      }
      else {
        local_b0 = 0x1300000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar6 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar6 = iVar6 + 0xc;
        iVar12 = *(int *)(self + 0x1ae8);
      }
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar7 = 5;
      }
      else {
        local_b0 = 0x400000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar12 = *(int *)(self + 0x1ae8);
      }
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar8 = 2;
      }
      else {
        local_b0 = 0x100000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar8 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar12 = *(int *)(self + 0x1ae8);
      }
      iVar13 = *piVar26;
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar9 = 0xbe;
      }
      else {
        local_b0 = 0xbd00000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar9 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar9 = iVar9 + -0x5a;
        iVar12 = *(int *)(self + 0x1ae8);
      }
      iVar2 = *piVar1;
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar10 = 0x50;
      }
      else {
        local_b0 = 0x4f00000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar10 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar12 = *(int *)(self + 0x1ae8);
      }
      if (((iVar12 - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar11 = 8;
      }
      else {
        local_b0 = 0x700000000;
        pmVar15 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar11 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar15), GH_ARG((param_type *)&local_b0));
        iVar11 = iVar11 + 6;
        iVar12 = *(int *)(self + 0x1ae8);
      }
      if (((0x3d < iVar12 - 0xdU) ||
          ((1LL << ((ulong)(iVar12 - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
         ((*(int *)(self + 0xba8) != 1 && (iVar3 = *(int *)(self + 0x32b828), 0 < iVar3)))) {
        lVar20 = 0;
        puVar19 = (undefined4 *)(self + 0xb0ce0);
        do {
          if ((int)puVar19[-5] < 1) {
            puVar19[2] = 0;
            puVar19[3] = iVar11;
            *(undefined8 *)(puVar19 + 6) = 0xff00000000;
            *(undefined8 *)(puVar19 + -6) = 0x6400000085;
            puVar19[-10] = iVar9 + iVar13;
            puVar19[-9] = iVar2 - iVar10;
            puVar19[-8] = iVar8;
            puVar19[-4] = iVar7 + 0x143;
            puVar19[-3] = 1;
            *(undefined8 *)(puVar19 + -2) = 0x3f80000000000000;
            *puVar19 = 0x3f800000;
            puVar19[1] = 0;
            puVar19[4] = 0;
            puVar19[5] = -iVar6;
            *(undefined8 *)(puVar19 + 8) = 0xff000000ff;
            break;
          }
          lVar20 = lVar20 + 1;
          puVar19 = puVar19 + 0x14;
        } while (lVar20 < iVar3);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 5);
    if (((*(int *)(self + 0x32c160) != 0) || (*(int *)(self + 0x8dac8) < -0x95)) ||
       ((*(int *)(self + 0x1158) + 0x96 <= *(int *)(self + 0x8dac8) ||
        ((*(int *)(self + 0x8dacc) < -0x1d ||
         (*(int *)(self + 0x115c) + 100 <= *(int *)(self + 0x8dacc))))))) break;
    this = (SoundClip *)(self + 0x12f0);
LAB_0043652c:
    SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
  }
switchD_004343f4_caseD_5:
  if (*(gh_long *)(lVar4 + 0x28) == local_a8) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
