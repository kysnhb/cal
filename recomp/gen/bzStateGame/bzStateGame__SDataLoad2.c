/* bzStateGame::SDataLoad2 @ 0x003aabdc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__SDataLoad2(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  gh_long lVar1;
  ulong uVar2;
  void *__dest;
  undefined8 uVar3;
  uint64_t gh_frame64[14] = {0};   /* 원작 스택 프레임 (SP-0x58 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x58;
#define local_58 (*(void **)(gh_fb - 0x58))
#define local_50 (*(size_t *)(gh_fb - 0x50))
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  
  lVar1 = tpidr_el0;
  local_48 = *(gh_long *)(lVar1 + 0x28);
  *(undefined4 *)(self + 0x32bbc4) = 0;
  uVar2 = kScene__httpPost_0047e198(GH_ARG((kScene *)self), GH_ARG("http://iphonegame.cafe24.com/popup/aos5.txt"), GH_ARG((char *)0x0), GH_ARG((CurlResData *)&local_58));
  if ((uVar2 & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    __dest = malloc(local_50 + 1);
    memcpy(__dest,local_58,local_50);
    *(undefined1 *)((gh_long)__dest + local_50) = 0;
    kScene__clearResData_0047e310(GH_ARG((kScene *)self), GH_ARG((CurlResData *)&local_58));
    if (local_50 - 1 < 8999) {
      memcpy(self + 0x32bbc8,__dest,local_50);
      *(undefined4 *)(self + 0x32bbc4) = 0x3c;
    }
    if (__dest != (void *)0x0) {
      operator_delete(__dest);
    }
    uVar3 = 0;
  }
  if (*(gh_long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    
  __stack_chk_fail(uVar3);
  return 0;
}
