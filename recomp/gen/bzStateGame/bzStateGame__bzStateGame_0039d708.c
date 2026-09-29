/* bzStateGame::bzStateGame_0039d708 @ 0x0039d708 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(uint8_t * *)IMG(0x00d23c48))
#undef PTR__bzStateGame_0039dbb0_00cc25a0
#define PTR__bzStateGame_0039dbb0_00cc25a0 (*(uint8_t * *)IMG(0x00cc25a0))
#undef DAT_00d40318
#define DAT_00d40318 (*(undefined1 *)IMG(0x00d40318))
gh_long bzStateGame__bzStateGame_0039d708(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  undefined8 *puVar1;
  undefined4 uVar2;
  gh_long lVar3;
  gh_long lVar4;
  gh_long lVar5;
  gh_long lVar6;
  
  lVar3 = tpidr_el0;
  lVar5 = *(gh_long *)(lVar3 + 0x28);
  cocos2d__Scene__Scene_0058f9c4(GH_ARG((Scene *)self));
  *(undefined8 *)(self + 0x340) = 0;
  *(undefined8 *)(self + 0x3b8) = 0;
  *(undefined8 *)(self + 0x3b0) = 0;
  *(undefined8 *)(self + 0x3c8) = 0;
  *(undefined8 *)(self + 0x3c0) = 0;
  *(undefined **)(self + 0x3b8) = self + 0x3a8;
  *(undefined **)(self + 0x3c0) = self + 0x3a8;
  *(undefined8 *)(self + 0x388) = 0;
  *(undefined8 *)(self + 0x3a8) = 0;
  *(undefined8 *)(self + 0x328) = 0;
  *(undefined8 *)(self + 800) = 0;
  *(undefined8 *)(self + 0x338) = 0;
  *(undefined8 *)(self + 0x330) = 0;
  *(undefined **)(self + 0x330) = self + 800;
  *(undefined **)(self + 0x338) = self + 800;
  *(undefined8 *)(self + 0x3f8) = 0;
  *(undefined ***)self = &PTR__bzStateGame_0039dbb0_00cc25a0;
  *(undefined8 *)(self + 0x398) = 0;
  *(undefined8 *)(self + 0x390) = 0;
  *(undefined8 *)(self + 0x3f0) = 0;
  *(undefined8 *)(self + 1000) = 0;
  puVar1 = (undefined8 *)(self + 0x3d8);
  *(undefined8 *)(self + 0x3e0) = 0;
  *puVar1 = 0;
  *(undefined8 **)(self + 1000) = puVar1;
  *(undefined8 **)(self + 0x3f0) = puVar1;
  *(undefined1 **)(self + 0x890) = &DAT_00d40318;
  *(undefined1 **)(self + 0x888) = &DAT_00d40318;
  self[0xb01] = 0;
  *(undefined2 *)(self + 0xb02) = 0;
  self[0xb18] = 0;
  *(undefined4 *)(self + 0xb60) = 0;
  *(undefined2 *)(self + 0xb64) = 0;
  lVar4 = kDate__getSingleton_004797f8();
  *(gh_long *)(self + 0xb68) = lVar4;
  lVar6 = 0;
  *(undefined4 *)(self + 0xb70) = *(undefined4 *)(lVar4 + 0x10);
  *(undefined4 *)(self + 0xb74) = *(undefined4 *)(lVar4 + 0xc);
  uVar2 = *(undefined4 *)(lVar4 + 8);
  *(undefined2 *)(self + 0xb88) = 0;
  *(undefined4 *)(self + 0xb78) = uVar2;
  *(undefined8 *)(self + 0xb8c) = 0;
  *(undefined2 *)(self + 0xb95) = 0;
  *(undefined4 *)(self + 0xb98) = 0;
  *(undefined4 *)(self + 0xba8) = 0;
  *(undefined8 *)(self + 0xbc0) = 0;
  *(undefined8 *)(self + 3000) = 0;
  *(undefined8 *)(self + 0xbb0) = 0;
  *(undefined1 **)(self + 0x1148) = &DAT_00d40318;
  *(undefined1 **)(self + 0x1140) = &DAT_00d40318;
  do {
    SoundClip__SoundClip_0047e340(GH_ARG((SoundClip *)(self + lVar6 + 0x11e8)));
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0x708);
  SoundClip__SoundClip_0047e340(GH_ARG((SoundClip *)(self + 0x18f0)));
  SoundClip__SoundClip_0047e340(GH_ARG((SoundClip *)(self + 0x1908)));
  SoundClip__SoundClip_0047e340(GH_ARG((SoundClip *)(self + 0x1920)));
  *(undefined8 *)(self + 0x1940) = 0;
  *(undefined8 *)(self + 0x1938) = 0;
  *(undefined8 *)(self + 0x1948) = 0;
  *(undefined1 **)(self + 0x8da60) = &DAT_00d40318;
  *(undefined1 **)(self + 0x8da58) = &DAT_00d40318;
  *(undefined1 **)(self + 0x8da70) = &DAT_00d40318;
  *(undefined1 **)(self + 0x8da68) = &DAT_00d40318;
  *(undefined8 *)(self + 0x8dabc) = 0;
  *(undefined4 *)(self + 0x32a8b8) = 0;
  *(undefined4 *)(self + 0x32aa78) = 0;
  *(undefined4 *)(self + 0x32aaa8) = 0;
  *(undefined8 *)(self + 0x32aad8) = 0;
  *(undefined8 *)(self + 0x32aacd) = 0;
  *(undefined8 *)(self + 0x32aac8) = 0;
  *(undefined1 **)(self + 0x32c960) = &DAT_00d40318;
  *(undefined1 **)(self + 0x32c958) = &DAT_00d40318;
  DAT_00d23c48 = self;
  *(undefined4 *)(self + 0xc40) = 0;
  memset(self + 0xc44,0xff,0xf0);
  if (*(gh_long *)(lVar3 + 0x28) == lVar5) {
    return 0;
  }
                    
  __stack_chk_fail();
  return 0;
}
