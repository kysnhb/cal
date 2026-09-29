/* bzStateGame::controlBuyStoreWin_00448cdc @ 0x00448cdc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__controlBuyStoreWin_00448cdc(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  int iVar1;
  float *pfVar2;
  float *pfVar3;
  Application *this;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(self + 0x1af0);
  if (iVar8 == 0xc) {
    iVar8 = *(int *)(self + 0x1164);
    iVar4 = *(int *)(self + 0x1160);
    iVar6 = (int)*(float *)(self + 0x8dac0);
    iVar7 = (int)*(float *)(self + 0x8dabc);
    if ((((iVar6 < iVar8 + -0x51) && (iVar4 + 0x144 < iVar7)) && (iVar7 < iVar4 + 0x1bc)) &&
       (iVar8 + -0xc9 < iVar6)) {
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
        iVar4 = *(int *)(self + 0x1160);
        iVar8 = *(int *)(self + 0x1164);
        iVar7 = (int)*(float *)(self + 0x8dabc);
        iVar6 = (int)*(float *)(self + 0x8dac0);
      }
      *(undefined4 *)(self + 0x1af0) = 0;
      self[0x1af4] = 0;
    }
    iVar1 = iVar8 + 0x7d;
    iVar8 = iVar8 + 0x2d;
    *(undefined4 *)(self + 0x8da50) = 0xffffffff;
    if (((iVar6 < iVar1) && (iVar4 + -0xc0 < iVar7)) && ((iVar7 < iVar4 + -0x1f && (iVar8 < iVar6)))
       ) {
      iVar8 = 0x10;
    }
    else if (((iVar6 < iVar1) && (iVar4 < iVar7)) && ((iVar7 < iVar4 + 0xa1 && (iVar8 < iVar6)))) {
      iVar8 = 0x11;
    }
    else {
      if (iVar1 <= iVar6) {
        return 0;
      }
      if (iVar7 <= iVar4 + 0xc0) {
        return 0;
      }
      if (iVar4 + 0x161 <= iVar7) {
        return 0;
      }
      if (iVar6 <= iVar8) {
        return 0;
      }
      iVar8 = 0x12;
    }
  }
  else if (iVar8 == 0xb) {
    iVar8 = *(int *)(self + 0x1164);
    iVar4 = *(int *)(self + 0x1160);
    iVar6 = (int)*(float *)(self + 0x8dac0);
    iVar7 = (int)*(float *)(self + 0x8dabc);
    if ((((iVar6 < iVar8 + -0x51) && (iVar4 + 0x144 < iVar7)) && (iVar7 < iVar4 + 0x1bc)) &&
       (iVar8 + -0xc9 < iVar6)) {
      if (*(int *)(self + 0x32c160) == 0) {
        SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
        iVar4 = *(int *)(self + 0x1160);
        iVar8 = *(int *)(self + 0x1164);
        iVar7 = (int)*(float *)(self + 0x8dabc);
        iVar6 = (int)*(float *)(self + 0x8dac0);
      }
      *(undefined4 *)(self + 0x1af0) = 0;
      self[0x1af4] = 0;
    }
    iVar1 = iVar8 + 0x7d;
    iVar8 = iVar8 + 0x2d;
    *(undefined4 *)(self + 0x8da50) = 0xffffffff;
    if (((iVar6 < iVar1) && (iVar4 + -0xc0 < iVar7)) && ((iVar7 < iVar4 + -0x1f && (iVar8 < iVar6)))
       ) {
      iVar8 = 0xd;
    }
    else if (((iVar6 < iVar1) && (iVar4 < iVar7)) && ((iVar7 < iVar4 + 0xa1 && (iVar8 < iVar6)))) {
      iVar8 = 0xe;
    }
    else {
      if (iVar1 <= iVar6) {
        return 0;
      }
      if (iVar7 <= iVar4 + 0xc0) {
        return 0;
      }
      if (iVar4 + 0x161 <= iVar7) {
        return 0;
      }
      if (iVar6 <= iVar8) {
        return 0;
      }
      iVar8 = 0xf;
    }
  }
  else {
    pfVar2 = (float *)(self + 0x8dabc);
    iVar4 = *(int *)(self + 0x1160);
    iVar6 = (int)*pfVar2;
    pfVar3 = (float *)(self + 0x8dac0);
    if (iVar8 == 0xd) {
      iVar8 = *(int *)(self + 0x1164);
      iVar7 = (int)*pfVar3;
      if ((((iVar7 < iVar8 + -0x6a) && (iVar4 + 0x144 < iVar6)) && (iVar6 < iVar4 + 0x1bc)) &&
         (iVar8 + -0xe2 < iVar7)) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
          iVar4 = *(int *)(self + 0x1160);
          iVar8 = *(int *)(self + 0x1164);
          iVar6 = (int)*pfVar2;
          iVar7 = (int)*pfVar3;
        }
        *(undefined4 *)(self + 0x1af0) = 0;
        self[0x1af4] = 0;
      }
      iVar1 = iVar8 + 0x9c;
      iVar8 = iVar8 + 0x4c;
      *(undefined4 *)(self + 0x8da50) = 0xffffffff;
      if (((iVar7 < iVar1) && (iVar4 + -0xc0 < iVar6)) &&
         ((iVar6 < iVar4 + -0x1f && (iVar8 < iVar7)))) {
        iVar8 = 0x13;
      }
      else if (((iVar7 < iVar1) && (iVar4 < iVar6)) && ((iVar6 < iVar4 + 0xa1 && (iVar8 < iVar7))))
      {
        iVar8 = 0x14;
      }
      else {
        if (iVar1 <= iVar7) {
          return 0;
        }
        if (iVar6 <= iVar4 + 0xc0) {
          return 0;
        }
        if (iVar4 + 0x161 <= iVar6) {
          return 0;
        }
        if (iVar7 <= iVar8) {
          return 0;
        }
        iVar8 = 0x15;
      }
    }
    else {
      iVar8 = *(int *)(self + 0x1164);
      iVar7 = (int)*pfVar3;
      if ((((iVar7 < iVar8 + -0x5a) && (iVar4 + 0x15b < iVar6)) && (iVar6 < iVar4 + 0x1d3)) &&
         (iVar8 + -0xd2 < iVar7)) {
        if (*(int *)(self + 0x32c160) == 0) {
          SoundClip__play_0047e570(GH_ARG((SoundClip *)(self + 0x1380)), GH_ARG(false));
          iVar4 = *(int *)(self + 0x1160);
          iVar8 = *(int *)(self + 0x1164);
          iVar6 = (int)*pfVar2;
          iVar7 = (int)*pfVar3;
        }
        *(undefined4 *)(self + 0x1af0) = 0;
        self[0x1af4] = 0;
      }
      iVar1 = iVar8 + 0x7e;
      iVar8 = iVar8 + -0x15;
      *(undefined4 *)(self + 0x8da50) = 0xffffffff;
      if (((iVar7 < iVar1) && (iVar4 + -0x199 < iVar6)) &&
         ((iVar6 < iVar4 + -0x120 && (iVar8 < iVar7)))) {
        iVar8 = 0;
        *(undefined4 *)(self + 0x8da50) = 0;
        goto LAB_004492b0;
      }
      if (((iVar7 < iVar1) && (iVar4 + -0x111 < iVar6)) &&
         ((iVar6 < iVar4 + -0x98 && (iVar8 < iVar7)))) {
        iVar8 = 1;
      }
      else if ((((iVar7 < iVar1) && (iVar4 + -0x88 < iVar6)) && (iVar6 < iVar4 + -0xf)) &&
              (iVar8 < iVar7)) {
        iVar8 = 2;
      }
      else if (((iVar7 < iVar1) && (iVar4 + -3 < iVar6)) &&
              ((iVar6 < iVar4 + 0x76 && (iVar8 < iVar7)))) {
        iVar8 = 3;
      }
      else if (((iVar7 < iVar1) && (iVar4 + 0x83 < iVar6)) &&
              ((iVar6 < iVar4 + 0xfc && (iVar8 < iVar7)))) {
        iVar8 = 4;
      }
      else {
        if (iVar1 <= iVar7) {
          return 0;
        }
        if (iVar6 <= iVar4 + 0x108) {
          return 0;
        }
        if (iVar4 + 0x181 <= iVar6) {
          return 0;
        }
        if (iVar7 <= iVar8) {
          return 0;
        }
        iVar8 = 5;
      }
    }
  }
  *(int *)(self + 0x8da50) = iVar8;
LAB_004492b0:
  self[0x8da4c] = 0;
  this = (Application *)cocos2d__Application__getInstance_00484a3c();
  cocos2d__Application__purchase_00485ae8(GH_ARG(this), GH_ARG(iVar8));
  self[0x8da4c] = 1;
  if (*(int *)(self + 0x1af0) == 0) {
    uVar5 = 6;
    if (*(int *)(self + 0x8da50) < 6) {
      uVar5 = 1;
    }
    *(undefined4 *)(self + 0x1ae8) = uVar5;
  }
  else {
    self[0x1af4] = 1;
  }
  return 0;
  return 0;
}
