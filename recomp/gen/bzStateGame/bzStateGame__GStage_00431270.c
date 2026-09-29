/* bzStateGame::GStage_00431270 @ 0x00431270 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a49790
#define DAT_00a49790 (*(undefined1 *)IMG(0x00a49790))
#undef DAT_00a5345c
#define DAT_00a5345c (*(undefined1 *)IMG(0x00a5345c))
gh_long bzStateGame__GStage_00431270(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;

  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  gh_long lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  mersenne_twister_engine *pmVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  int *piVar21;
  int iVar22;
  ulong uVar23;
  gh_long lVar24;
  ulong uVar25;
  undefined4 *puVar26;
  int *piVar27;
  int *piVar28;
  undefined8 *puVar29;
  undefined4 uVar30;
  gh_long lVar31;
  undefined4 *puVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  uint64_t gh_frame64[27] = {0};   /* 원작 스택 프레임 (SP-0xc0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xc0;
#define local_c0 (*(gh_long *)(gh_fb - 0xc0))
#define local_b8 (*(int (*)[12])(gh_fb - 0xb8))
#define local_88 (*(gh_long *)(gh_fb - 0x88))
  
  lVar9 = tpidr_el0;
  local_88 = *(gh_long *)(lVar9 + 0x28);
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  iVar14 = *(int *)(self + 0x32b824);
  uVar20 = (ulong)iVar14;
  if (0 < iVar14) {
    if (iVar14 == 1) {
      uVar23 = 0;
    }
    else {
      uVar23 = uVar20 & 0xfffffffffffffffe;
      puVar26 = (undefined4 *)(self + 0x8daec);
      uVar25 = uVar23;
      do {
        *puVar26 = 0;
        puVar26[0xa2] = 0;
        uVar25 = uVar25 - 2;
        puVar26 = puVar26 + 0x144;
      } while (uVar25 != 0);
      if (uVar23 == uVar20) goto LAB_00431338;
    }
    puVar26 = (undefined4 *)(self + uVar23 * 0x288 + 0x8daec);
    do {
      uVar23 = uVar23 + 1;
      *puVar26 = 0;
      puVar26 = puVar26 + 0xa2;
    } while ((gh_long)uVar23 < (gh_long)uVar20);
  }
LAB_00431338:
  iVar14 = *(int *)(self + 0x32b828);
  uVar20 = (ulong)iVar14;
  if (0 < iVar14) {
    if (iVar14 == 1) {
      uVar23 = 0;
    }
    else {
      uVar23 = uVar20 & 0xfffffffffffffffe;
      puVar26 = (undefined4 *)(self + 0xb0d1c);
      uVar25 = uVar23;
      do {
        puVar26[-0x14] = 0;
        *puVar26 = 0;
        uVar25 = uVar25 - 2;
        puVar26 = puVar26 + 0x28;
      } while (uVar25 != 0);
      if (uVar23 == uVar20) goto LAB_004313b0;
    }
    puVar26 = (undefined4 *)(self + uVar23 * 0x50 + 0xb0ccc);
    do {
      uVar23 = uVar23 + 1;
      *puVar26 = 0;
      puVar26 = puVar26 + 0x14;
    } while ((gh_long)uVar23 < (gh_long)uVar20);
  }
LAB_004313b0:
  lVar24 = 0;
  puVar26 = (undefined4 *)(self + 0x140598);
  do {
    lVar31 = 0xa50;
    puVar32 = puVar26;
    do {
      *puVar32 = 0;
      puVar32[0xb4] = 0;
      lVar31 = lVar31 + -2;
      puVar32 = puVar32 + 0x168;
    } while (lVar31 != 0);
    lVar24 = lVar24 + 1;
    puVar26 = puVar26 + 1;
  } while (lVar24 != 0xaa);
  iVar14 = *(int *)(self + 0x32b828);
  if (-1 < iVar14) {
    uVar20 = (gh_long)iVar14 + 1;
    if (uVar20 < 2) {
      uVar25 = 0;
    }
    else {
      uVar25 = uVar20 & 0xfffffffffffffffe;
      puVar26 = (undefined4 *)(self + 0xb0d1c);
      uVar23 = uVar25;
      do {
        puVar26[-0x14] = 0;
        *puVar26 = 0;
        uVar23 = uVar23 - 2;
        puVar26 = puVar26 + 0x28;
      } while (uVar23 != 0);
      if (uVar20 == uVar25) goto LAB_0043145c;
    }
    lVar24 = uVar25 - 1;
    puVar26 = (undefined4 *)(self + uVar25 * 0x50 + 0xb0ccc);
    do {
      lVar24 = lVar24 + 1;
      *puVar26 = 0;
      puVar26 = puVar26 + 0x14;
    } while (lVar24 < iVar14);
  }
LAB_0043145c:
  iVar14 = 0;
  piVar4 = (int *)(self + 0x32c8e8);
  *piVar4 = param_2;
  do {
    iVar16 = local_b8[4];
    iVar18 = local_b8[0];
    iVar34 = local_b8[1];
    iVar8 = local_b8[2];
    iVar38 = local_b8[3];
    iVar35 = -1;
    iVar15 = local_b8[5];
    iVar36 = local_b8[6];
    iVar3 = local_b8[7];
    iVar19 = local_b8[8];
    iVar22 = local_b8[9];
    iVar10 = local_b8[10];
    iVar11 = local_b8[0xb];
    do {
      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
         (*(int *)(self + 0xba8) == 1)) {
        iVar13 = 0x1c;
      }
      else {
        local_c0 = 0x1b00000000;
        pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
        iVar13 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_c0), GH_ARG(pmVar17), GH_ARG((param_type *)&local_c0));
      }
      iVar13 = *(int *)(&DAT_00a5345c + (gh_long)iVar13 * 4);
      if (iVar18 != iVar13) {
        if (iVar18 == 0) {
          piVar27 = local_b8;
        }
        else if ((iVar34 == iVar13) ||
                ((piVar27 = (int *)((ulong)local_b8 | 4), iVar34 != 0 &&
                 ((iVar8 == iVar13 ||
                  ((piVar27 = local_b8 + 2, iVar8 != 0 &&
                   ((iVar38 == iVar13 ||
                    ((piVar27 = local_b8 + 3, iVar38 != 0 &&
                     ((iVar16 == iVar13 ||
                      ((piVar27 = local_b8 + 4, iVar16 != 0 &&
                       ((iVar15 == iVar13 ||
                        ((piVar27 = local_b8 + 5, iVar15 != 0 &&
                         ((iVar36 == iVar13 ||
                          ((piVar27 = local_b8 + 6, iVar36 != 0 &&
                           ((iVar3 == iVar13 ||
                            ((piVar27 = local_b8 + 7, iVar3 != 0 &&
                             ((iVar19 == iVar13 ||
                              ((piVar27 = local_b8 + 8, iVar19 != 0 &&
                               ((iVar22 == iVar13 ||
                                ((piVar27 = local_b8 + 9, iVar22 != 0 &&
                                 ((iVar10 == iVar13 ||
                                  ((piVar27 = local_b8 + 10, iVar10 != 0 &&
                                   ((iVar11 == iVar13 || (piVar27 = local_b8 + 0xb, iVar11 != 0)))))
                                  ))))))))))))))))))))))))))))))))))))) goto LAB_00431658;
        *piVar27 = iVar13;
        break;
      }
LAB_00431658:
      iVar35 = iVar35 + 1;
    } while (iVar35 < 0x1b);
    iVar14 = iVar14 + 1;
  } while (iVar14 != 0xc);
  if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
      ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) == 0)) &&
     (*(int *)(self + 0xba8) != 1)) {
    local_c0 = 0x300000000;
    pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
    std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_c0), GH_ARG(pmVar17), GH_ARG((param_type *)&local_c0));
  }
  piVar27 = (int *)(self + 0x32ba80);
  lVar24 = (gh_long)(*piVar4 * 0x283) * 4;
  *piVar27 = *(int *)(self + (gh_long)*piVar4 * 0xa0c + 0x63590);
  iVar14 = *(int *)(self + lVar24 + 0x63594);
  uVar30 = 0xf;
  *(int *)(self + 0x32ba78) = iVar14;
  iVar35 = *(int *)(self + lVar24 + 0x63598);
  if (iVar14 != 1) {
    uVar30 = 0;
  }
  *(undefined4 *)(self + 0x32ba7c) = uVar30;
  *(undefined4 *)(self + 0xc04) = 0;
  *(undefined8 *)(self + 0xbcc) = 0;
  *(undefined4 *)(self + 0xbd4) = 0;
  local_c0 = 0x500000002;
  pmVar17 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
  iVar14 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_c0), GH_ARG(pmVar17), GH_ARG((param_type *)&local_c0));
  *(int *)(self + 0xbd8) = iVar14;
  *(undefined4 *)(self + 0xbdc) = 0;
  *(undefined8 *)(self + 0xc28) = 0;
  *(undefined4 *)(self + 0xc30) = 0;
  *(undefined8 *)(self + 0x32c910) = 0;
  piVar5 = (int *)(self + 0x8da28);
  if (0 < *piVar5) {
    piVar6 = (int *)(self + 0x32c914);
    piVar7 = (int *)(self + 0x8da24);
    iVar18 = *piVar7;
    iVar14 = 0;
    uVar33 = 0;
    iVar34 = *piVar5;
    do {
      iVar8 = iVar34 + -1;
      if (0 < iVar18) {
        uVar37 = 0;
        do {
          while( true ) {
            iVar38 = *(int *)(self + (gh_long)(int)(uVar37 + iVar18 * iVar8 +
                                                (*piVar5 * iVar18 + 3) * param_2) * 4 + 0x62b90);
            if (iVar38 == 0x6c) {
              iVar38 = *(int *)(self + 0x32ba9c);
            }
            iVar16 = *(int *)(self + 0x8da30);
            if (iVar16 < 1) break;
            iVar15 = *(int *)(self + 0x8da2c);
            iVar18 = 0;
            uVar1 = uVar37 + 1;
            do {
              if (0 < iVar15) {
                iVar36 = 0;
                do {
                  iVar19 = *(int *)(self + (gh_long)(iVar36 + iVar15 * (iVar18 + iVar16 * iVar38)) * 4
                                           + 0x14990);
                  iVar3 = iVar36 + iVar15 * uVar37;
                  lVar24 = (gh_long)(iVar16 * iVar8) + (gh_long)iVar18;
                  iVar16 = (int)lVar24;
                  if (iVar19 == 0x19f) {
                    piVar21 = (int *)(self + (gh_long)iVar16 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140594);
                    lVar31 = (gh_long)iVar3;
                    lVar24 = (gh_long)iVar16;
                    if (*piVar21 == 0x40) {
LAB_00431bf8:
                      if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
                          ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) &
                           0x3200000000000081U) != 0)) || (*(int *)(self + 0xba8) == 1)) {
                        iVar16 = 4;
                      }
                      else {
                        local_c0 = 0x300000000;
                        pmVar17 = (mersenne_twister_engine *)
                                  cocos2d__RandomHelper__getEngine_0060b3d4();
                        iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_c0), GH_ARG(pmVar17), GH_ARG((param_type *)&local_c0));
                      }
                      iVar16 = *(int *)(&DAT_00a49790 + (gh_long)iVar16 * 4);
                    }
                    else {
                      if (((uVar33 == uVar37 - 1) || (uVar37 < 3)) || (0xb < iVar14)) {
                        if (*(int *)(self + lVar24 * 4 + lVar31 * 0x2d0 + 0x140590) == 0) {
                          bVar12 = *(int *)(self + 0x32ba78) != 1;
                          iVar16 = 2;
                          if (bVar12) {
                            iVar16 = 4;
                          }
                          iVar15 = 0x1eb;
                          if (bVar12) {
                            iVar15 = 0x99;
                          }
                          if (((0x3d < *(int *)(self + 0x1ae8) - 0xdU) ||
                              ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) &
                               0x3200000000000081U) == 0)) && (*(int *)(self + 0xba8) != 1)) {
                            local_c0 = (ulong)(iVar16 - 1) << 0x20;
                            pmVar17 = (mersenne_twister_engine *)
                                      cocos2d__RandomHelper__getEngine_0060b3d4();
                            iVar16 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_c0), GH_ARG(pmVar17), GH_ARG((param_type *)&local_c0));
                          }
                          *(int *)(self + lVar24 * 4 + lVar31 * 0x2d0 + 0x140590) = iVar16 + iVar15;
                        }
                        *piVar21 = 0;
                        *(undefined4 *)(self + lVar24 * 4 + lVar31 * 0x2d0 + 0x140598) = 0;
                        goto LAB_00431f0c;
                      }
                      if (*piVar21 != 0x127) goto LAB_00431bf8;
                      iVar16 = local_b8[iVar14];
                      if (((iVar16 == 3) || (iVar16 == 0x120)) || (iVar16 == 0x13)) {
                        iVar16 = iVar16 + -1;
                      }
                    }
                    *piVar21 = iVar16;
                    *(int *)(self + lVar24 * 4 + lVar31 * 0x2d0 + 0x140598) = iVar14 + 0x19f;
                    iVar14 = iVar14 + 1;
                    uVar33 = uVar37;
                  }
                  else {
                    if (iVar19 == 500) {
                      *(undefined4 *)(self + (gh_long)iVar16 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598) =
                           500;
                      *(uint *)(self + 0x32ba20) = uVar37 << 10 | 100;
                      *(int *)(self + 0x32ba24) = iVar8 * 0x280 + 200;
                      goto LAB_00431f0c;
                    }
                    if (iVar19 < 0) {
                      if (iVar19 != -0x136) {
                        if (param_2 < 5) {
                          iVar19 = param_2 * -0xf + 0x4b + iVar19;
                          if (-0x1b < iVar19) {
                            iVar19 = -0x1a;
                          }
                        }
                        else {
                          iVar19 = param_2 * -5 + 0x19 + iVar19;
                        }
                      }
                    }
                    else if ((iVar19 == 0x23a) || (iVar19 == 0x1f5)) {
                      iVar22 = *piVar6 + 1;
                      *piVar6 = iVar22;
                      if (((iVar38 == 0x5b) || (iVar38 == 0x4d)) && (*(int *)(self + 0x32c9ac) != 2)
                         ) {
                        if ((iVar35 < 1) ||
                           (*(int *)(self + (gh_long)(int)(uVar1 + *piVar7 * iVar8 +
                                                       (*piVar7 * *piVar5 + 3) * param_2) * 4 +
                                            0x62b90) != 0x46)) {
                          *(undefined4 *)(self + (gh_long)iVar16 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598)
                               = 0;
                        }
                        else {
                          iVar16 = iVar36 + iVar15 * uVar37 + -0x1a;
                          piVar21 = (int *)(self + lVar24 * 4 + (gh_long)iVar16 * 0x2d0 + 0x140598);
                          if (((*piVar21 == 0) &&
                              (piVar28 = (int *)(self + lVar24 * 4 + (gh_long)iVar16 * 0x2d0 + 0x140594
                                                ), *piVar28 == 0)) ||
                             ((piVar21 = (int *)(self + lVar24 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598)
                              , *piVar21 == 0 &&
                              (piVar28 = (int *)(self + lVar24 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140594)
                              , *piVar28 == 0)))) {
                            *piVar21 = iVar35 + 500;
                            *piVar28 = -0x15;
                          }
                        }
                      }
                      else {
                        if (iVar19 != 0x23a) goto LAB_00431f00;
                        if (((0 < *piVar27) &&
                            ((0x3d < *(int *)(self + 0x1ae8) - 0xdU ||
                             ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) &
                              0x3200000000000081U) == 0)))) && (*(int *)(self + 0xba8) != 1)) {
                          local_c0 = 0x6300000000;
                          pmVar17 = (mersenne_twister_engine *)
                                    cocos2d__RandomHelper__getEngine_0060b3d4();
                          iVar15 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_c0), GH_ARG(pmVar17), GH_ARG((param_type *)&local_c0));
                          if (iVar15 < 0x32) {
                            iVar15 = *piVar4;
                            if (iVar15 < 0x29) {
                              if (iVar15 < 0x1f) {
                                if (iVar15 < 0x15) {
                                  *piVar6 = *piVar6 + -1;
                                }
                                else {
                                  *(undefined4 *)
                                   (self + (gh_long)iVar16 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598) =
                                       0x23b;
                                }
                              }
                              else {
                                *(undefined4 *)
                                 (self + (gh_long)iVar16 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598) = 0x23c;
                              }
                            }
                            else {
                              *(undefined4 *)
                               (self + (gh_long)iVar16 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598) = 0x23a;
                            }
                            *piVar27 = *piVar27 + -1;
                            goto LAB_00431f0c;
                          }
                          iVar22 = *piVar6;
                        }
                        *piVar6 = iVar22 + -1;
                      }
                      goto LAB_00431f0c;
                    }
LAB_00431f00:
                    *(int *)(self + (gh_long)iVar16 * 4 + (gh_long)iVar3 * 0x2d0 + 0x140598) = iVar19;
                  }
LAB_00431f0c:
                  iVar15 = *(int *)(self + 0x8da2c);
                  iVar16 = *(int *)(self + 0x8da30);
                  iVar36 = iVar36 + 1;
                } while (iVar36 < iVar15);
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 < iVar16);
            iVar18 = *piVar7;
            uVar37 = uVar1;
            if (iVar18 <= (int)uVar1) goto LAB_00431f50;
          }
          uVar37 = uVar37 + 1;
        } while ((int)uVar37 < iVar18);
      }
LAB_00431f50:
      bVar12 = 1 < iVar34;
      iVar34 = iVar8;
    } while (bVar12);
  }
  lVar24 = 0;
  *(undefined8 *)(self + 0x32ba60) = 0;
  do {
    *(undefined4 *)(self + lVar24 + 0x140868) = 0x39;
    *(undefined4 *)((gh_long)(self + lVar24 + 0x140868) + 0x2d0) = 0x39;
    if (*(int *)(self + lVar24 + 0x145458) == 0) {
      *(undefined4 *)(self + lVar24 + 0x145458) = 0x39;
      if (*(int *)(self + lVar24 + 0x145728) == 0) goto LAB_00431fc8;
LAB_00432004:
      if (*(int *)(self + lVar24 + 0x1459f8) != 0) goto LAB_0043200c;
LAB_00431fd4:
      *(undefined4 *)(self + lVar24 + 0x1459f8) = 0x39;
      iVar14 = *(int *)(self + lVar24 + 0x145cc8);
    }
    else {
      if (*(int *)(self + lVar24 + 0x145728) != 0) goto LAB_00432004;
LAB_00431fc8:
      *(undefined4 *)(self + lVar24 + 0x145728) = 0x39;
      if (*(int *)(self + lVar24 + 0x1459f8) == 0) goto LAB_00431fd4;
LAB_0043200c:
      iVar14 = *(int *)(self + lVar24 + 0x145cc8);
    }
    if (iVar14 == 0) {
      *(undefined4 *)(self + lVar24 + 0x145cc8) = 0x39;
    }
    lVar31 = lVar24 + 0x3100f8;
    lVar24 = lVar24 + 4;
    *(undefined4 *)(self + lVar31) = 0x39;
    *(undefined4 *)((gh_long)(self + lVar31) + 0x2d0) = 0x39;
    if (lVar24 == 0x2a8) {
      lVar24 = 0xa50;
      puVar29 = (undefined8 *)(self + 0x14086c);
      do {
        puVar2 = (undefined8 *)((gh_long)puVar29 + 0x29c);
        lVar24 = lVar24 + -2;
        puVar29[-0x5a] = 0x3900000039;
        *puVar29 = 0x3900000039;
        *(undefined8 *)((gh_long)puVar29 + -0x34) = 0x3900000039;
        puVar29 = puVar29 + 0xb4;
        *puVar2 = 0x3900000039;
      } while (lVar24 != 0);
      *(undefined4 *)(self + 0x143dd8) = 0x1b6;
      *(undefined4 *)(self + 0x1440a8) = 0x1b6;
      *(undefined4 *)(self + 0x144378) = 0x1b6;
      *(undefined4 *)(self + 0x144648) = 0x1b6;
      *(undefined4 *)(self + 0x144918) = 0x1b6;
      *(undefined4 *)(self + 0x144be8) = 0x1b6;
      *(undefined4 *)(self + 0x144eb8) = 0x1b6;
      *(undefined4 *)(self + 0x145188) = 0x1b6;
      *(undefined4 *)(self + 0x145458) = 0x1b6;
      *(undefined4 *)(self + 0x145728) = 0x1b6;
      *(undefined4 *)(self + 0x1459f8) = 0x1b6;
      if (*(gh_long *)(lVar9 + 0x28) == local_88) {
        return 0;
      }
                    
      __stack_chk_fail();
    }
  } while( true );
  return 0;
}
