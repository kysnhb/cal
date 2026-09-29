/* bzStateGame::ImgSoundLoad_003a4db0 @ 0x003a4db0 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a53298
#define DAT_00a53298 (*(undefined1 *)IMG(0x00a53298))
#undef DAT_00a532c0
#define DAT_00a532c0 (*(undefined1 *)IMG(0x00a532c0))
#undef DAT_00a53530
#define DAT_00a53530 (*(undefined1 *)IMG(0x00a53530))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef joyY2
#define joyY2 (*(undefined4 *)IMG(0x00d23c58))
#undef isGStop
#define isGStop (*(undefined1 *)IMG(0x00d23dc4))
#undef joyX2
#define joyX2 (*(undefined4 *)IMG(0x00d23c54))
#undef DAT_00a5326c
#define DAT_00a5326c (*(undefined1 *)IMG(0x00a5326c))
gh_long bzStateGame__ImgSoundLoad_003a4db0(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  ulong uVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  gh_long lVar5;
  bool bVar6;
  gh_long lVar7;
  ulong uVar8;
  void *__dest;
  undefined *puVar9;
  gh_long *plVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  uint64_t gh_frame64[63] = {0};   /* 원작 스택 프레임 (SP-0x1e0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x1e0;
#define local_1e0 (*(gh_long *)(gh_fb - 0x1e0))
#define local_1d8 (*(gh_long *)(gh_fb - 0x1d8))
#define local_1d0 (*(gh_long *)(gh_fb - 0x1d0))
#define local_1c8 (*(gh_long *)(gh_fb - 0x1c8))
#define local_1c0 (*(gh_long *)(gh_fb - 0x1c0))
#define local_1b8 (*(gh_long *)(gh_fb - 0x1b8))
#define local_1b0 (*(gh_long *)(gh_fb - 0x1b0))
#define local_1a8 (*(gh_long *)(gh_fb - 0x1a8))
#define local_1a0 (*(gh_long *)(gh_fb - 0x1a0))
#define local_198 (*(gh_long *)(gh_fb - 0x198))
#define local_190 (*(gh_long *)(gh_fb - 0x190))
#define local_188 (*(gh_long *)(gh_fb - 0x188))
#define local_180 (*(gh_long *)(gh_fb - 0x180))
#define local_178 (*(gh_long *)(gh_fb - 0x178))
#define local_170 (*(gh_long *)(gh_fb - 0x170))
#define local_168 (*(gh_long *)(gh_fb - 0x168))
#define local_160 (*(gh_long *)(gh_fb - 0x160))
#define local_158 (*(gh_long *)(gh_fb - 0x158))
#define local_150 (*(gh_long *)(gh_fb - 0x150))
#define local_148 (*(gh_long *)(gh_fb - 0x148))
#define local_140 (*(gh_long *)(gh_fb - 0x140))
#define local_138 (*(gh_long *)(gh_fb - 0x138))
#define local_130 (*(gh_long *)(gh_fb - 0x130))
#define local_128 (*(gh_long *)(gh_fb - 0x128))
#define local_120 (*(gh_long *)(gh_fb - 0x120))
#define local_118 (*(gh_long *)(gh_fb - 0x118))
#define local_110 (*(gh_long *)(gh_fb - 0x110))
#define local_108 (*(gh_long *)(gh_fb - 0x108))
#define local_100 (*(gh_long *)(gh_fb - 0x100))
#define local_f8 (*(gh_long *)(gh_fb - 0xf8))
#define local_f0 (*(gh_long *)(gh_fb - 0xf0))
#define local_e8 (*(gh_long *)(gh_fb - 0xe8))
#define local_e0 (*(gh_long *)(gh_fb - 0xe0))
#define local_d8 (*(gh_long *)(gh_fb - 0xd8))
#define local_d0 (*(gh_long *)(gh_fb - 0xd0))
#define local_c8 (*(gh_long *)(gh_fb - 0xc8))
#define local_c0 (*(gh_long *)(gh_fb - 0xc0))
#define local_b8 (*(gh_long *)(gh_fb - 0xb8))
#define local_b0 (*(gh_long *)(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
#define local_a0 (*(gh_long *)(gh_fb - 0xa0))
#define auStack_98 (*(undefined1 (*)[8])(gh_fb - 0x98))
#define local_90 (*(gh_long *)(gh_fb - 0x90))
#define local_88 (*(void **)(gh_fb - 0x88))
#define local_80 (*(size_t *)(gh_fb - 0x80))
#define local_78 (*(gh_long *)(gh_fb - 0x78))
  
  lVar5 = tpidr_el0;
  local_78 = *(gh_long *)(lVar5 + 0x28);
  piVar2 = (int *)(self + 0x32ab00);
  iVar11 = *piVar2;
  switch(iVar11) {
  case 100:
    cocos2d__Application__getInstance_00484a3c();
    puVar9 = (undefined *)cocos2d__Application__getNetStatus_004862f4();
    if (((((ulong)puVar9 & 1) != 0) && (*(int *)(self + 0x32c7f4) == -1)) &&
       (puVar9 = (undefined *)bzStateGame__ExeIsSigned_003a7c88(GH_ARG(puVar9)), ((ulong)puVar9 & 1) == 0)) {
      bzStateGame__ExeGoogleLogin_003a7e90(GH_ARG(puVar9));
    }
    break;
  case 0x65:
  case 0x66:
    goto switchD_003a4e10_caseD_65;
  case 0x67:
    memset(self + 0x31c9e8,0,800);
    memset(self + 0x31dca8,0,800);
    memset(self + 0x31ef40,0,0x528);
    memset(self + 0x3232e8,0,0xc80);
    memset(self + 0x328b30,0,0x898);
    memset(self + 0x329d28,0,0x410);
    memset(self + 0x32a790,0,0x78);
    *(undefined8 *)(self + 0x32a698) = 0;
    break;
  case 0x68:
    bzStateGame__DataLoad_003a8088(GH_ARG(self));
    bzStateGame__ObjDataLoad_003a8578(GH_ARG(self));
    bzStateGame__MapDatainitLoad_003a8a68(GH_ARG(self));
    bzStateGame__UIDatainitLoad_003a8f58(GH_ARG(self));
    break;
  case 0x69:
    dataLoad__MapDatainit_00479594(GH_ARG(self + 0x1b30));
    dataLoad__Datainit_00478f2c(GH_ARG(self + 0x1b30));
    break;
  case 0x6a:
    cocos2d__log_005d21e4(GH_ARG(" startInapp() "), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    cocos2d__Application__getInstance_00484a3c();
    cocos2d__Application__getPurchaseList_00485bb0();
    uVar8 = 0;
    do {
      if (*(int *)(self + uVar8 * 4 + 0x329d28) == 0) {
        FUN_009d4eac(GH_ARG(&local_a0), GH_ARG("img/UI/MenuUi[%d].png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        lVar7 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)&local_a0), GH_ARG((int)uVar8));
        *(gh_long *)(self + uVar8 * 8 + 0x3293c8) = lVar7;
        if ((undefined8 *)(local_a0 + -0x18) != &DAT_00d40300) {
          piVar12 = (int *)(local_a0 + -8);
          do {
            iVar11 = *piVar12;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar6) {
              *piVar12 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 < 1) {
            operator_delete((undefined8 *)(local_a0 + -0x18));
          }
        }
        lVar7 = *(gh_long *)(self + uVar8 * 8 + 0x3293c8);
        *(int *)(self + uVar8 * 4 + 0x329d28) = (int)*(float *)(lVar7 + 0x4c4);
        *(int *)(self + uVar8 * 4 + 0x32a1d8) = (int)*(float *)(lVar7 + 0x4c8);
      }
      bVar6 = uVar8 < 0x3b;
      uVar8 = uVar8 + 1;
    } while (bVar6);
    FUN_009d4eac(GH_ARG(&local_a8), GH_ARG("img/UI/Cross_Icon_AOS_%d.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = bzStateGame__createImage_003a9448(GH_ARG(self), GH_ARG((undefined *)&local_a8), GH_ARG(0));
    *(undefined8 *)(self + 0x32a890) = uVar13;
    if ((undefined8 *)(local_a8 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_a8 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_a8 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_b0), GH_ARG("img/UI/button_RewardAd_TitleMenu.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_b0), GH_ARG(0));
    *(undefined8 *)(self + 0x32a898) = uVar13;
    if ((undefined8 *)(local_b0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_b0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_b0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_b8), GH_ARG("img/UI/button_gem_vungle.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_b8), GH_ARG(0));
    *(undefined8 *)(self + 0x32a8a0) = uVar13;
    if ((undefined8 *)(local_b8 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_b8 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_b8 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_c0), GH_ARG("img/UI/button_vungle_off.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_c0), GH_ARG(0));
    *(undefined8 *)(self + 0x32a8a8) = uVar13;
    if ((undefined8 *)(local_c0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_c0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_c0 + -0x18));
      }
    }
    uVar8 = 0;
    do {
      FUN_009d4eac(GH_ARG(&local_c8), GH_ARG("img/Completed.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_c8), GH_ARG(0));
      *(undefined8 *)(self + uVar8 * 8 + 0xb20) = uVar13;
      if ((undefined8 *)(local_c8 + -0x18) != &DAT_00d40300) {
        piVar12 = (int *)(local_c8 + -8);
        do {
          iVar11 = *piVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar6) {
            *piVar12 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 < 1) {
          operator_delete((undefined8 *)(local_c8 + -0x18));
        }
      }
      plVar10 = *(gh_long **)(self + uVar8 * 8 + 0xb20);
      local_88 = (void *)0x3f0000003f000000;
      gh_vcall(GH_ARG(plVar10), 0x148, GH_ARG(&local_88), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      gh_vcall(GH_ARG(*(gh_long **)(self + uVar8 * 8 + 0xb20)), 0x90, GH_ARG(0x3f000000), GH_ARG(0x3f000000), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      bVar6 = uVar8 < 5;
      uVar8 = uVar8 + 1;
    } while (bVar6);
    FUN_009d4eac(GH_ARG(&local_d0), GH_ARG("img/UI/Icon_New.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_d0), GH_ARG(0));
    *(undefined8 *)(self + 0x32a8b0) = uVar13;
    if ((undefined8 *)(local_d0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_d0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_d0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_d8), GH_ARG("img/UI/MenuUi[210].png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_d8), GH_ARG(0));
    *(undefined8 *)(self + 0xb08) = uVar13;
    if ((undefined8 *)(local_d8 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_d8 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_d8 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_e0), GH_ARG("img/EventPopup.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_e0), GH_ARG(0));
    *(undefined8 *)(self + 0xb10) = uVar13;
    if ((undefined8 *)(local_e0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_e0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_e0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_e8), GH_ARG("img/UI/MenuUi[34].png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_e8), GH_ARG(0));
    *(undefined8 *)(self + 0xb58) = uVar13;
    if ((undefined8 *)(local_e8 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_e8 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_e8 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_f0), GH_ARG("img/icon_get.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_f0), GH_ARG(0));
    *(undefined8 *)(self + 0xb48) = uVar13;
    if ((undefined8 *)(local_f0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_f0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_f0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_f8), GH_ARG("img/getRewad.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_f8), GH_ARG(0));
    *(undefined8 *)(self + 0xb50) = uVar13;
    if ((undefined8 *)(local_f8 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_f8 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_f8 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_100), GH_ARG("img/Daily/daily_reward_frame.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_100), GH_ARG(0));
    *(undefined8 *)(self + 0x32a8c8) = uVar13;
    if ((undefined8 *)(local_100 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_100 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_100 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_108), GH_ARG("img/Daily/daily_reward_get_frame.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_108), GH_ARG(0));
    *(undefined8 *)(self + 0x32a8d0) = uVar13;
    if ((undefined8 *)(local_108 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_108 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_108 + -0x18));
      }
    }
    uVar8 = 0;
    do {
      cocos2d__StringUtils__format_0060c028(GH_ARG("img/Daily/daily_reward_day_no_%d.png"), GH_ARG(&local_110), GH_ARG(uVar8 & 0xffffffff), GH_ARG(0), GH_ARG(0));
      uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_110), GH_ARG(0));
      *(undefined8 *)(self + uVar8 * 8 + 0x32a8d8) = uVar13;
      if ((undefined8 *)(local_110 + -0x18) != &DAT_00d40300) {
        piVar12 = (int *)(local_110 + -8);
        do {
          iVar11 = *piVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar6) {
            *piVar12 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 < 1) {
          operator_delete((undefined8 *)(local_110 + -0x18));
        }
      }
      cocos2d__StringUtils__format_0060c028(GH_ARG("img/Daily/daily_reward_select_no_%d.png"), GH_ARG(&local_118), GH_ARG(uVar8 & 0xffffffff), GH_ARG(0), GH_ARG(0));
      uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_118), GH_ARG(0));
      *(undefined8 *)(self + uVar8 * 8 + 0x32a910) = uVar13;
      if ((undefined8 *)(local_118 + -0x18) != &DAT_00d40300) {
        piVar12 = (int *)(local_118 + -8);
        do {
          iVar11 = *piVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar6) {
            *piVar12 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 < 1) {
          operator_delete((undefined8 *)(local_118 + -0x18));
        }
      }
      uVar1 = uVar8 + 1;
      cocos2d__StringUtils__format_0060c028(GH_ARG("img/Daily/daily_reward_day_%d_0.png"), GH_ARG(&local_120), GH_ARG(uVar1 & 0xffffffff), GH_ARG(0), GH_ARG(0));
      uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_120), GH_ARG(0));
      *(undefined8 *)(self + uVar8 * 8 + 0x32a948) = uVar13;
      if ((undefined8 *)(local_120 + -0x18) != &DAT_00d40300) {
        piVar12 = (int *)(local_120 + -8);
        do {
          iVar11 = *piVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar6) {
            *piVar12 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 < 1) {
          operator_delete((undefined8 *)(local_120 + -0x18));
        }
      }
      cocos2d__StringUtils__format_0060c028(GH_ARG("img/Daily/daily_reward_day_%d_1.png"), GH_ARG(&local_128), GH_ARG(uVar1 & 0xffffffff), GH_ARG(0), GH_ARG(0));
      uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_128), GH_ARG(0));
      *(undefined8 *)(self + uVar8 * 8 + 0x32a980) = uVar13;
      if ((undefined8 *)(local_128 + -0x18) != &DAT_00d40300) {
        piVar12 = (int *)(local_128 + -8);
        do {
          iVar11 = *piVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar6) {
            *piVar12 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 < 1) {
          operator_delete((undefined8 *)(local_128 + -0x18));
        }
      }
      bVar6 = uVar8 < 6;
      uVar8 = uVar1;
    } while (bVar6);
    FUN_009d4eac(GH_ARG(&local_130), GH_ARG("img/Daily/daily_reward_check.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_130), GH_ARG(0));
    *(undefined8 *)(self + 0x32a9b8) = uVar13;
    if ((undefined8 *)(local_130 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_130 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_130 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_138), GH_ARG("img/Daily/daily_reward_cusor.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_138), GH_ARG(0));
    *(undefined8 *)(self + 0x32a9c0) = uVar13;
    if ((undefined8 *)(local_138 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_138 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_138 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_140), GH_ARG("img/Daily/daily_reward_check2.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_140), GH_ARG(0));
    *(undefined8 *)(self + 0x32a9c8) = uVar13;
    if ((undefined8 *)(local_140 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_140 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_140 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_148), GH_ARG("img/Daily/daily_reward_btn_get.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_148), GH_ARG(0));
    *(undefined8 *)(self + 0x32a9d0) = uVar13;
    if ((undefined8 *)(local_148 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_148 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_148 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_150), GH_ARG("img/Daily/daily_reward_btn_video.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_150), GH_ARG(0));
    *(undefined8 *)(self + 0x32a9d8) = uVar13;
    if ((undefined8 *)(local_150 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_150 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_150 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_158), GH_ARG("img/Daily/daily_reward_get_btn_ok.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_158), GH_ARG(0));
    *(undefined8 *)(self + 0x32a9e0) = uVar13;
    if ((undefined8 *)(local_158 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_158 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_158 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_160), GH_ARG("img/UI/MenuUi[118].png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_160), GH_ARG(0));
    *(undefined8 *)(self + 0x32aae0) = uVar13;
    if ((undefined8 *)(local_160 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_160 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_160 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_168), GH_ARG("img/UI/MenuUi[121].png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_168), GH_ARG(0));
    *(undefined8 *)(self + 0x32aae8) = uVar13;
    if ((undefined8 *)(local_168 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_168 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_168 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_170), GH_ARG("img/UI/MainRewardBG.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_170), GH_ARG(0));
    *(undefined8 *)(self + 0x32a9f0) = uVar13;
    if ((undefined8 *)(local_170 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_170 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_170 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_178), GH_ARG("img/UI/MainRewardBox.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_178), GH_ARG(0));
    *(undefined8 *)(self + 0x32a9f8) = uVar13;
    if ((undefined8 *)(local_178 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_178 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_178 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_180), GH_ARG("img/UI/MainRewardBox.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_180), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa00) = uVar13;
    if ((undefined8 *)(local_180 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_180 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_180 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_188), GH_ARG("img/UI/MainRewardBtn.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_188), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa08) = uVar13;
    if ((undefined8 *)(local_188 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_188 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_188 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_190), GH_ARG("img/UI/MainRewardUnBtn.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_190), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa10) = uVar13;
    if ((undefined8 *)(local_190 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_190 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_190 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_198), GH_ARG("img/UI/MainRewardNext.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_198), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa18) = uVar13;
    if ((undefined8 *)(local_198 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_198 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_198 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1a0), GH_ARG("img/UI/MainRewardCircle.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1a0), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa20) = uVar13;
    if ((undefined8 *)(local_1a0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1a0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1a0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1a0), GH_ARG("img/UI/MainRewardCircle.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1a0), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa28) = uVar13;
    if ((undefined8 *)(local_1a0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1a0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1a0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1a0), GH_ARG("img/UI/MainRewardCircle.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1a0), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa30) = uVar13;
    if ((undefined8 *)(local_1a0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1a0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1a0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1a0), GH_ARG("img/UI/MainRewardCircle.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1a0), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa38) = uVar13;
    if ((undefined8 *)(local_1a0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1a0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1a0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1a0), GH_ARG("img/UI/MainRewardCircle.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1a0), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa40) = uVar13;
    if ((undefined8 *)(local_1a0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1a0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1a0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1a8), GH_ARG("img/UI/bonus1.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1a8), GH_ARG(0));
    *(undefined8 *)(self + 0xc08) = uVar13;
    if ((undefined8 *)(local_1a8 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1a8 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1a8 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1b0), GH_ARG("img/UI/bonus1.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1b0), GH_ARG(0));
    *(undefined8 *)(self + 0xc10) = uVar13;
    if ((undefined8 *)(local_1b0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1b0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1b0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1b8), GH_ARG("img/UI/bonus1.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1b8), GH_ARG(0));
    *(undefined8 *)(self + 0xc18) = uVar13;
    if ((undefined8 *)(local_1b8 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1b8 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1b8 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1c0), GH_ARG("img/UI/bonus2.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1c0), GH_ARG(0));
    *(undefined8 *)(self + 0xc20) = uVar13;
    if ((undefined8 *)(local_1c0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1c0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1c0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1c8), GH_ARG("img/UI/Cross_Icon_AOS_10.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1c8), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa58) = uVar13;
    if ((undefined8 *)(local_1c8 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1c8 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1c8 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1d0), GH_ARG("img/UI/Cross_Icon_AOS_0.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1d0), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa60) = uVar13;
    if ((undefined8 *)(local_1d0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1d0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1d0 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1d8), GH_ARG("img/UI/Cross_Icon_AOS_6.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1d8), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa68) = uVar13;
    if ((undefined8 *)(local_1d8 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1d8 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1d8 + -0x18));
      }
    }
    FUN_009d4eac(GH_ARG(&local_1e0), GH_ARG("img/UI/Cross_Icon_AOS_4.png"), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    uVar13 = kScene__makeSprite_0047d208(GH_ARG((kScene *)self), GH_ARG(2), GH_ARG(&local_1e0), GH_ARG(0));
    *(undefined8 *)(self + 0x32aa70) = uVar13;
    if ((undefined8 *)(local_1e0 + -0x18) != &DAT_00d40300) {
      piVar12 = (int *)(local_1e0 + -8);
      do {
        iVar11 = *piVar12;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 < 1) {
        operator_delete((undefined8 *)(local_1e0 + -0x18));
      }
    }
    joyX2 = (float)(*(int *)(self + 0x1158) + -0x82);
    *(undefined4 *)(self + 0x1b0c) = 0x44098000;
    *(float *)(self + 0x1b08) = joyX2;
    joyY2 = 0x44098000;
    *(undefined4 *)(self + 0x1b10) = 0x3c;
    isGStop = 1;
    break;
  case 0x6b:
    self[0xb01] = 0;
    self[0xb05] = 1;
    *(undefined4 *)(self + 0xaf4) = 0;
    cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x828)));
    self[0xb05] = 1;
    *(undefined4 *)(self + 0xaf4) = 2;
    cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(2), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    RewardInterface__load_0047fcf4(GH_ARG(*(RewardInterface **)(self + 0x838)));
    *(undefined4 *)(self + 0x32ba28) = 0x3f800000;
    *(undefined8 *)(self + 0x32c830) = 0;
    bzStateGame__Aitemload_003a9588(GH_ARG(self));
    bzStateGame__STGload_003a4888(GH_ARG(self));
    if (((*(int *)(self + 0x32c148) == 0x1a05) && (*(int *)(self + 0x32c170) == 0)) &&
       (*(int *)(self + 0x32c174) == 0)) {
      bzStateGame__BAitemload_003a9b84(GH_ARG(self));
      bzStateGame__BSTGload_003a9e04(GH_ARG(self));
    }
    bzStateGame__GOrderload_003a39c8(GH_ARG(self));
    bzStateGame__AchieveLoad_003aa0b4(GH_ARG(self));
    bzStateGame__BAitemSsave_003aa354(GH_ARG(self));
    bzStateGame__BSTGSsave_003aa614(GH_ARG(self));
    if ((0 < *(int *)(self + 0x4c8)) && (*(int *)(self + 0x4cc) == -1)) {
      *(undefined4 *)(self + 0x4cc) = 0;
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
    }
    if ((*(int *)(self + 0x32c7f0) == -1) && (-1 < *(int *)(self + 0x414))) {
      *(undefined4 *)(self + 0x32c970) = 0x1a;
    }
    *(undefined8 *)(self + 0x32c128) = 0;
    lVar7 = kDate__getSingleton_004797f8();
    uVar13 = *(undefined8 *)(lVar7 + 0xc);
    *(undefined8 *)(self + 0x32bb9c) = uVar13;
    uVar3 = *(undefined4 *)(&DAT_00a53530 + (gh_long)(int)uVar13 * 4);
    *(undefined4 *)(self + 0x32bb98) = *(undefined4 *)(lVar7 + 8);
    *(undefined4 *)(self + 0x32bfb4) = uVar3;
    *(undefined4 *)(self + 0x32bbc4) = 0;
    uVar8 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG("http://iphonegame.cafe24.com/popup/aos5.txt"), GH_ARG((char *)0x0), GH_ARG((CurlResData *)&local_88));
    if ((uVar8 & 1) != 0) {
      __dest = malloc(local_80 + 1);
      memcpy(__dest,local_88,local_80);
      *(undefined1 *)((gh_long)__dest + local_80) = 0;
      kScene__clearResData_0047e310(GH_ARG((kScene *)self), GH_ARG((CurlResData *)&local_88));
      if (local_80 - 1 < 8999) {
        memcpy(self + 0x32bbc8,__dest,local_80);
        *(undefined4 *)(self + 0x32bbc4) = 0x3c;
      }
      if (__dest != (void *)0x0) {
        operator_delete(__dest);
      }
    }
    memset(self + 0x32c048,0,200);
    bzStateGame__MainRewardLoad_003aacf4(GH_ARG(self));
    if (*(int *)(self + 0x1a98) == 0) {
      if (0 < *(int *)(self + 0x32c620)) {
        *(undefined4 *)(self + 0x32c5f8) = 0;
        *(int *)(self + 0x32c620) = 0;
      }
LAB_003a531c:
      iVar11 = *(int *)(self + 0x1a9c);
      if (iVar11 == 0) goto LAB_003a51f4;
LAB_003a5324:
      if (iVar11 == 1) {
        *(undefined4 *)(self + 0x1a9c) = 2;
        *(undefined4 *)(self + 0x32c5fc) = 0;
        *(undefined4 *)(self + 0x32c624) = 0;
      }
    }
    else {
      if (*(int *)(self + 0x1a98) != 1) goto LAB_003a531c;
      *(undefined4 *)(self + 0x1a98) = 2;
      *(undefined4 *)(self + 0x32c5f8) = 0;
      *(undefined4 *)(self + 0x32c620) = 0;
      iVar11 = *(int *)(self + 0x1a9c);
      if (iVar11 != 0) goto LAB_003a5324;
LAB_003a51f4:
      if (0 < *(int *)(self + 0x32c624)) {
        *(undefined4 *)(self + 0x32c5fc) = 0;
        *(int *)(self + 0x32c624) = 0;
      }
    }
    if (*(int *)(self + 0x1aa0) == 1) {
      *(undefined4 *)(self + 0x1aa0) = 2;
      *(undefined4 *)(self + 0x32c600) = 0;
      *(undefined4 *)(self + 0x32c628) = 0;
    }
    else if ((*(int *)(self + 0x1aa0) == 0) && (0 < *(int *)(self + 0x32c628))) {
      *(undefined4 *)(self + 0x32c600) = 0;
      *(int *)(self + 0x32c628) = 0;
    }
    if (*(int *)(self + 0x1aa4) == 1) {
      *(undefined4 *)(self + 0x1aa4) = 2;
      *(undefined4 *)(self + 0x32c604) = 0;
      *(undefined4 *)(self + 0x32c62c) = 0;
    }
    else if ((*(int *)(self + 0x1aa4) == 0) && (0 < *(int *)(self + 0x32c62c))) {
      *(undefined4 *)(self + 0x32c604) = 0;
      *(int *)(self + 0x32c62c) = 0;
    }
    if (*(int *)(self + 0x1aa8) == 1) {
      *(undefined4 *)(self + 0x1aa8) = 2;
      *(undefined4 *)(self + 0x32c608) = 0;
      *(undefined4 *)(self + 0x32c630) = 0;
    }
    else if ((*(int *)(self + 0x1aa8) == 0) && (0 < *(int *)(self + 0x32c630))) {
      *(undefined4 *)(self + 0x32c608) = 0;
      *(int *)(self + 0x32c630) = 0;
    }
    if (*(int *)(self + 0x1aac) == 1) {
      *(undefined4 *)(self + 0x1aac) = 2;
      *(undefined4 *)(self + 0x32c60c) = 0;
      *(undefined4 *)(self + 0x32c634) = 0;
    }
    else if ((*(int *)(self + 0x1aac) == 0) && (0 < *(int *)(self + 0x32c634))) {
      *(undefined4 *)(self + 0x32c60c) = 0;
      *(int *)(self + 0x32c634) = 0;
    }
    if (*(int *)(self + 0x1ab0) == 1) {
      *(undefined4 *)(self + 0x1ab0) = 2;
      *(undefined4 *)(self + 0x32c610) = 0;
      *(undefined4 *)(self + 0x32c638) = 0;
    }
    else if ((*(int *)(self + 0x1ab0) == 0) && (0 < *(int *)(self + 0x32c638))) {
      *(undefined4 *)(self + 0x32c610) = 0;
      *(int *)(self + 0x32c638) = 0;
    }
    if (*(int *)(self + 0x1ab4) == 1) {
      *(undefined4 *)(self + 0x1ab4) = 2;
      *(undefined4 *)(self + 0x32c614) = 0;
      *(undefined4 *)(self + 0x32c63c) = 0;
    }
    else if ((*(int *)(self + 0x1ab4) == 0) && (0 < *(int *)(self + 0x32c63c))) {
      *(undefined4 *)(self + 0x32c614) = 0;
      *(int *)(self + 0x32c63c) = 0;
    }
    if (*(int *)(self + 0x1ab8) == 1) {
      *(undefined4 *)(self + 0x1ab8) = 2;
      *(undefined4 *)(self + 0x32c618) = 0;
      *(undefined4 *)(self + 0x32c640) = 0;
    }
    else if ((*(int *)(self + 0x1ab8) == 0) && (0 < *(int *)(self + 0x32c640))) {
      *(undefined4 *)(self + 0x32c618) = 0;
      *(int *)(self + 0x32c640) = 0;
    }
    if (*(int *)(self + 0x1abc) == 1) {
      *(undefined4 *)(self + 0x1abc) = 2;
      *(undefined4 *)(self + 0x32c61c) = 0;
      *(undefined4 *)(self + 0x32c644) = 0;
    }
    else if ((*(int *)(self + 0x1abc) == 0) && (0 < *(int *)(self + 0x32c644))) {
      *(undefined4 *)(self + 0x32c61c) = 0;
      *(int *)(self + 0x32c644) = 0;
    }
    bzStateGame__MainRewardSave_003aaff4(GH_ARG(self));
    bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    *(undefined4 *)(self + 0x32c990) = 0;
    if (*(int *)(self + 0x32c468) != *(int *)(self + 0x32bba0)) {
      *(undefined4 *)(self + 0x32c46c) = 0x14d;
      *(int *)(self + 0x32c468) = *(int *)(self + 0x32bba0);
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    }
    if (*(int *)(self + 0x32c3c4) != *(int *)(&DAT_00a5326c + (gh_long)*(int *)(self + 0x32c374) * 4))
    {
      *(int *)(self + 0x32c3c4) = *(int *)(&DAT_00a5326c + (gh_long)*(int *)(self + 0x32c374) * 4);
      if (0 < *(int *)(self + 0x32c2d4)) {
        *(int *)(self + 0x32c2d4) = *(int *)(&DAT_00a53298 + (gh_long)*(int *)(self + 0x32c374) * 4);
      }
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    }
    if (*(int *)(self + 0x32c294) != *(int *)(&DAT_00a532c0 + (gh_long)*(int *)(self + 0x32c244) * 4))
    {
      *(int *)(self + 0x32c294) = *(int *)(&DAT_00a532c0 + (gh_long)*(int *)(self + 0x32c244) * 4);
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
    }
    cocos2d__Application__getInstance_00484a3c();
    puVar9 = (undefined *)cocos2d__Application__getNetStatus_004862f4();
    if (((((ulong)puVar9 & 1) != 0) && (*(int *)(self + 0x32c7f4) == -1)) &&
       (uVar8 = bzStateGame__ExeIsSigned_003a7c88(GH_ARG(puVar9)), (uVar8 & 1) == 0)) {
      bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x1b), GH_ARG(0));
    }
    *(undefined4 *)(self + 0x32c9a8) = 0;
    break;
  default:
    if (iVar11 == 0) {
      *(undefined4 *)(self + 0x32c134) = 0x1e;
      *(undefined4 *)(self + 0x32ba14) = 0x20;
      *(undefined4 *)(self + 0x32ba2c) = 0;
      *(undefined4 *)(self + 0x8da48) = 0;
      *(undefined8 *)(self + 0x8da40) = 0;
      *(undefined4 *)(self + 0x1af0) = 0;
      *(undefined4 *)(self + 0x1af8) = 0;
      self[0x1af4] = 0;
      break;
    }
    if (iVar11 - 1U < 0x4a) {
      sprintf(self + 0xd38,"sound/%d.wav");
      iVar11 = *piVar2;
      FUN_009d4eac(GH_ARG(&local_90), GH_ARG(self + 0xd38), GH_ARG(auStack_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
      SoundClip__loadSnd_0047e3fc(GH_ARG(self + (gh_long)iVar11 * 0x18 + 0x11e8), GH_ARG(&local_90));
      if ((undefined8 *)(local_90 + -0x18) != &DAT_00d40300) {
        piVar12 = (int *)(local_90 + -8);
        do {
          iVar11 = *piVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar6) {
            *piVar12 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 < 1) {
          operator_delete((undefined8 *)(local_90 + -0x18));
        }
      }
      iVar11 = *piVar2;
      if (iVar11 == 0x4a) {
        iVar11 = 99;
        *piVar2 = 99;
        goto switchD_003a4e10_caseD_65;
      }
    }
    goto LAB_003a5778;
  }
  iVar11 = *piVar2;
LAB_003a5778:
  if (iVar11 < 0x78) {
switchD_003a4e10_caseD_65:
    *piVar2 = iVar11 + 1;
  }
  if (*(gh_long *)(lVar5 + 0x28) == local_78) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
