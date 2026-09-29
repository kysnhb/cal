/* bzStateGame::completeTransaction @ 0x003abc38 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c70
#define DAT_00d23c70 (*(undefined8 *)IMG(0x00d23c70))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
gh_long bzStateGame__completeTransaction(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  int param_3 = (int)gh_a2;

  SoundClip *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  char cVar16;
  bool bVar17;
  gh_long lVar18;
  int iVar19;
  uint uVar20;
  size_t __n;
  undefined4 uVar21;
  undefined8 *puVar22;
  int *piVar23;
  int iVar24;
  gh_long lVar25;
  uint64_t gh_frame64[60] = {0};   /* 원작 스택 프레임 (SP-0x1c4 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x1c4;
#define local_1c4 (*(uint *)(gh_fb - 0x1c4))
#define auStack_b0 (*(undefined1 (*)[8])(gh_fb - 0xb0))
#define local_a8 (*(gh_long (*)[2])(gh_fb - 0xa8))
#define local_98 (*(gh_long *)(gh_fb - 0x98))
  
  lVar18 = tpidr_el0;
  local_98 = *(gh_long *)(lVar18 + 0x28);
  piVar23 = (int *)(self + 0x8da50);
  this = (SoundClip *)(self + 0x1368);
  puVar1 = (undefined4 *)(self + 0x32c2cc);
  puVar2 = (undefined4 *)(self + 0x32c31c);
  puVar3 = (undefined4 *)(self + 0x32c3bc);
  puVar4 = (undefined4 *)(self + 0x32c36c);
  puVar5 = (undefined8 *)(self + 0x32c2dc);
  puVar6 = (undefined8 *)(self + 0x32c32c);
  puVar7 = (undefined8 *)(self + 0x32c3cc);
  puVar8 = (undefined8 *)(self + 0x32c37c);
  self[0x8da4c] = 0;
  piVar9 = (int *)(self + 0x32c164);
  piVar10 = (int *)(self + 0x32c434);
  piVar11 = (int *)(self + 0x32c8f4);
  puVar12 = (undefined4 *)(self + 0x32c91c);
  piVar13 = (int *)(self + 0x8dac8);
  piVar14 = (int *)(self + 0x32c160);
  piVar15 = (int *)(self + 0x8dacc);
  lVar25 = 0;
  local_1c4 = 90000;
  do {
    __n = *(size_t *)((gh_long)*(void **)param_2 + -0x18);
    if ((__n != *(size_t *)((gh_long)*(void **)((gh_long)&DAT_00d23c70 + lVar25) + -0x18)) ||
       (iVar19 = memcmp(*(void **)param_2,*(void **)((gh_long)&DAT_00d23c70 + lVar25),__n),
       iVar19 != 0)) goto switchD_003abfb4_default;
    iVar19 = *piVar23;
    if (iVar19 < 6) {
      *(undefined8 *)(self + 0x32c424) = 0xc8000000f6;
      if (*(int *)(self + 0x32c7cc) == -1) {
        bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x11), GH_ARG(0));
      }
      if (*(int *)(self + 0x32c7c8) == -1) {
        bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x10), GH_ARG(0));
      }
      switch(*piVar23) {
      case 0:
        if (1 < *(int *)(self + 0x1ae8) - 8U) {
          if (*(int *)(self + 0x1ae8) == 0xb) {
            *piVar11 = *piVar11 + 30000;
            *puVar12 = 8;
            if (((*piVar14 == 0) && (-0x96 < *piVar13)) &&
               ((*piVar13 < *(int *)(self + 0x1158) + 0x96 &&
                ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))))) {
              SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
            }
          }
          iVar19 = *piVar9;
          iVar24 = 0x752e;
LAB_003ac34c:
          *piVar9 = iVar19 + iVar24;
          *piVar10 = *piVar10 + 2;
        }
        break;
      case 1:
        if (1 < *(int *)(self + 0x1ae8) - 8U) {
          if (*(int *)(self + 0x1ae8) == 0xb) {
            *piVar11 = *piVar11 + 180000;
            *puVar12 = 8;
            if ((((*piVar14 == 0) && (-0x96 < *piVar13)) &&
                (*piVar13 < *(int *)(self + 0x1158) + 0x96)) &&
               ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))) {
              SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
            }
          }
          iVar19 = *piVar9;
          iVar24 = 0x2bf1e;
          goto LAB_003ac34c;
        }
        break;
      case 2:
        if (1 < *(int *)(self + 0x1ae8) - 8U) {
          if (*(int *)(self + 0x1ae8) == 0xb) {
            *piVar11 = *piVar11 + 990000;
            *puVar12 = 8;
            if (((*piVar14 == 0) && (-0x96 < *piVar13)) &&
               ((*piVar13 < *(int *)(self + 0x1158) + 0x96 &&
                ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))))) {
              SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
            }
          }
          iVar19 = *piVar9;
          iVar24 = 0xf1b2e;
          goto LAB_003ac34c;
        }
        break;
      case 3:
        uVar20 = 7000;
        goto LAB_003acac8;
      case 4:
        goto switchD_003abfb4_caseD_4;
      case 5:
        if (1 < *(int *)(self + 0x1ae8) - 8U) {
          if (*(int *)(self + 0x1ae8) == 0xb) {
            *piVar11 = *piVar11 + 999999;
            *puVar12 = 8;
            if ((((*piVar14 == 0) && (-0x96 < *piVar13)) &&
                (*piVar13 < *(int *)(self + 0x1158) + 0x96)) &&
               ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))) {
              SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
            }
          }
          *piVar9 = *piVar9 + 0xf423d;
          *piVar10 = *piVar10 + 2;
        }
        uVar20 = 999999;
        goto LAB_003acac8;
      }
      goto switchD_003abfb4_default;
    }
    if (iVar19 < 0xd) {
      *(undefined4 *)(self + (gh_long)iVar19 * 4 + 0xc44) = 1;
      if (*piVar14 == 0) {
        SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
      }
      switch(*piVar23) {
      case 6:
        *puVar1 = 0x16a8;
        *puVar2 = 0x16a8;
        *puVar3 = 0xa1;
        *puVar4 = 3;
        *puVar5 = 0x2a3000001d4c;
        *puVar6 = 0x2a3000001d4c;
        *puVar7 = 0x18000000130;
        *puVar8 = 0x300000003;
        break;
      case 7:
        *(undefined4 *)(self + 0x32c2d0) = 0x16a8;
        *(undefined4 *)(self + 0x32c320) = 0x16a8;
        *(undefined4 *)(self + 0x32c3c0) = 0x143;
        *(undefined4 *)(self + 0x32c370) = 3;
        *(undefined8 *)(self + 0x32c2d8) = 0x1d4c00001b08;
        *(undefined8 *)(self + 0x32c328) = 0x1d4c00001b08;
        *(undefined8 *)(self + 0x32c3c8) = 0x13000000078;
        *(undefined8 *)(self + 0x32c378) = 0x300000003;
        break;
      case 8:
        *(undefined4 *)(self + 0x32c2e0) = 0x2a30;
        *(undefined4 *)(self + 0x32c330) = 0x2a30;
        *(undefined4 *)(self + 0x32c3d0) = 0x180;
        *(undefined4 *)(self + 0x32c380) = 3;
        goto switchD_003ac158_caseD_13;
      case 9:
        *(undefined4 *)(self + 0x32c440) = *(undefined4 *)(self + 0x133ec);
        *(undefined4 *)(self + 0x32c43c) = *(undefined4 *)(self + 0x133ec);
        *(undefined4 *)(self + 0x32c3dc) = *(undefined4 *)(self + 0x134e4);
        *(undefined4 *)(self + 0x32c38c) = 1;
switchD_003ac158_caseD_13:
        if (1 < *(int *)(self + 0x1ae8) - 8U) {
          if (*(int *)(self + 0x1ae8) == 0xb) {
            *piVar11 = *piVar11 + 180000;
            *puVar12 = 8;
            if ((((*piVar14 == 0) && (-0x96 < *piVar13)) &&
                (*piVar13 < *(int *)(self + 0x1158) + 0x96)) &&
               ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))) {
              SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
            }
          }
          *piVar9 = *piVar9 + 0x2bf1e;
          *piVar10 = *piVar10 + 2;
        }
switchD_003abfb4_caseD_4:
        uVar20 = 50000;
        goto LAB_003acac8;
      case 10:
        *puVar1 = 0x16a8;
        *puVar2 = 0x16a8;
        *puVar3 = 0xa1;
        *puVar4 = 3;
        *(undefined4 *)puVar5 = 0x1d4c;
        *(undefined4 *)puVar6 = 0x1d4c;
        *(undefined4 *)puVar7 = 0x130;
        puVar22 = puVar8;
        goto LAB_003ac628;
      case 0xb:
        *(undefined4 *)(self + 0x32c2d0) = 0x16a8;
        *(undefined4 *)(self + 0x32c320) = 0x16a8;
        *(undefined4 *)(self + 0x32c3c0) = 0x143;
        *(undefined4 *)(self + 0x32c370) = 3;
        *(undefined4 *)(self + 0x32c2d8) = 0x1b08;
        *(undefined4 *)(self + 0x32c328) = 0x1b08;
        *(undefined4 *)(self + 0x32c3c8) = 0x78;
        puVar22 = (undefined8 *)(self + 0x32c378);
LAB_003ac628:
        *(undefined4 *)puVar22 = 3;
        if (1 < *(int *)(self + 0x1ae8) - 8U) {
          if (*(int *)(self + 0x1ae8) == 0xb) {
            *piVar11 = *piVar11 + 200000;
            *puVar12 = 8;
            if (((*piVar14 == 0) && (-0x96 < *piVar13)) &&
               ((*piVar13 < *(int *)(self + 0x1158) + 0x96 &&
                ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))))) {
              SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
            }
          }
          *piVar9 = *piVar9 + 0x30d3e;
          *piVar10 = *piVar10 + 2;
        }
switchD_003ac158_caseD_11:
        uVar20 = 0x1170;
LAB_003ac6e8:
        uVar20 = uVar20 | 0x10000;
        goto LAB_003acac8;
      case 0xc:
        *puVar1 = 0x16a8;
        *puVar2 = 0x16a8;
        *puVar3 = 0xa1;
        *puVar4 = 3;
        *puVar5 = 0x2a3000001d4c;
        *puVar6 = 0x2a3000001d4c;
        *puVar7 = 0x18000000130;
        *puVar8 = 0x300000003;
        uVar20 = local_1c4;
        if (1 < *(int *)(self + 0x1ae8) - 8U) {
          if (*(int *)(self + 0x1ae8) == 0xb) {
            *piVar11 = *piVar11 + 260000;
            *puVar12 = 8;
            if ((((*piVar14 == 0) && (-0x96 < *piVar13)) &&
                (*piVar13 < *(int *)(self + 0x1158) + 0x96)) &&
               ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))) {
              SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
            }
          }
          *piVar9 = *piVar9 + 0x3f79e;
          *piVar10 = *piVar10 + 2;
        }
        goto LAB_003acac8;
      }
      goto switchD_003abfb4_default;
    }
    if (0x15 < iVar19) goto switchD_003abfb4_default;
    *(undefined8 *)(self + 0x32c424) = 0xc8000000f6;
    if (*(int *)(self + 0x32c7cc) == -1) {
      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x11), GH_ARG(0));
    }
    if (*(int *)(self + 0x32c7c8) == -1) {
      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x10), GH_ARG(0));
    }
    switch(*piVar23) {
    case 0xd:
      if (1 < *(int *)(self + 0x1ae8) - 8U) {
        if (*(int *)(self + 0x1ae8) == 0xb) {
          *piVar11 = *piVar11 + 100000;
          *puVar12 = 8;
          if (((*piVar14 == 0) && (-0x96 < *piVar13)) &&
             ((*piVar13 < *(int *)(self + 0x1158) + 0x96 &&
              ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))))) {
            SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
          }
        }
        iVar19 = *piVar9;
        iVar24 = 0x1869e;
        goto LAB_003ac34c;
      }
      break;
    case 0xe:
      if (1 < *(int *)(self + 0x1ae8) - 8U) {
        if (*(int *)(self + 0x1ae8) == 0xb) {
          *piVar11 = *piVar11 + 300000;
          *puVar12 = 8;
          if ((((*piVar14 == 0) && (-0x96 < *piVar13)) &&
              (*piVar13 < *(int *)(self + 0x1158) + 0x96)) &&
             ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))) {
            SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
          }
        }
        iVar19 = *piVar9;
        iVar24 = 0x493de;
        goto LAB_003ac34c;
      }
      break;
    case 0xf:
      if (1 < *(int *)(self + 0x1ae8) - 8U) {
        if (*(int *)(self + 0x1ae8) == 0xb) {
          *piVar11 = *piVar11 + 900000;
          *puVar12 = 8;
          if (((*piVar14 == 0) && (-0x96 < *piVar13)) &&
             ((*piVar13 < *(int *)(self + 0x1158) + 0x96 &&
              ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))))) {
            SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
          }
        }
        iVar19 = *piVar9;
        iVar24 = 0xdbb9e;
        goto LAB_003ac34c;
      }
      break;
    case 0x10:
      uVar20 = 21000;
      goto LAB_003acac8;
    case 0x11:
      goto switchD_003ac158_caseD_11;
    case 0x12:
      uVar20 = 210000;
      goto LAB_003acac8;
    case 0x13:
      goto switchD_003ac158_caseD_13;
    case 0x14:
      if (1 < *(int *)(self + 0x1ae8) - 8U) {
        if (*(int *)(self + 0x1ae8) == 0xb) {
          *piVar11 = *piVar11 + 320000;
          *puVar12 = 8;
          if (((*piVar14 == 0) && (-0x96 < *piVar13)) &&
             ((*piVar13 < *(int *)(self + 0x1158) + 0x96 &&
              ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))))) {
            SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
          }
        }
        *piVar9 = *piVar9 + 0x4e1fe;
        *piVar10 = *piVar10 + 2;
      }
      uVar20 = 0x57c0;
      goto LAB_003ac6e8;
    case 0x15:
      if (1 < *(int *)(self + 0x1ae8) - 8U) {
        if (*(int *)(self + 0x1ae8) == 0xb) {
          *piVar11 = *piVar11 + 990000;
          *puVar12 = 8;
          if ((((*piVar14 == 0) && (-0x96 < *piVar13)) &&
              (*piVar13 < *(int *)(self + 0x1158) + 0x96)) &&
             ((-0x1e < *piVar15 && (*piVar15 < *(int *)(self + 0x115c) + 100)))) {
            SoundClip__play_0047e570(GH_ARG(this), GH_ARG(false));
          }
        }
        *piVar9 = *piVar9 + 0xf1b2e;
        *piVar10 = *piVar10 + 2;
      }
      uVar20 = 0x43238;
LAB_003acac8:
      bzStateGame__Jewel_003acdd4(GH_ARG(self), GH_ARG(uVar20));
    }
switchD_003abfb4_default:
    lVar25 = lVar25 + 8;
    if (lVar25 == 0xb0) {
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
      if (*(int *)(self + 0x1af0) == 0) {
        uVar21 = 0x17;
        if (5 < *piVar23) {
          uVar21 = 0x13;
        }
        *(undefined4 *)(self + 0x1ae8) = uVar21;
      }
      else {
        self[0x1af4] = 0;
      }
      if (*(int *)(self + 0x1970) == -1) {
        FUN_009d4eac(GH_ARG(local_a8), GH_ARG("FirstPayment"), GH_ARG(auStack_b0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        bzStateGame__ShowAchievements_003ad004(GH_ARG(self), GH_ARG(8), GH_ARG((undefined *)local_a8));
        if ((undefined8 *)(local_a8[0] + -0x18) != &DAT_00d40300) {
          piVar23 = (int *)(local_a8[0] + -8);
          do {
            iVar19 = *piVar23;
            cVar16 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar17) {
              *piVar23 = iVar19 + -1;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          if (iVar19 < 1) {
            operator_delete((undefined8 *)(local_a8[0] + -0x18));
          }
        }
      }
      if (*(gh_long *)(lVar18 + 0x28) == local_98) {
        return 0;
      }
                    
      __stack_chk_fail();
    }
  } while( true );
  return 0;
}
