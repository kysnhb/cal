/* bzStateGame::adMassage_00472a3c @ 0x00472a3c — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a50826
#define DAT_00a50826 (*(undefined1 *)IMG(0x00a50826))
#undef DAT_00a53530
#define DAT_00a53530 (*(undefined1 *)IMG(0x00a53530))
#undef isGStop
#define isGStop (*(undefined1 *)IMG(0x00d23dc4))
gh_long bzStateGame__adMassage_00472a3c(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  int param_2 = (int)gh_a1;

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *self_00;
  gh_long lVar4;
  int iVar5;
  int iVar6;
  
  cocos2d__log_005d21e4(GH_ARG(&DAT_00a50826), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  if (((*(int *)(self + 0x1ae8) != 1000) && (self[0x8da4c] == '\0')) && ((uint)param_2 < 0xb)) {
    uVar2 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar2 & 0x414) == 0) {
      if ((uVar2 & 0x28) != 0) {
        if (*(gh_long *)(self + 0x820) != 0) {
          BannerInterface__onResume_0047fb28();
        }
        cocos2d__Application__getInstance_00484a3c();
        cocos2d__Application__ClearNotificationAll_00484a5c();
        if (isGStop != '\0') {
          bzStateGame__Aitemload_003a9588(GH_ARG(self));
          bzStateGame__STGload_003a4888(GH_ARG(self));
          bzStateGame__GOrderload_003a39c8(GH_ARG(self));
          bzStateGame__AchieveLoad_003aa0b4(GH_ARG(self));
          lVar4 = kDate__getSingleton_004797f8();
          iVar1 = *(int *)(lVar4 + 0xc);
          *(int *)(self + 0x32bb9c) = iVar1;
          iVar5 = *(int *)(lVar4 + 0x10);
          *(int *)(self + 0x32bba0) = iVar5;
          uVar3 = *(undefined4 *)(&DAT_00a53530 + (gh_long)iVar1 * 4);
          *(undefined4 *)(self + 0x32bb98) = *(undefined4 *)(lVar4 + 8);
          *(undefined4 *)(self + 0x32bfb4) = uVar3;
          if (*(int *)(self + 0x32c468) != iVar5) {
            *(undefined4 *)(self + 0x32c46c) = 0x14d;
            *(int *)(self + 0x32c468) = iVar5;
          }
          kDate__getSingleton_004797f8();
          uVar3 = kDate__getIntervalSince1970_0047991c();
          *(undefined4 *)(self + 0x32bb94) = uVar3;
          bzStateGame__GRTimeload_004717b8(GH_ARG(self));
          iVar5 = *(int *)(self + 0x32bb94) - *(int *)(self + 0x32c144);
          *(int *)(self + 0x32bfb0) = iVar5;
          iVar1 = *(int *)(self + 0x32c408);
          if (0 < iVar1) {
            iVar6 = iVar1 - iVar5;
            if (iVar6 == 0 || iVar1 < iVar5) {
              iVar6 = 0;
              *(undefined4 *)(self + 0x32c2cc) = *(undefined4 *)(self + 0x32c31c);
            }
            else {
              *(int *)(self + 0x32c2cc) = *(int *)(self + 0x32c2cc) + iVar5;
            }
            *(int *)(self + 0x32c408) = iVar6;
          }
          iVar1 = *(int *)(self + 0x32c40c);
          if (0 < iVar1) {
            iVar6 = iVar1 - iVar5;
            if (iVar6 == 0 || iVar1 < iVar5) {
              iVar6 = 0;
              *(undefined4 *)(self + 0x32c2d0) = *(undefined4 *)(self + 0x32c320);
            }
            else {
              *(int *)(self + 0x32c2d0) = *(int *)(self + 0x32c2d0) + iVar5;
            }
            *(int *)(self + 0x32c40c) = iVar6;
          }
          iVar1 = *(int *)(self + 0x32c410);
          if (0 < iVar1) {
            iVar6 = iVar1 - iVar5;
            if (iVar6 == 0 || iVar1 < iVar5) {
              iVar6 = 0;
              *(undefined4 *)(self + 0x32c2d4) = *(undefined4 *)(self + 0x32c324);
            }
            else {
              *(int *)(self + 0x32c2d4) = *(int *)(self + 0x32c2d4) + iVar5;
            }
            *(int *)(self + 0x32c410) = iVar6;
          }
          iVar1 = *(int *)(self + 0x32c414);
          if (0 < iVar1) {
            iVar6 = iVar1 - iVar5;
            if (iVar6 == 0 || iVar1 < iVar5) {
              iVar6 = 0;
              *(undefined4 *)(self + 0x32c2d8) = *(undefined4 *)(self + 0x32c328);
            }
            else {
              *(int *)(self + 0x32c2d8) = *(int *)(self + 0x32c2d8) + iVar5;
            }
            *(int *)(self + 0x32c414) = iVar6;
          }
          iVar1 = *(int *)(self + 0x32c418);
          if (0 < iVar1) {
            iVar6 = iVar1 - iVar5;
            if (iVar6 == 0 || iVar1 < iVar5) {
              iVar6 = 0;
              *(undefined4 *)(self + 0x32c2dc) = *(undefined4 *)(self + 0x32c32c);
            }
            else {
              *(int *)(self + 0x32c2dc) = *(int *)(self + 0x32c2dc) + iVar5;
            }
            *(int *)(self + 0x32c418) = iVar6;
          }
          iVar1 = *(int *)(self + 0x32c41c);
          if (0 < iVar1) {
            iVar6 = iVar1 - iVar5;
            if (iVar6 == 0 || iVar1 < iVar5) {
              iVar5 = *(int *)(self + 0x32c330);
              iVar6 = 0;
            }
            else {
              iVar5 = *(int *)(self + 0x32c2e0) + iVar5;
            }
            *(int *)(self + 0x32c2e0) = iVar5;
            *(int *)(self + 0x32c41c) = iVar6;
          }
          bzStateGame__AitemSsave_003ab270(GH_ARG(self));
          bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
          return 0;
        }
      }
    }
    else {
      if (*(gh_long *)(self + 0x820) != 0) {
        BannerInterface__onPause_0047fb24();
      }
      kDate__getSingleton_004797f8();
      self_00 = (undefined *)kDate__getIntervalSince1970_0047991c();
      *(int *)(self + 0x32bb94) = (int)self_00;
      bzStateGame__GRTimeSsave_00471554(GH_ARG(self_00), GH_ARG((int)self_00));
      bzStateGame__AitemSsave_003ab270(GH_ARG(self));
      bzStateGame__STGSsave_003aa8b8(GH_ARG(self));
      if ((*(int *)(self + 0x1ae8) == 0x16) || (*(int *)(self + 0x1ae8) == 0xb)) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
        }
        *(undefined4 *)(self + 0x1ae8) = 0xd;
      }
      isGStop = '\x01';
      if (param_2 == 10) {
        cocos2d__log_005d21e4(GH_ARG("exit"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
        byebye_0047e184(GH_ARG(0));
        return 0;
      }
    }
  }
  return 0;
  return 0;
}
