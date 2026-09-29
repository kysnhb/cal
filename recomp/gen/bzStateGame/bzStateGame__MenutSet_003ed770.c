/* bzStateGame::MenutSet_003ed770 @ 0x003ed770 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00b008ce
#define DAT_00b008ce (*(undefined1 *)IMG(0x00b008ce))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
#undef DAT_00a4e7c8
#define DAT_00a4e7c8 (*(undefined1 *)IMG(0x00a4e7c8))
gh_long bzStateGame__MenutSet_003ed770(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3, uint64_t gh_a4)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;
  int param_3 = (int)gh_a2;
  float param_4 = gh_b2f(gh_a3);
  float param_5 = gh_b2f(gh_a4);

  char *__s;
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  gh_long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  gh_long *plVar8;
  undefined *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  mersenne_twister_engine *pmVar12;
  int in_w4 = 0;
  int in_w5 = 0;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  gh_long lVar16;
  ulong uVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  uint64_t gh_frame64[43] = {0};   /* 원작 스택 프레임 (SP-0x140 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x140;
#define local_140 (*(gh_long (*)[2])(gh_fb - 0x140))
#define local_130 (*(gh_long *)(gh_fb - 0x130))
#define local_128 (*(gh_long *)(gh_fb - 0x128))
#define local_120 (*(gh_long *)(gh_fb - 0x120))
#define local_118 (*(gh_long *)(gh_fb - 0x118))
#define local_110 (*(gh_long *)(gh_fb - 0x110))
#define local_108 (*(gh_long *)(gh_fb - 0x108))
#define auStack_100 (*(undefined1 (*)[8])(gh_fb - 0x100))
#define local_f8 (*(gh_long *)(gh_fb - 0xf8))
#define local_f0 (*(gh_long *)(gh_fb - 0xf0))
#define local_e8 (*(gh_long *)(gh_fb - 0xe8))
#define local_e0 (*(gh_long *)(gh_fb - 0xe0))
#define local_d8 (*(gh_long *)(gh_fb - 0xd8))
#define local_d0 (*(gh_long *)(gh_fb - 0xd0))
#define local_c8 (*(gh_long *)(gh_fb - 0xc8))
#define local_c0 (*(gh_long *)(gh_fb - 0xc0))
#define local_b8 (*(gh_long *)(gh_fb - 0xb8))
#define local_b0 (*(ulong *)(gh_fb - 0xb0))
#define uStack_a8 (*(ulong *)(gh_fb - 0xa8))
#define local_90 (*(gh_long *)(gh_fb - 0x90))
#define local_88 (*(gh_long *)(gh_fb - 0x88))
  
  lVar4 = tpidr_el0;
  local_88 = *(gh_long *)(lVar4 + 0x28);
  switch(param_2) {
  case 1:
    iVar7 = *(int *)(self + 0x1164);
    iVar25 = *(int *)(self + 0x1160);
    iVar13 = (int)param_5;
    iVar21 = (int)param_4;
    if ((((iVar13 < iVar7 + -0x73) && (iVar25 + 0xa3 < iVar21)) && (iVar21 < iVar25 + 0xfd)) &&
       (iVar7 + -0xcd < iVar13)) {
      if ((*(int *)(self + 0x32c970) != 0x23) || (*(int *)(self + 0x32c9a0) != 0x1a05)) {
        *(int *)(self + 0x32c970) = 0;
      }
      if (*(int *)(self + 0x32c160) != 0) break;
      lVar16 = 0x1380;
LAB_003eec44:
      SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + lVar16)), GH_ARG(false));
      break;
    }
    if (*(int *)(self + 0x32c974) < 1) break;
    if (((iVar13 < iVar7 + 0x9b) && (iVar25 + -0x74 < iVar21)) &&
       ((iVar21 < iVar25 + -1 && (iVar7 + 0x28 < iVar13)))) {
      if ((*(int *)(self + 0x32c970) != 0x23) || (*(int *)(self + 0x32c9a0) != 0x1a05)) {
        *(int *)(self + 0x32c970) = 0;
      }
LAB_003eec30:
      if (*(int *)(self + 0x32c160) != 0) break;
      lVar16 = 0x14b8;
      goto LAB_003eec44;
    }
    if ((((iVar7 + 0x9b <= iVar13) || (iVar21 <= iVar25 + 1)) || (iVar25 + 0x74 <= iVar21)) ||
       (iVar13 <= iVar7 + 0x28)) break;
    if (param_3 == 0x19) {
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
      }
      piVar19 = (int *)(self + 0x32c110);
      __s = self + 0xd38;
      sprintf(__s,
                       "http://nesmgames.cafe24.com/inpoDeletes.php?game_id=Coupon/%d.txt&game_name=0&from_id=Coupon/%d.txt"
                       ,(ulong)*(uint *)(self + (gh_long)*piVar19 * 4 + 0x32c048),
                       (ulong)*(uint *)(self + (gh_long)*piVar19 * 4 + 0x32c048));
      uVar15 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG((CurlResData *)&local_b0));
      if ((uVar15 & 1) == 0) {
        uVar22 = 0xffffffff;
        do {
          uVar22 = uVar22 + 1;
          if (4 < uVar22) {
            *(undefined4 *)(self + 0x32c114) = 999;
            goto LAB_003ef64c;
          }
          uVar15 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG(__s), GH_ARG(__s), GH_ARG((CurlResData *)&local_b0));
        } while ((uVar15 & 1) == 0);
      }
      kScene__clearResData_0047e310(GH_ARG((kScene *)self), GH_ARG((CurlResData *)&local_b0));
      bzStateGame__CouponDel_003adf80(GH_ARG(self), GH_ARG(0), GH_ARG(*piVar19));
      *piVar19 = 0;
    }
    else {
      if (param_3 != 0x14) {
        if (param_3 == 1) goto LAB_003eec30;
        if (param_3 != 0x1a) {
          if (param_3 == 0x30) {
            piVar19 = (int *)(self + 0x32c8e8);
            if (*piVar19 < 0x3d) {
              iVar7 = *(int *)(self + (gh_long)*piVar19 * 4 + 0x8d834);
            }
            else {
              iVar25 = 0x4b0;
              if (*(int *)(self + 0x32c46c) % 10 != 2) {
                iVar25 = 0x708;
              }
              iVar7 = 600;
              if (*(int *)(self + 0x32c46c) % 10 != 3) {
                iVar7 = iVar25;
              }
            }
            if (*(int *)(self + 0x32c438) + *(int *)(self + 0x32c168) < iVar7) {
              if (*(int *)(self + 0x32c160) == 0) {
                SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14a0)), GH_ARG(false));
              }
              *(undefined4 *)(self + 0x1b00) = 3;
              *(undefined8 *)(self + 0x1af8) = 0x300000001;
              break;
            }
            bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(-iVar7));
            if (*(int *)(self + 0x32c160) == 0) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
            }
            lVar16 = 0;
            do {
              piVar18 = (int *)(self + lVar16 + 0x32c174);
              if (*piVar18 < piVar18[0x14]) {
                *piVar18 = piVar18[0x14];
              }
              if (piVar18[0x50] < piVar18[100]) {
                piVar18[0x50] = piVar18[100];
                *(undefined4 *)(self + lVar16 + 0x32c3f0) = 0;
              }
              lVar16 = lVar16 + 4;
            } while (lVar16 != 0x34);
            piVar18 = (int *)(self + 0x32c9ac);
            if (*piVar18 < 1) {
              if (*(int *)(self + 0x32c854) == 100) {
                iVar7 = *(int *)(self + 0x32c46c);
                if (9 < iVar7 % 100) {
                  iVar7 = (iVar7 * 2 + (iVar7 / 10) * -10 + -10) - (uint)(iVar7 % 100) % 10;
                  goto LAB_003ef850;
                }
              }
              else if ((*(int *)(self + 0x32c854) == 0) &&
                      (iVar7 = *(int *)(self + 0x32c46c) + -100, 99 < *(int *)(self + 0x32c46c))) {
LAB_003ef850:
                *(int *)(self + 0x32c46c) = iVar7;
              }
            }
            else if (0 < *(int *)(self + 0x32c46c) % 10) {
              iVar7 = *(int *)(self + 0x32c46c) + -1;
              goto LAB_003ef850;
            }
            *(undefined4 *)(self + 0x8db1c) = 0;
            *(undefined4 *)(self + 0x8dd1c) = 0;
            *(undefined8 *)(self + 0x8dd14) = 0;
            if (0 < *(int *)(self + 0x8daec)) {
              *(undefined4 *)(self + 0x8dda4) = 0;
              *(undefined8 *)(self + 0x8df9c) =
                   *(undefined8 *)(self + (gh_long)*(int *)(self + 0x8dfa8) * 0x10 + 0x8cb70);
              *(undefined4 *)(self + 0x8dfa4) =
                   *(undefined4 *)
                    ((gh_long)(self + (gh_long)*(int *)(self + 0x8dfa8) * 0x10 + 0x8cb70) + 8);
              *(undefined4 *)(self + 0x8e02c) = 0;
              puVar23 = (undefined4 *)(self + (gh_long)*(int *)(self + 0x8e230) * 0x10 + 0x8cb70);
              *(undefined4 *)(self + 0x8e224) = *puVar23;
              *(undefined4 *)(self + 0x8e228) = puVar23[1];
              *(undefined4 *)(self + 0x8e22c) = puVar23[2];
              *(undefined4 *)(self + 0x8e2b4) = 0;
              *(undefined8 *)(self + 0x8e4ac) =
                   *(undefined8 *)(self + (gh_long)*(int *)(self + 0x8e4b8) * 0x10 + 0x8cb70);
              *(undefined4 *)(self + 0x8e4b4) =
                   *(undefined4 *)
                    ((gh_long)(self + (gh_long)*(int *)(self + 0x8e4b8) * 0x10 + 0x8cb70) + 8);
            }
            if (*(int *)(self + 0x32c150) < 3) {
              *(int *)(self + 0x32c150) = 3;
            }
            if (*(int *)(self + 0x32c3f8) < 5) {
              *(int *)(self + 0x32c3f8) = 5;
            }
            *(undefined4 *)(self + 0x32c15c) = *(undefined4 *)(self + 0x32c214);
            *(undefined4 *)(self + 0x8db20) = 0x3f800000;
            *(int *)(self + 0x8daec) = *(int *)(self + 0x32c170);
            *(undefined4 *)(self + 0x8dd3c) = 0;
            *(undefined4 *)(self + 0x8dd4c) = 0;
            if (((*(int *)(self + 0x32c160) == 0) && (-0x96 < *(int *)(self + 0x8dac8))) &&
               ((*(int *)(self + 0x8dac8) < *(int *)(self + 0x1158) + 0x96 &&
                ((-0x1e < *(int *)(self + 0x8dacc) &&
                 (*(int *)(self + 0x8dacc) < *(int *)(self + 0x115c) + 100)))))) {
              SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1350)), GH_ARG(false));
            }
            if (*(int *)(self + 0x8db14) < 0x14) {
              iVar7 = *(int *)(self + 0x8dad8);
              iVar25 = 0x15;
            }
            else {
              if (*(int *)(self + 0x8db14) == 0x17) {
                *(undefined4 *)(self + 0x8dd1c) = 0xff;
                *(undefined8 *)(self + 0x8dd14) = 0xff000000ff;
              }
              iVar25 = 0xa8;
              *(int *)(self + 0x8dacc) = *(int *)(self + 0x8dacc) + -100;
              iVar7 = *(int *)(self + 0x8dad8);
            }
            bzStateGame__PXYAni_00432438(GH_ARG(self), GH_ARG(0), GH_ARG(iVar25), GH_ARG(iVar7), GH_ARG(in_w4));
            iVar7 = *(int *)(self + 0x32b828);
            uVar15 = (ulong)iVar7;
            if (0 < iVar7) {
              if (iVar7 == 1) {
                uVar17 = 0;
              }
              else {
                uVar17 = uVar15 & 0xfffffffffffffffe;
                puVar23 = (undefined4 *)(self + 0xb0d1c);
                uVar24 = uVar17;
                do {
                  puVar23[-0x14] = 0;
                  *puVar23 = 0;
                  uVar24 = uVar24 - 2;
                  puVar23 = puVar23 + 0x28;
                } while (uVar24 != 0);
                if (uVar17 == uVar15) goto LAB_003efbf8;
              }
              puVar23 = (undefined4 *)(self + uVar17 * 0x50 + 0xb0ccc);
              do {
                uVar17 = uVar17 + 1;
                *puVar23 = 0;
                puVar23 = puVar23 + 0x14;
              } while ((gh_long)uVar17 < (gh_long)uVar15);
            }
LAB_003efbf8:
            iVar7 = *piVar18;
            piVar20 = (int *)(self + 0x8dd9c);
            lVar16 = 0x1d;
            do {
              if ((iVar7 == 2) && (*piVar20 == 0x1a)) {
                iVar25 = 3000;
              }
              else {
                iVar25 = 0;
              }
              piVar20[-10] = iVar25;
              lVar16 = lVar16 + -1;
              piVar20 = piVar20 + 0xa2;
            } while (lVar16 != 0);
            bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x1b), GH_ARG(1), GH_ARG(*(int *)(self + 0x8dac8)), GH_ARG(*(int *)(self + 0x8dacc)));
            piVar20 = (int *)(self + 0x8dd74);
            lVar16 = 0x1d;
            do {
              if (0 < *piVar20) {
                piVar20[0x88] = *(int *)(self + 0x8dd0c);
              }
              lVar16 = lVar16 + -1;
              piVar20 = piVar20 + 0xa2;
            } while (lVar16 != 0);
            *(int *)(self + 0x32c8d8) = *(int *)(self + 0x32c8d8) + 1;
            *(undefined4 *)(self + 0x32c970) = 0;
            *(undefined4 *)(self + 0x1ae8) = 0xb;
            *(undefined4 *)(self + 0xc28) = 0;
            if (*piVar18 == 2) {
              fVar27 = *(float *)(self + 0x32c96c);
              cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_e8), GH_ARG(*(int *)(self + 0x32c968)));
              plVar8 = (gh_long *)FUN_009d7684(GH_ARG(&local_e8), GH_ARG(0), GH_ARG("af_def_"), GH_ARG(7));
              local_90 = *plVar8;
              *plVar8 = (gh_long)&DAT_00d40318;
              plVar8 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_90), GH_ARG(&DAT_00b008ce), GH_ARG(1));
              local_140[0] = *plVar8;
              *plVar8 = (gh_long)&DAT_00d40318;
              cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_f0), GH_ARG((int)fVar27));
              uVar15 = *(gh_long *)(local_f0 + -0x18) + *(gh_long *)(local_140[0] + -0x18);
              if ((*(ulong *)(local_140[0] + -0x10) < uVar15) &&
                 (uVar15 <= *(ulong *)(local_f0 + -0x10))) {
                puVar10 = (ulong *)FUN_009d7684(GH_ARG(&local_f0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
              }
              else {
                puVar10 = (ulong *)FUN_009d5908(GH_ARG(local_140), GH_ARG(&local_f0));
              }
              local_b0 = *puVar10;
              *puVar10 = (ulong)&DAT_00d40318;
              plVar8 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_b0), GH_ARG("_fail"), GH_ARG(5));
              local_e0 = *plVar8;
              *plVar8 = (gh_long)&DAT_00d40318;
              puVar9 = (undefined *)FUN_009d4eac(GH_ARG(&local_f8), GH_ARG("1"), GH_ARG(auStack_100), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
              bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar9), GH_ARG(1), GH_ARG((undefined *)&local_e0), GH_ARG((undefined *)&local_f8));
              if ((undefined8 *)(local_f8 + -0x18) != &DAT_00d40300) {
                piVar19 = (int *)(local_f8 + -8);
                do {
                  iVar7 = *piVar19;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar6) {
                    *piVar19 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 < 1) {
                  operator_delete((undefined8 *)(local_f8 + -0x18));
                }
              }
              if ((undefined8 *)(local_e0 + -0x18) != &DAT_00d40300) {
                piVar19 = (int *)(local_e0 + -8);
                do {
                  iVar7 = *piVar19;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar6) {
                    *piVar19 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 < 1) {
                  operator_delete((undefined8 *)(local_e0 + -0x18));
                }
              }
              if ((undefined8 *)(local_b0 - 0x18) != &DAT_00d40300) {
                piVar19 = (int *)(local_b0 - 8);
                do {
                  iVar7 = *piVar19;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar6) {
                    *piVar19 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 < 1) {
                  operator_delete((undefined8 *)(local_b0 - 0x18));
                }
              }
              if ((undefined8 *)(local_f0 + -0x18) != &DAT_00d40300) {
                piVar19 = (int *)(local_f0 + -8);
                do {
                  iVar7 = *piVar19;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar6) {
                    *piVar19 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 < 1) {
                  operator_delete((undefined8 *)(local_f0 + -0x18));
                }
              }
              if ((undefined8 *)(local_140[0] + -0x18) != &DAT_00d40300) {
                piVar19 = (int *)(local_140[0] + -8);
                do {
                  iVar7 = *piVar19;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar6) {
                    *piVar19 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 < 1) {
                  operator_delete((undefined8 *)(local_140[0] + -0x18));
                }
              }
              if ((undefined8 *)(local_90 + -0x18) != &DAT_00d40300) {
                piVar19 = (int *)(local_90 + -8);
                do {
                  iVar7 = *piVar19;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar6) {
                    *piVar19 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 < 1) {
                  operator_delete((undefined8 *)(local_90 + -0x18));
                }
              }
              if ((undefined8 *)(local_e8 + -0x18) != &DAT_00d40300) {
                piVar19 = (int *)(local_e8 + -8);
                do {
                  iVar7 = *piVar19;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar6) {
                    *piVar19 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 < 1) {
                  operator_delete((undefined8 *)(local_e8 + -0x18));
                }
              }
            }
            else if (*piVar18 == 0) {
              if (*(int *)(self + 0x32c854) == 0) {
                cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)local_140), GH_ARG(*piVar19));
                puVar10 = (ulong *)FUN_009d7684(GH_ARG(local_140), GH_ARG(0), GH_ARG("af_main_"), GH_ARG(8));
                local_b0 = *puVar10;
                *puVar10 = (ulong)&DAT_00d40318;
                plVar8 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_b0), GH_ARG("_fail"), GH_ARG(5));
                local_c0 = *plVar8;
                *plVar8 = (gh_long)&DAT_00d40318;
                puVar9 = (undefined *)FUN_009d4eac(GH_ARG(&local_c8), GH_ARG("1"), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
                bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar9), GH_ARG(1), GH_ARG((undefined *)&local_c0), GH_ARG((undefined *)&local_c8));
                if ((undefined8 *)(local_c8 + -0x18) != &DAT_00d40300) {
                  piVar19 = (int *)(local_c8 + -8);
                  do {
                    iVar7 = *piVar19;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                    if (bVar6) {
                      *piVar19 = iVar7 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar7 < 1) {
                    operator_delete((undefined8 *)(local_c8 + -0x18));
                  }
                }
                if ((undefined8 *)(local_c0 + -0x18) != &DAT_00d40300) {
                  piVar19 = (int *)(local_c0 + -8);
                  do {
                    iVar7 = *piVar19;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                    if (bVar6) {
                      *piVar19 = iVar7 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar7 < 1) {
                    operator_delete((undefined8 *)(local_c0 + -0x18));
                  }
                }
                if ((undefined8 *)(local_b0 - 0x18) != &DAT_00d40300) {
                  piVar19 = (int *)(local_b0 - 8);
                  do {
                    iVar7 = *piVar19;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                    if (bVar6) {
                      *piVar19 = iVar7 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar7 < 1) {
                    operator_delete((undefined8 *)(local_b0 - 0x18));
                  }
                }
                puVar11 = (undefined8 *)(local_140[0] + -0x18);
                if (puVar11 == &DAT_00d40300) break;
                piVar19 = (int *)(local_140[0] + -8);
                do {
                  iVar7 = *piVar19;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar6) {
                    *piVar19 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              else {
                cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)local_140), GH_ARG(*piVar19));
                puVar10 = (ulong *)FUN_009d7684(GH_ARG(local_140), GH_ARG(0), GH_ARG("af_zombie_"), GH_ARG(10));
                local_b0 = *puVar10;
                *puVar10 = (ulong)&DAT_00d40318;
                plVar8 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_b0), GH_ARG("_fail"), GH_ARG(5));
                local_d0 = *plVar8;
                *plVar8 = (gh_long)&DAT_00d40318;
                puVar9 = (undefined *)FUN_009d4eac(GH_ARG(&local_d8), GH_ARG("1"), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
                bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar9), GH_ARG(1), GH_ARG((undefined *)&local_d0), GH_ARG((undefined *)&local_d8));
                if ((undefined8 *)(local_d8 + -0x18) != &DAT_00d40300) {
                  piVar19 = (int *)(local_d8 + -8);
                  do {
                    iVar7 = *piVar19;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                    if (bVar6) {
                      *piVar19 = iVar7 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar7 < 1) {
                    operator_delete((undefined8 *)(local_d8 + -0x18));
                  }
                }
                if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
                  piVar19 = (int *)(local_d0 + -8);
                  do {
                    iVar7 = *piVar19;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                    if (bVar6) {
                      *piVar19 = iVar7 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar7 < 1) {
                    operator_delete((undefined8 *)(local_d0 + -0x18));
                  }
                }
                if ((undefined8 *)(local_b0 - 0x18) != &DAT_00d40300) {
                  piVar19 = (int *)(local_b0 - 8);
                  do {
                    iVar7 = *piVar19;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                    if (bVar6) {
                      *piVar19 = iVar7 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar7 < 1) {
                    operator_delete((undefined8 *)(local_b0 - 0x18));
                  }
                }
                puVar11 = (undefined8 *)(local_140[0] + -0x18);
                if (puVar11 == &DAT_00d40300) break;
                piVar19 = (int *)(local_140[0] + -8);
                do {
                  iVar7 = *piVar19;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar6) {
                    *piVar19 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              if (iVar7 < 1) {
                operator_delete(puVar11);
              }
            }
            break;
          }
          if (param_3 != 0x23) break;
        }
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14b8)), GH_ARG(false));
        }
        if (param_3 == 0x1a) {
          bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x1a), GH_ARG(0));
LAB_003ef6d8:
          builtin_strncpy(GH_ARG(self + 0xd38), GH_ARG("https://play.google.com/store/apps/details?id=jpark.AOS5"), GH_ARG(0x39));
        }
        else {
          if (*(int *)(self + 0x32c9a4) == 0x1a06) goto LAB_003ef6d8;
          memcpy(self + 0xd38,
                          "http://nesmgames.cafe24.com/click_ad4.php?game_id=568&game_name=AOS5&from_id=pop"
                          ,0x51);
        }
        FUN_009d4eac(GH_ARG(&local_b0), GH_ARG(self + 0xd38), GH_ARG(local_140), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        plVar8 = (gh_long *)cocos2d__Application__getInstance_00484a3c();
        gh_vcall(GH_ARG(plVar8), 0x60, GH_ARG(&local_b0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        *(undefined4 *)(self + 0x32c970) = 0;
        if ((undefined8 *)(local_b0 - 0x18) != &DAT_00d40300) {
          piVar19 = (int *)(local_b0 - 8);
          do {
            iVar7 = *piVar19;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar6) {
              *piVar19 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 < 1) {
            operator_delete((undefined8 *)(local_b0 - 0x18));
          }
        }
        break;
      }
      piVar19 = (int *)(self + 0x32c16c);
      if ((*piVar19 < 0xf) &&
         (*(int *)(self + (gh_long)*piVar19 * 4 + 0x13798) <=
          *(int *)(self + 0x32c438) + *(int *)(self + 0x32c168))) {
        bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(-*(int *)(self + (gh_long)*piVar19 * 4 + 0x13798)));
        iVar7 = *piVar19;
        *(int *)(self + 0x32c170) =
             (int)(((float)*(int *)(self + 0x32c170) / 10.0) *
                   (float)*(int *)(self + (gh_long)iVar7 * 4 + 0x138d8) +
                  (float)*(int *)(self + 0x32c170));
        *(int *)(self + 0x32c174) =
             (int)(((float)*(int *)(self + 0x32c174) / 10.0) *
                   (float)*(int *)(self + (gh_long)iVar7 * 4 + 0x13928) +
                  (float)*(int *)(self + 0x32c174));
        *piVar19 = iVar7 + 1;
        bzStateGame__AitemSsave_003ab270(GH_ARG(self));
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1320)), GH_ARG(false));
        }
        if (*(int *)(self + 0x196c) == -1) {
          FUN_009d4eac(GH_ARG(&local_b8), GH_ARG("FirstLevelUp"), GH_ARG(local_140), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
          bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(7), GH_ARG((undefined *)&local_b8));
          if ((undefined8 *)(local_b8 + -0x18) != &DAT_00d40300) {
            piVar18 = (int *)(local_b8 + -8);
            do {
              iVar7 = *piVar18;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar6) {
                *piVar18 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 < 1) {
              operator_delete((undefined8 *)(local_b8 + -0x18));
            }
          }
        }
      }
      else {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x14a0)), GH_ARG(false));
        }
        *(undefined4 *)(self + 0x1b00) = 3;
        *(undefined8 *)(self + 0x1af8) = 0x300000001;
      }
      if (*piVar19 != 0xf) break;
    }
LAB_003ef64c:
    *(undefined4 *)(self + 0x32c970) = 0;
    break;
  case 2:
    lVar16 = (gh_long)param_3;
    if (0x3d < param_3) {
      lVar16 = 0x3c;
    }
    *(undefined4 *)(self + 0x32c904) = 0;
    *(undefined8 *)(self + 0x32c8fc) = 0;
    *(undefined8 *)(self + 0x32c8f4) = 0;
    *(undefined4 *)(self + 0x32c908) = *(undefined4 *)(self + lVar16 * 4 + 0x8d074);
    *(undefined8 *)(self + 0x32c910) = 0;
    iVar7 = *(int *)(self + 0x32b824);
    uVar15 = (ulong)iVar7;
    if (0 < iVar7) {
      if (iVar7 == 1) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar15 & 0xfffffffffffffffe;
        puVar23 = (undefined4 *)(self + 0x8daec);
        uVar24 = uVar17;
        do {
          *puVar23 = 0;
          puVar23[0xa2] = 0;
          uVar24 = uVar24 - 2;
          puVar23 = puVar23 + 0x144;
        } while (uVar24 != 0);
        if (uVar17 == uVar15) goto LAB_003eed04;
      }
      puVar23 = (undefined4 *)(self + uVar17 * 0x288 + 0x8daec);
      do {
        uVar17 = uVar17 + 1;
        *puVar23 = 0;
        puVar23 = puVar23 + 0xa2;
      } while ((gh_long)uVar17 < (gh_long)uVar15);
    }
LAB_003eed04:
    iVar7 = *(int *)(self + 0x32b828);
    uVar15 = (ulong)iVar7;
    if (0 < iVar7) {
      if (iVar7 == 1) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar15 & 0xfffffffffffffffe;
        puVar23 = (undefined4 *)(self + 0xb0d1c);
        uVar24 = uVar17;
        do {
          puVar23[-0x14] = 0;
          *puVar23 = 0;
          uVar24 = uVar24 - 2;
          puVar23 = puVar23 + 0x28;
        } while (uVar24 != 0);
        if (uVar17 == uVar15) goto LAB_003eed78;
      }
      puVar23 = (undefined4 *)(self + uVar17 * 0x50 + 0xb0ccc);
      do {
        uVar17 = uVar17 + 1;
        *puVar23 = 0;
        puVar23 = puVar23 + 0x14;
      } while ((gh_long)uVar17 < (gh_long)uVar15);
    }
LAB_003eed78:
    iVar7 = 0xf0;
    memset(self + 0x32baa0,0,0xf0);
    *(undefined8 *)(self + (gh_long)*(int *)(self + 0x32c134) * 0x288 + 0x8d88c) = 0;
    bzStateGame__GStage_00431270(GH_ARG(self), GH_ARG(param_3), GH_ARG(iVar7));
    *(undefined4 *)(self + 0x32c844) = 1;
    *(undefined4 *)(self + 0x32c8bc) = 0;
    *(undefined8 *)(self + 0x32ba44) = 0;
    *(undefined4 *)(self + 0x32ba84) = 0;
    *(undefined4 *)(self + 0x32c858) = 0;
    *(undefined4 *)(self + 0x32c93c) = 2;
    *(undefined4 *)(self + 0x32c8ac) = 5;
    *(undefined4 *)(self + 0x32c114) = 0xffffffff;
    if (*(int *)(self + 0x32c424) == 0xf6) {
      *(undefined4 *)(self + 0x32c428) = 200;
    }
    *(undefined4 *)(self + 0x32c13c) = 0;
    bzStateGame__GOrderload_003a39c8(GH_ARG(self));
    break;
  case 3:
    piVar19 = (int *)(self + 0x8dd08);
    iVar25 = *piVar19;
    iVar7 = *(int *)(self + (gh_long)iVar25 * 4 + 0x8db28);
    if (iVar7 < 0) {
      *piVar19 = 0;
      iVar7 = *(int *)(self + 0x8db28);
      iVar25 = 0;
    }
    *(int *)(self + 0x8daf0) = iVar7;
    *piVar19 = iVar25 + 1;
    iVar25 = *(int *)(self + 0x8dac8) + 2;
    if (*(int *)(self + 0x1158) + 0xb4 <= *(int *)(self + 0x8dac8)) {
      iVar25 = -0x50;
    }
    *(int *)(self + 0x8dac8) = iVar25;
    bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(0), GH_ARG(iVar25 + -0x50), GH_ARG(*(int *)(self + 0x8dacc) + -0x28), GH_ARG(iVar7), GH_ARG(0), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.1), GH_ARG(0));
    bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(0), GH_ARG(*(int *)(self + 0x8dac8) + 10), GH_ARG(*(int *)(self + 0x8dacc) + 10), GH_ARG(*(int *)(self + 0x8daf0)), GH_ARG(0), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.2), GH_ARG(0));
    bzStateGame__LPimg_0041db74(GH_ARG(self), GH_ARG(0), GH_ARG(*(int *)(self + 0x8dac8) + -0x32), GH_ARG(*(int *)(self + 0x8dacc) + 0x32), GH_ARG(*(int *)(self + 0x8daf0)), GH_ARG(0), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0.3), GH_ARG(0));
    break;
  case 4:
    if (*(int *)(self + 0x1a98) == 1) {
      *(undefined4 *)(self + 0x1a98) = 2;
      *(undefined4 *)(self + 0x32c5f8) = 0;
      *(undefined4 *)(self + 0x32c620) = 0;
    }
    if (*(int *)(self + 0x1a9c) == 1) {
      *(undefined4 *)(self + 0x1a9c) = 2;
      *(undefined4 *)(self + 0x32c5fc) = 0;
      *(undefined4 *)(self + 0x32c624) = 0;
    }
    if (*(int *)(self + 0x1aa0) == 1) {
      *(undefined4 *)(self + 0x1aa0) = 2;
      *(undefined4 *)(self + 0x32c600) = 0;
      *(undefined4 *)(self + 0x32c628) = 0;
    }
    if (*(int *)(self + 0x1aa4) == 1) {
      *(undefined4 *)(self + 0x1aa4) = 2;
      *(undefined4 *)(self + 0x32c604) = 0;
      *(undefined4 *)(self + 0x32c62c) = 0;
    }
    if (*(int *)(self + 0x1aa8) == 1) {
      *(undefined4 *)(self + 0x1aa8) = 2;
      *(undefined4 *)(self + 0x32c608) = 0;
      *(undefined4 *)(self + 0x32c630) = 0;
    }
    if (*(int *)(self + 0x1aac) == 1) {
      *(undefined4 *)(self + 0x1aac) = 2;
      *(undefined4 *)(self + 0x32c60c) = 0;
      *(undefined4 *)(self + 0x32c634) = 0;
    }
    if (*(int *)(self + 0x1ab0) == 1) {
      *(undefined4 *)(self + 0x1ab0) = 2;
      *(undefined4 *)(self + 0x32c610) = 0;
      *(undefined4 *)(self + 0x32c638) = 0;
    }
    if (*(int *)(self + 0x1ab4) == 1) {
      *(undefined4 *)(self + 0x1ab4) = 2;
      *(undefined4 *)(self + 0x32c614) = 0;
      *(undefined4 *)(self + 0x32c63c) = 0;
    }
    if (*(int *)(self + 0x1ab8) == 1) {
      *(undefined4 *)(self + 0x1ab8) = 2;
      *(undefined4 *)(self + 0x32c618) = 0;
      *(undefined4 *)(self + 0x32c640) = 0;
    }
    if (*(int *)(self + 0x1abc) == 1) {
      *(undefined4 *)(self + 0x1abc) = 2;
      *(undefined4 *)(self + 0x32c61c) = 0;
      *(undefined4 *)(self + 0x32c644) = 0;
    }
    bzStateGame__MainRewardSave_003aaff4(GH_ARG(self));
    bzStateGame__WeaponAni_003f1548(GH_ARG(self), GH_ARG(0x1c), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    piVar19 = (int *)(self + 0x32c8fc);
    piVar18 = (int *)(self + 0x32aad0);
    *(int *)(self + 0x32c178) = *(int *)(self + 0x32c150) * 10;
    *piVar19 = 0;
    *piVar18 = 0;
    fVar27 = 2.0;
    if (*(int *)(self + 0x32c3fc) < 1) {
      fVar27 = 1.0;
    }
    fVar28 = fVar27 + 1.0;
    if (*(int *)(self + 0x32c400) < 1) {
      fVar28 = fVar27;
    }
    fVar27 = fVar28 + 1.0;
    if (*(int *)(self + 0x32c404) < 1) {
      fVar27 = fVar28;
    }
    iVar25 = (int)fVar27;
    iVar7 = 0;
    if (iVar25 < *(int *)(self + 0x32c134)) {
      lVar16 = (gh_long)iVar25;
      iVar7 = 0;
      piVar20 = (int *)(self + (gh_long)iVar25 * 0x288 + 0x8daec);
      do {
        if ((0 < *piVar20) && (-800 < piVar20[-9])) {
          iVar7 = iVar7 + 1;
          *piVar19 = iVar7;
        }
        lVar16 = lVar16 + 1;
        piVar20 = piVar20 + 0xa2;
      } while (lVar16 < *(int *)(self + 0x32c134));
    }
    iVar7 = iVar7 + *(int *)(self + 0x32c13c);
    puVar1 = (uint *)(self + 0x32c928);
    *piVar19 = iVar7;
    *puVar1 = 0;
    iVar25 = *(int *)(self + 0x32c910);
    fVar27 = (float)iVar25;
    fVar28 = ((float)*(int *)(self + 0x32c914) / 100.0) * 70.0;
    uVar22 = 2;
    if (fVar27 < fVar28) {
      uVar22 = 1;
    }
    if ((0 < iVar7) || (uVar22 = (uint)(fVar28 <= fVar27), fVar28 <= fVar27)) {
      *puVar1 = uVar22;
    }
    if ((fVar28 <= fVar27) && (0 < *(int *)(self + 0x32c908))) {
      uVar22 = uVar22 + 1;
      *puVar1 = uVar22;
    }
    puVar11 = (undefined8 *)(self + 0x32c118);
    puVar2 = (uint *)(self + 0x32c8e8);
    piVar20 = (int *)(self + 0x32c854);
    *puVar11 = 0;
    if ((*(int *)(self + (gh_long)(int)(*puVar2 + *piVar20 + 1) * 4 + 0x400) < 1) && (uVar22 != 0)) {
      iVar7 = iVar7 * 500 + iVar25 * 0x32 + uVar22 * 700;
      *piVar18 = iVar7;
      bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(iVar7));
      uVar22 = *piVar20 + *puVar2;
      if ((((*(int *)(self + 0x32c430) < (int)uVar22) && (uVar22 < 0x37)) &&
          (uVar15 = (ulong)uVar22, (1LL << (uVar15 & 0x3f) & 0x42108421084224U) != 0)) &&
         (*(uint *)(self + 0x32c430) = uVar22 + 1, uVar22 < 0x37)) {
        piVar18 = (int *)(self + 0x32c11c);
        if ((1LL << (uVar15 & 0x3f) & 0x2008020080204U) != 0) {
          *(undefined4 *)puVar11 = 1;
          if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
             || (*(int *)(self + 0xba8) == 1)) {
            iVar7 = 8000;
            *piVar18 = 8000;
          }
          else {
            local_b0 = 0x1f3f00000000;
            pmVar12 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar12), GH_ARG((param_type *)&local_b0));
            iVar7 = iVar7 + 3000;
            *piVar18 = iVar7;
          }
          goto LAB_003ee8b0;
        }
        if ((1LL << (uVar15 & 0x3f) & 0x40100401004020U) != 0) {
          *(undefined4 *)puVar11 = 9;
          if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
              ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0))
             || (*(int *)(self + 0xba8) == 1)) {
            iVar7 = 3000;
          }
          else {
            local_b0 = 0xbb700000000;
            pmVar12 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
            iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar12), GH_ARG((param_type *)&local_b0));
            iVar7 = iVar7 + 1000;
          }
          *piVar18 = iVar7;
          bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(iVar7));
        }
      }
    }
    else {
      iVar7 = iVar7 * 200 + iVar25 * 10 + uVar22 * 300;
      *piVar18 = iVar7;
LAB_003ee8b0:
      bzStateGame__Gold_003acc54(GH_ARG(self), GH_ARG(iVar7));
    }
    uVar22 = *puVar1;
    if (*(int *)(self + (gh_long)(int)(*piVar20 + *puVar2) * 4 + 0x400) < (int)uVar22) {
      *(uint *)(self + (gh_long)(int)(*piVar20 + *puVar2) * 4 + 0x400) = uVar22;
      uVar22 = *puVar1;
    }
    if ((((0 < (int)uVar22) && ((int)*puVar2 < 0x3c)) &&
        (iVar7 = *puVar2 + *piVar20 + 1, *(int *)(self + (gh_long)iVar7 * 4 + 0x400) < 0)) &&
       ((*(undefined4 *)(self + (gh_long)iVar7 * 4 + 0x400) = 0, *(int *)(self + 0x32c7e8) == -1 &&
        (*(int *)(self + 0x408) == 0)))) {
      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x18), GH_ARG(0));
    }
    *(undefined4 *)(self + 0x1ae8) = 0xe;
    self[0x32aad4] = 0;
    if (*(int *)(self + 0x8da3c) == 1) {
      *(undefined4 *)(self + 0x5a0) = 0xffffffff;
      *(undefined8 *)(self + 0x598) = 0xffffffffffffffff;
      *(undefined4 *)(self + 0x410) = 0xffffffff;
      *(undefined8 *)(self + 0x408) = 0xffffffffffffffff;
    }
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    bzStateGame__BackupStage_Save_003a4b34(GH_ARG(self));
    if (*(int *)(self + 0xbd0) == 1) {
      *(undefined4 *)(self + 0xbd0) = 0;
      *(undefined4 *)(self + 0xc04) = 0;
    }
    uVar22 = *puVar1;
    iVar7 = *(int *)(self + 0x32c910);
    if ((int)uVar22 < 2) {
      if ((int)uVar22 < 1 || 0 < *(int *)(self + (gh_long)(int)(*puVar2 + *piVar20 + 1) * 4 + 0x400)) {
LAB_003eea24:
        iVar25 = *piVar19;
        iVar21 = 10;
        iVar26 = 200;
        iVar13 = 300;
        goto LAB_003eea34;
      }
      iVar7 = iVar7 * 0x32 + *piVar19 * 500;
      iVar13 = 700;
    }
    else {
      if ((int)uVar22 < 1 || 0 < *(int *)(self + (gh_long)(int)(*puVar2 + *piVar20 + 1) * 4 + 0x400))
      goto LAB_003eea24;
      iVar25 = *piVar19;
      iVar21 = 0x32;
      iVar26 = 500;
      iVar13 = 700;
LAB_003eea34:
      iVar7 = iVar7 * iVar21 + iVar25 * iVar26;
      iVar13 = uVar22 * iVar13;
    }
    cocos2d__Application__getInstance_00484a3c();
    puVar9 = (undefined *)cocos2d__Application__getNetStatus_004862f4();
    if ((((ulong)puVar9 & 1) != 0) && (uVar15 = bzStateGame__ExeIsSigned_003a7c88(GH_ARG(puVar9)), (uVar15 & 1) != 0)) {
      FUN_009d4eac(GH_ARG(&local_b0), GH_ARG("BestScoreStage"), GH_ARG(&local_90), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      lVar16 = std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string_____find_00478438(GH_ARG((_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
                                *)(self + 0x3a0)), GH_ARG((string *)&local_b0));
      if ((undefined8 *)(local_b0 - 0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_b0 - 8);
        do {
          iVar25 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar25 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar25 < 1) {
          operator_delete((undefined8 *)(local_b0 - 0x18));
        }
      }
      puVar9 = (undefined *)FUN_009d881c(GH_ARG(&local_108), GH_ARG(lVar16 + 0x28));
      bzStateGame__ExesubmitScore_004337fc(GH_ARG(puVar9), GH_ARG((undefined *)&local_108), GH_ARG((gh_long)(iVar7 + iVar13)));
      if ((undefined8 *)(local_108 + -0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_108 + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_108 + -0x18));
        }
      }
    }
    if (*(int *)(self + 0x32c9ac) != 0) break;
    if (*piVar20 == 0) {
      uVar22 = *puVar2;
      if ((4 < (int)uVar22) && ((int)uVar22 % 5 == 0)) {
        cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_90), GH_ARG(uVar22));
        plVar8 = (gh_long *)FUN_009d7684(GH_ARG(&local_90), GH_ARG(0), GH_ARG("Level"), GH_ARG(5));
        local_140[0] = *plVar8;
        *plVar8 = (gh_long)&DAT_00d40318;
        puVar10 = (ulong *)FUN_009d5ac8(GH_ARG(local_140), GH_ARG("Success"), GH_ARG(7));
        local_b0 = *puVar10;
        *puVar10 = (ulong)&DAT_00d40318;
        if ((undefined8 *)(local_140[0] + -0x18) != &DAT_00d40300) {
          piVar19 = (int *)(local_140[0] + -8);
          do {
            iVar7 = *piVar19;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar6) {
              *piVar19 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 < 1) {
            operator_delete((undefined8 *)(local_140[0] + -0x18));
          }
        }
        uVar22 = uVar22 / 5 + 8;
        if ((undefined8 *)(local_90 + -0x18) != &DAT_00d40300) {
          piVar19 = (int *)(local_90 + -8);
          do {
            iVar7 = *piVar19;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar6) {
              *piVar19 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 < 1) {
            operator_delete((undefined8 *)(local_90 + -0x18));
          }
        }
        if (*(int *)(self + (ulong)uVar22 * 4 + 0x1950) == -1) {
          FUN_009d881c(GH_ARG(&local_110), GH_ARG(&local_b0));
          bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(uVar22), GH_ARG((undefined *)&local_110));
          if ((undefined8 *)(local_110 + -0x18) != &DAT_00d40300) {
            piVar19 = (int *)(local_110 + -8);
            do {
              iVar7 = *piVar19;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar6) {
                *piVar19 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 < 1) {
              operator_delete((undefined8 *)(local_110 + -0x18));
            }
          }
        }
        if ((undefined8 *)(local_b0 - 0x18) != &DAT_00d40300) {
          piVar19 = (int *)(local_b0 - 8);
          do {
            iVar7 = *piVar19;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar6) {
              *piVar19 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 < 1) {
            operator_delete((undefined8 *)(local_b0 - 0x18));
          }
        }
        uVar22 = *puVar2;
      }
      cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)local_140), GH_ARG(uVar22));
      puVar10 = (ulong *)FUN_009d7684(GH_ARG(local_140), GH_ARG(0), GH_ARG("af_main_"), GH_ARG(8));
      local_b0 = *puVar10;
      *puVar10 = (ulong)&DAT_00d40318;
      plVar8 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_b0), GH_ARG("_clear"), GH_ARG(6));
      local_118 = *plVar8;
      *plVar8 = (gh_long)&DAT_00d40318;
      puVar9 = (undefined *)FUN_009d4eac(GH_ARG(&local_120), GH_ARG("1"), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar9), GH_ARG(1), GH_ARG((undefined *)&local_118), GH_ARG((undefined *)&local_120));
      if ((undefined8 *)(local_120 + -0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_120 + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_120 + -0x18));
        }
      }
      if ((undefined8 *)(local_118 + -0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_118 + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_118 + -0x18));
        }
      }
      if ((undefined8 *)(local_b0 - 0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_b0 - 8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_b0 - 0x18));
        }
      }
      puVar11 = (undefined8 *)(local_140[0] + -0x18);
      if (puVar11 != &DAT_00d40300) {
        piVar19 = (int *)(local_140[0] + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_003f033c;
      }
    }
    else {
      cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)local_140), GH_ARG(*puVar2));
      puVar10 = (ulong *)FUN_009d7684(GH_ARG(local_140), GH_ARG(0), GH_ARG("af_zombie_"), GH_ARG(10));
      local_b0 = *puVar10;
      *puVar10 = (ulong)&DAT_00d40318;
      plVar8 = (gh_long *)FUN_009d5ac8(GH_ARG(&local_b0), GH_ARG("_clear"), GH_ARG(6));
      local_128 = *plVar8;
      *plVar8 = (gh_long)&DAT_00d40318;
      puVar9 = (undefined *)FUN_009d4eac(GH_ARG(&local_130), GH_ARG("1"), GH_ARG(&local_e8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      bzStateGame__SendAppsFlyerEvent_0039ff08(GH_ARG(puVar9), GH_ARG(1), GH_ARG((undefined *)&local_128), GH_ARG((undefined *)&local_130));
      if ((undefined8 *)(local_130 + -0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_130 + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_130 + -0x18));
        }
      }
      if ((undefined8 *)(local_128 + -0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_128 + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_128 + -0x18));
        }
      }
      if ((undefined8 *)(local_b0 - 0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_b0 - 8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_b0 - 0x18));
        }
      }
      puVar11 = (undefined8 *)(local_140[0] + -0x18);
      if (puVar11 != &DAT_00d40300) {
        piVar19 = (int *)(local_140[0] + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_003f033c:
        if (iVar7 < 1) {
          operator_delete(puVar11);
        }
      }
    }
    if ((4 < (int)*puVar2) && ((int)*puVar2 % 5 == 0)) {
      *(undefined4 *)(self + 0x1af0) = 0xd;
      self[0x1af4] = 0;
    }
    break;
  case 5:
    if (param_3 == 0) {
      *(undefined4 *)(self + 0x8daec) = *(undefined4 *)(self + 0x32c170);
      bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(0x1a), GH_ARG(0), GH_ARG(0), GH_ARG(in_w5), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
      cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_f0), GH_ARG(*(int *)(self + 0x32c170) << 1));
      plVar8 = (gh_long *)FUN_009d7684(GH_ARG(&local_f0), GH_ARG(0), GH_ARG(&DAT_00a4e7c8), GH_ARG(4));
      local_e8 = *plVar8;
      *plVar8 = (gh_long)&DAT_00d40318;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_140), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = 0x40e00000432e0000;
      kFont__drawString_0047ae54(GH_ARG(local_b0), GH_ARG(local_b0 >> 0x20), GH_ARG(uStack_a8 & 0xffffffff), GH_ARG(uStack_a8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(&local_e8), GH_ARG(&local_90), GH_ARG(1));
      if ((undefined8 *)(local_e8 + -0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_e8 + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_e8 + -0x18));
        }
      }
      if ((undefined8 *)(local_f0 + -0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_f0 + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_f0 + -0x18));
        }
      }
      cocos2d__StringUtils__toString_int__003b434c(GH_ARG((undefined *)&local_f0), GH_ARG(*(int *)(self + 0x32c174) << 1));
      plVar8 = (gh_long *)FUN_009d7684(GH_ARG(&local_f0), GH_ARG(0), GH_ARG("Power: "), GH_ARG(7));
      local_e8 = *plVar8;
      *plVar8 = (gh_long)&DAT_00d40318;
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)&local_b0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      cocos2d__Color4F__Color4F_0060bc2c(GH_ARG((Color4F *)local_140), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(0.0), GH_ARG(1.0));
      local_90 = 0x42280000432e0000;
      kFont__drawString_0047ae54(GH_ARG(local_b0), GH_ARG(local_b0 >> 0x20), GH_ARG(uStack_a8 & 0xffffffff), GH_ARG(uStack_a8 >> 0x20), GH_ARG(*(undefined8 *)(self + 0x8da80)), GH_ARG(&local_e8), GH_ARG(&local_90), GH_ARG(1));
      if ((undefined8 *)(local_e8 + -0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_e8 + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_e8 + -0x18));
        }
      }
      if ((undefined8 *)(local_f0 + -0x18) != &DAT_00d40300) {
        piVar19 = (int *)(local_f0 + -8);
        do {
          iVar7 = *piVar19;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 < 1) {
          operator_delete((undefined8 *)(local_f0 + -0x18));
        }
      }
    }
    bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(0), GH_ARG(0x1b6), GH_ARG(6), GH_ARG(in_w5), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
    iVar7 = 0x2f;
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(*(int *)(self + 0x32c434) + *(int *)(self + 0x32c164)), GH_ARG(0x284), GH_ARG(0x2f), GH_ARG(0xff), GH_ARG(0xba), GH_ARG(0), GH_ARG(1.0), GH_ARG(1.0));
    bzStateGame__MBarimg_003ecaf4(GH_ARG(self), GH_ARG(0), GH_ARG(1), GH_ARG(0x2ba), GH_ARG(6), GH_ARG(iVar7), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(1.0));
    bzStateGame__ImgNumber_003b376c(GH_ARG(self), GH_ARG(3), GH_ARG(0x14), GH_ARG(*(int *)(self + 0x32c438) + *(int *)(self + 0x32c168)), GH_ARG(0x388), GH_ARG(0x2f), GH_ARG(0xd8), GH_ARG(0x2b), GH_ARG(0xdf), GH_ARG(1.0), GH_ARG(1.0));
    if (*(int *)(self + 0x8da48) != 0xece2) {
      memset(self + 0x400,0xff,800);
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    }
    break;
  case 6:
    iVar7 = 0x44;
    do {
      if (iVar7 == 0x7f) {
        iVar25 = 0xb4;
      }
      else {
        iVar25 = iVar7;
        if (iVar7 == 0xbc) {
          iVar25 = 0x143;
        }
      }
      if (*(kSprite **)(self + (gh_long)iVar25 * 8 + 0x320d68) != (kSprite *)0x0) {
        kScene__clearSprite_0047daa8(GH_ARG((kScene *)self), GH_ARG(3), GH_ARG((kSprite **)(self + (gh_long)iVar25 * 8 + 0x320d68)));
      }
      *(undefined4 *)(self + (gh_long)iVar25 * 4 + 0x322668) = 0;
      *(undefined4 *)(self + (gh_long)iVar25 * 4 + 0x3232e8) = 0;
      iVar7 = iVar25 + 1;
    } while (iVar25 < 0x14d);
    break;
  case 7:
    iVar7 = *(int *)(self + 0x32ba24);
    iVar25 = *(int *)(self + 0x32c934);
    if (param_3 != 1) {
      iVar13 = iVar25 - iVar7;
      if (iVar13 != 0 && iVar7 <= iVar25) {
        iVar7 = 400;
        if (iVar13 < 0x7d5) {
          iVar7 = iVar13 / 5;
        }
        *(int *)(self + 0x32c930) = iVar7;
      }
      piVar19 = (int *)(self + 0x32c92c);
      if (*piVar19 < -0x474) {
        iVar7 = 0;
LAB_003eef30:
        *piVar19 = iVar7;
      }
      else if (0 < *piVar19) {
        iVar7 = -0x474;
        goto LAB_003eef30;
      }
      bzStateGame__bigBimg_drawImage_003ec894(GH_ARG(self), GH_ARG(1), GH_ARG(0), GH_ARG(0), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.3));
      bzStateGame__bigBimg_drawImage2_004031cc(GH_ARG(self), GH_ARG(2), GH_ARG(*piVar19), GH_ARG((int)((float)*(int *)(self + 0x32c930) + param_5)), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.3));
      bzStateGame__bigBimg_drawImage2_004031cc(GH_ARG(self), GH_ARG(2), GH_ARG(*piVar19 + 0x474), GH_ARG((int)((float)*(int *)(self + 0x32c930) + param_5)), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.3));
      break;
    }
    iVar13 = iVar25 - iVar7;
    if (iVar13 != 0 && iVar7 <= iVar25) {
      iVar7 = iVar13;
      if (iVar13 < 0) {
        iVar7 = iVar13 + 1;
      }
      iVar25 = 0x1a4;
      if (iVar13 < 0x34a) {
        iVar25 = iVar7 >> 1;
      }
      *(int *)(self + 0x32c930) = iVar25;
    }
    piVar19 = (int *)(self + 0x32c92c);
    if (*piVar19 < -0x476) {
      iVar7 = 0;
LAB_003eee78:
      *piVar19 = iVar7;
    }
    else if (0 < *piVar19) {
      iVar7 = -0x476;
      goto LAB_003eee78;
    }
    bzStateGame__bigBimg_drawImage_003ec894(GH_ARG(self), GH_ARG(4), GH_ARG(0), GH_ARG(0), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.3));
    bzStateGame__bigBimg_drawImage2_004031cc(GH_ARG(self), GH_ARG(5), GH_ARG(*piVar19), GH_ARG(*(int *)(self + 0x32c930) + -0x14), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.3));
    bzStateGame__bigBimg_drawImage2_004031cc(GH_ARG(self), GH_ARG(5), GH_ARG(*piVar19 + 0x476), GH_ARG(*(int *)(self + 0x32c930) + -0x14), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(0xff), GH_ARG(1.0), GH_ARG(0), GH_ARG(1.3));
    break;
  case 8:
    uVar15 = (gh_long)param_3;
    do {
      if (*(int *)(self + uVar15 * 4 + 0x400) == -1) {
        uVar17 = uVar15 & 0xffffffff;
        if (param_3 == 1) goto LAB_003ee1a0;
        goto LAB_003ee868;
      }
      uVar17 = uVar15 + 1;
      bVar6 = (gh_long)uVar15 < (gh_long)(param_3 + 0x31);
      uVar15 = uVar17;
    } while (bVar6);
    if (param_3 == 1) {
LAB_003ee1a0:
      iVar13 = (int)uVar17;
      iVar25 = iVar13 + -2;
      uVar22 = 0xc940;
      bVar5 = SBORROW4(iVar13,0x32);
      iVar7 = iVar13 + -0x32;
      bVar6 = iVar13 == 0x32;
    }
    else {
LAB_003ee868:
      iVar13 = (int)uVar17;
      iVar25 = iVar13 + -0x66;
      uVar22 = 0xc944;
      bVar5 = SBORROW4(iVar13,0x96);
      iVar7 = iVar13 + -0x96;
      bVar6 = iVar13 == 0x96;
    }
    *(int *)(self + (uVar22 | 0x320000)) = iVar25;
    uVar14 = 5;
    if (bVar6 || iVar7 < 0 != bVar5) {
      uVar14 = 0;
    }
    *(undefined4 *)(self + 0x32c948) = uVar14;
    break;
  case 9:
    bzStateGame__BackupStage_Save_003a4b34(GH_ARG(self));
    memset(self + 0x32c14c,0,0x63c);
    *(undefined4 *)(self + 0x32c148) = 0x1a05;
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar7 = 0xf0;
    }
    else {
      local_b0 = 0xef00000000;
      pmVar12 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar12), GH_ARG((param_type *)&local_b0))
      ;
      iVar7 = iVar7 + 5;
    }
    *(int *)(self + 0x32c14c) = iVar7;
    *(undefined8 *)(self + 0x32c15c) = 0x14;
    *(undefined8 *)(self + 0x32c154) = 0;
    *(undefined8 *)(self + 0x32c434) = 1000;
    *(undefined8 *)(self + 0x32c16c) = 0x1f400000001;
    *(undefined8 *)(self + 0x32c164) = 1000;
    *(undefined4 *)(self + 0x32c174) = 0x1e;
    *(undefined4 *)(self + 0x32c214) = 0x14;
    *(undefined4 *)(self + 0x32c354) = 5;
    *(undefined8 *)(self + 0x32c3f8) = 5;
    *(undefined8 *)(self + 0x32c400) = 0;
    *(undefined8 *)(self + 0x32c1a0) = 0;
    *(undefined8 *)(self + 0x32c198) = 0;
    *(undefined8 *)(self + 0x32c188) = 0;
    *(undefined8 *)(self + 0x32c180) = 0;
    *(undefined4 *)(self + 0x32c1a8) = 0;
    *(undefined8 *)(self + 0x32c190) = 0;
    *(undefined8 *)(self + 0x32c178) = 0;
    *(undefined8 *)(self + 0x32c1f0) = 0;
    *(undefined8 *)(self + 0x32c1e8) = 0;
    *(undefined8 *)(self + 0x32c1e0) = 0;
    *(undefined8 *)(self + 0x32c1d8) = 0;
    *(undefined8 *)(self + 0x32c1d0) = 0;
    *(undefined4 *)(self + 0x32c1f8) = 0;
    *(undefined8 *)(self + 0x32c1c8) = 0;
    *(undefined8 *)(self + 0x32c220) = 0x100000001;
    *(undefined8 *)(self + 0x32c218) = 0x100000001;
    *(undefined8 *)(self + 0x32c230) = 0x100000001;
    *(undefined8 *)(self + 0x32c228) = 0x100000001;
    *(undefined8 *)(self + 0x32c240) = 0x100000001;
    *(undefined8 *)(self + 0x32c238) = 0x100000001;
    *(undefined4 *)(self + 0x32c248) = 1;
    *(undefined4 *)(self + 0x32c24c) = 1;
    *(undefined8 *)(self + 0x32c258) = 0x100000001;
    *(undefined8 *)(self + 0x32c250) = 0x100000001;
    *(undefined4 *)(self + 0x32c260) = 1;
    *(undefined4 *)(self + 0x32c38c) = 1;
    lVar16 = 0;
    do {
      iVar7 = *(int *)(self + 0x130d4);
      *(int *)(self + lVar16 + 0x32c268) =
           iVar7 + (int)(((float)iVar7 / 10.0) * (float)*(int *)(self + lVar16 + 0x130d8));
      lVar16 = lVar16 + 4;
    } while (lVar16 != 0x48);
    memset(self + 0x32c5f8,0,0x50);
    *(undefined8 *)(self + 0x32c650) = 0x100000001;
    *(undefined8 *)(self + 0x32c648) = 0x100000001;
    *(undefined8 *)(self + 0x32c660) = 0x100000001;
    *(undefined8 *)(self + 0x32c658) = 0x100000001;
    *(undefined8 *)(self + 0x32c668) = 0x100000001;
    lVar16 = 0;
    do {
      iVar7 = *(int *)(self + 0x130d4);
      *(int *)(self + lVar16 + 0x32c670) =
           ((iVar7 + (int)(((float)iVar7 / 10.0) * (float)*(int *)(self + lVar16 + 0x130dc))) * 0x82
           ) / 100;
      lVar16 = lVar16 + 4;
    } while (lVar16 != 0x28);
    *(undefined4 *)(self + 0x32c3dc) = *(undefined4 *)(self + 0x134e4);
    *(undefined8 *)(self + 0x32c2e0) = 0;
    *(undefined8 *)(self + 0x32c2d8) = 0;
    *(undefined8 *)(self + 0x32c2d0) = 0;
    *(undefined8 *)(self + 0x32c2c8) = 0;
    *(undefined8 *)(self + 0x32c2c0) = 0;
    *(undefined8 *)(self + 0x32c2b8) = 0;
    *(undefined4 *)(self + 0x32c2e8) = 0;
    *(undefined8 *)(self + 0x32c330) = 0;
    *(undefined8 *)(self + 0x32c328) = 0;
    *(undefined8 *)(self + 0x32c320) = 0;
    *(undefined8 *)(self + 0x32c318) = 0;
    *(undefined8 *)(self + 0x32c310) = 0;
    *(undefined8 *)(self + 0x32c308) = 0;
    *(undefined4 *)(self + 0x32c338) = 0;
    *(undefined8 *)(self + 0x32c360) = 0x100000001;
    *(undefined8 *)(self + 0x32c358) = 0x100000001;
    *(undefined8 *)(self + 0x32c370) = 0x100000001;
    *(undefined8 *)(self + 0x32c368) = 0x100000001;
    *(undefined8 *)(self + 0x32c380) = 0x100000001;
    *(undefined8 *)(self + 0x32c378) = 0x100000001;
    *(undefined4 *)(self + 0x32c388) = 1;
    lVar16 = 0;
    do {
      *(int *)(self + lVar16 + 0x32c3a8) =
           *(int *)(self + 0x13438) +
           (int)(((float)*(int *)(self + 0x13438) / 10.0) * (float)*(int *)(self + lVar16 + 0x1343c)
                );
      lVar16 = lVar16 + 4;
    } while (lVar16 != 0x34);
    memset(self + 0x32c788,0xff,0x80);
    *(undefined8 *)(self + 0x32c424) = 0;
    if (((*(int *)(self + 0x1ae8) - 0xdU < 0x3e) &&
        ((1LL << ((ulong)(*(int *)(self + 0x1ae8) - 0xdU) & 0x3f) & 0x3200000000000081U) != 0)) ||
       (*(int *)(self + 0xba8) == 1)) {
      iVar7 = 6;
    }
    else {
      local_b0 = 0x500000000;
      pmVar12 = (mersenne_twister_engine *)cocos2d__RandomHelper__getEngine_0060b3d4();
      iVar7 = std__uniform_int_distribution_int___operator___00477ad0(GH_ARG((uniform_int_distribution_int_ *)&local_b0), GH_ARG(pmVar12), GH_ARG((param_type *)&local_b0))
      ;
      iVar7 = iVar7 + 0x78;
    }
    *(int *)(self + 0x32c42c) = iVar7;
    *(undefined8 *)(self + 0x32c43c) = 0;
    memset(self + 0x32c048,0,200);
    memset(self + 0x400,0xff,800);
    *(undefined4 *)(self + 0x404) = 0;
    *(undefined4 *)(self + 0x594) = 0;
    *(undefined4 *)(self + 0x32c150) = 3;
    *(undefined4 *)(self + 0x32c178) = 0x1e;
    *(undefined4 *)(self + 0x32c1c8) = 0x1e;
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0), GH_ARG(-1));
  }
  if (*(gh_long *)(lVar4 + 0x28) != local_88) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
