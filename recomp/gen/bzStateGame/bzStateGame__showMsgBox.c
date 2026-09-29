/* bzStateGame::showMsgBox @ 0x00472e70 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a508cd
#define DAT_00a508cd (*(undefined1 *)IMG(0x00a508cd))
#undef popExit
#define popExit (*(undefined8 *)IMG(0x00d23dc8))
#undef _M_invoke
#define _M_invoke (*(undefined1 *)IMG(0x00478554))
#undef DAT_00afe81e
#define DAT_00afe81e (*(undefined1 *)IMG(0x00afe81e))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef _M_manager
#define _M_manager (*(undefined1 *)IMG(0x00478574))
#undef msgBoxCallback
#define msgBoxCallback (*(undefined1 *)IMG(0x00473988))
#undef DAT_00a508bb
#define DAT_00a508bb (*(undefined1 *)IMG(0x00a508bb))
#undef DAT_00a508c2
#define DAT_00a508c2 (*(undefined1 *)IMG(0x00a508c2))
#undef DAT_00a508c6
#define DAT_00a508c6 (*(undefined1 *)IMG(0x00a508c6))
#undef ZERO
#define ZERO (*(undefined8 *)IMG(0x00afd510))
#undef cocos2d__Size__ZERO
#define cocos2d__Size__ZERO (*(undefined1 *)IMG(0xafd510))
gh_long bzStateGame__showMsgBox(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2, uint64_t gh_a3)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gh_a2;
  int param_4 = (int)gh_a3;

  undefined *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  gh_long lVar5;
  undefined8 uVar6;
  kPopup *this;
  Button *this_00;
  Button *this_01;
  gh_long *plVar7;
  gh_long *plVar8;
  int *piVar9;
  uint64_t gh_frame64[27] = {0};   /* 원작 스택 프레임 (SP-0xc0 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0xc0;
#define auStack_c0 (*(undefined1 (*)[8])(gh_fb - 0xc0))
#define local_b8 (*(gh_long *)(gh_fb - 0xb8))
#define auStack_b0 (*(undefined1 (*)[8])(gh_fb - 0xb0))
#define local_a8 (*(gh_long *)(gh_fb - 0xa8))
#define auStack_a0 (*(undefined1 (*)[8])(gh_fb - 0xa0))
#define local_98 (*(undefined8 *(*)[2])(gh_fb - 0x98))
#define local_88 (*(code **)(gh_fb - 0x88))
#define pcStack_80 (*(code **)(gh_fb - 0x80))
#define local_74 (*(undefined4 (*)[3])(gh_fb - 0x74))
#define local_68 (*(gh_long *)(gh_fb - 0x68))
  
  lVar5 = tpidr_el0;
  local_68 = *(gh_long *)(lVar5 + 0x28);
  FUN_009d4eac(GH_ARG(local_98), GH_ARG("img/UI/MenuUi[62].png"), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  uVar6 = cocos2d__Sprite__create_005918a4(GH_ARG((string *)local_98));
  if (local_98[0] + -3 != &DAT_00d40300) {
    piVar9 = (int *)(local_98[0] + -1);
    do {
      iVar2 = *piVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 < 1) {
      operator_delete(local_98[0] + -3);
    }
  }
  cocos2d__Color4B__Color4B_0060b934(GH_ARG((Color4B *)local_74), GH_ARG('\0'), GH_ARG('\0'), GH_ARG('\0'), GH_ARG('\0'));
  this = (kPopup *)kPopup__create_0047c134(GH_ARG(uVar6), GH_ARG(local_74[0]));
  popExit = this;
  local_98[0] = operator_new(0x18);
  local_98[0][2] = self;
  local_98[0][1] = 0;
  *local_98[0] = msgBoxCallback;
  local_88 = std___Function_base___Base_manager_std___Bind_std___Mem_fn_void_bzStateGame_____cocos2d__Ref____bzStateGame__std___Placeholder_1_______M_manager;
  pcStack_80 = std___Function_handler_void_cocos2d__Ref___std___Bind_std___Mem_fn_void_bzStateGame_____cocos2d__Ref____bzStateGame__std___Placeholder_1_______M_invoke;
  kPopup__setCallback_0047c26c(GH_ARG(this), GH_ARG((function *)local_98));
  if (local_88 != (code *)0x0) {
    (*local_88)(local_98,local_98,3);
  }
  if (param_4 == 0) {
    FUN_009d4eac(GH_ARG(local_98), GH_ARG("img/UI/MenuUi[147].png"), GH_ARG(auStack_a0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(&local_a8), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_b0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(&local_b8), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    this_00 = (Button *)cocos2d__ui__Button__create_004e7df4(GH_ARG(local_98), GH_ARG(&local_a8), GH_ARG(&local_b8), GH_ARG(0));
    if ((undefined8 *)(local_b8 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_b8 + -8);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete((undefined8 *)(local_b8 + -0x18));
      }
    }
    if ((undefined8 *)(local_a8 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_a8 + -8);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete((undefined8 *)(local_a8 + -0x18));
      }
    }
    if (local_98[0] + -3 != &DAT_00d40300) {
      piVar9 = (int *)(local_98[0] + -1);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete(local_98[0] + -3);
      }
    }
    local_98[0] = (undefined8 *)0x4382000043c80000;
    gh_vcall(GH_ARG((gh_long *)this_00), 0x98, GH_ARG(local_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    puVar1 = &DAT_00a508c2;
    if (self[0x1138] != '\0') {
      puVar1 = &DAT_00a508bb;
    }
    FUN_009d4eac(GH_ARG(local_98), GH_ARG(puVar1), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    cocos2d__ui__Button__setTitleText_004e94b4(GH_ARG(this_00), GH_ARG((string *)local_98));
    if (local_98[0] + -3 != &DAT_00d40300) {
      piVar9 = (int *)(local_98[0] + -1);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete(local_98[0] + -3);
      }
    }
    cocos2d__ui__Button__setTitleFontSize_004e9758(GH_ARG(this_00), GH_ARG(14.0));
    FUN_009d4eac(GH_ARG(local_98), GH_ARG("img/UI/MenuUi[147].png"), GH_ARG(auStack_a0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(&local_a8), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_b0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(&local_b8), GH_ARG(&DAT_00afe81e), GH_ARG(auStack_c0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    this_01 = (Button *)cocos2d__ui__Button__create_004e7df4(GH_ARG(local_98), GH_ARG(&local_a8), GH_ARG(&local_b8), GH_ARG(0));
    if ((undefined8 *)(local_b8 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_b8 + -8);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete((undefined8 *)(local_b8 + -0x18));
      }
    }
    if ((undefined8 *)(local_a8 + -0x18) != &DAT_00d40300) {
      piVar9 = (int *)(local_a8 + -8);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete((undefined8 *)(local_a8 + -0x18));
      }
    }
    if (local_98[0] + -3 != &DAT_00d40300) {
      piVar9 = (int *)(local_98[0] + -1);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete(local_98[0] + -3);
      }
    }
    local_98[0] = (undefined8 *)0x43820000440c0000;
    gh_vcall(GH_ARG((gh_long *)this_01), 0x98, GH_ARG(local_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    puVar1 = &DAT_00a508cd;
    if (self[0x1138] != '\0') {
      puVar1 = &DAT_00a508c6;
    }
    FUN_009d4eac(GH_ARG(local_98), GH_ARG(puVar1), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    cocos2d__ui__Button__setTitleText_004e94b4(GH_ARG(this_01), GH_ARG((string *)local_98));
    if (local_98[0] + -3 != &DAT_00d40300) {
      piVar9 = (int *)(local_98[0] + -1);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete(local_98[0] + -3);
      }
    }
    cocos2d__ui__Button__setTitleFontSize_004e9758(GH_ARG(this_01), GH_ARG(14.0));
    FUN_009d4eac(GH_ARG(local_98), GH_ARG(&DAT_00afe81e), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    plVar7 = (gh_long *)cocos2d__Label__createWithSystemFont_0055a324(GH_ARG(0x41c80000), GH_ARG(param_2), GH_ARG(local_98), GH_ARG(&cocos2d__Size__ZERO), GH_ARG(0), GH_ARG(0));
    if (local_98[0] + -3 != &DAT_00d40300) {
      piVar9 = (int *)(local_98[0] + -1);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete(local_98[0] + -3);
      }
    }
    local_98[0] = (undefined8 *)0x43cd000043f00000;
    gh_vcall(GH_ARG(plVar7), 0x98, GH_ARG(local_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    FUN_009d4eac(GH_ARG(local_98), GH_ARG(&DAT_00afe81e), GH_ARG(&local_b8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    plVar8 = (gh_long *)cocos2d__Label__createWithSystemFont_0055a324(GH_ARG(0x41a00000), GH_ARG(param_3), GH_ARG(local_98), GH_ARG(&cocos2d__Size__ZERO), GH_ARG(0), GH_ARG(0));
    if (local_98[0] + -3 != &DAT_00d40300) {
      piVar9 = (int *)(local_98[0] + -1);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
        operator_delete(local_98[0] + -3);
      }
    }
    local_98[0] = (undefined8 *)0x43ac800043f00000;
    gh_vcall(GH_ARG(plVar8), 0x98, GH_ARG(local_98), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    gh_vcall(GH_ARG((gh_long *)popExit), 0x690, GH_ARG(this_00), GH_ARG(0), GH_ARG(1), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    gh_vcall(GH_ARG((gh_long *)popExit), 0x690, GH_ARG(this_01), GH_ARG(0), GH_ARG(2), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    gh_vcall(GH_ARG((gh_long *)popExit), 0x208, GH_ARG(plVar7), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    gh_vcall(GH_ARG((gh_long *)popExit), 0x208, GH_ARG(plVar8), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    gh_vcall(GH_ARG((gh_long *)popExit), 0x668, GH_ARG(self), GH_ARG(0xfffffffe), GH_ARG(1000000), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  }
  if (*(gh_long *)(lVar5 + 0x28) != local_68) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
