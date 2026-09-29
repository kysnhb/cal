/* bzStateGame::startState @ 0x003a0118 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00a4d879
#define DAT_00a4d879 (*(undefined1 *)IMG(0x00a4d879))
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
#undef isGStop
#define isGStop (*(undefined1 *)IMG(0x00d23dc4))
#undef viewType
#define viewType (*(undefined4 *)IMG(0x00d23dc0))
#undef DAT_00a4d854
#define DAT_00a4d854 (*(undefined1 *)IMG(0x00a4d854))
gh_long bzStateGame__startState(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  char *__s;
  _Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
  *this;
  char cVar1;
  bool bVar2;
  gh_long lVar3;
  int iVar4;
  undefined4 uVar5;
  size_t sVar6;
  int *piVar7;
  uint64_t gh_frame64[15] = {0};   /* 원작 스택 프레임 (SP-0x60 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x60;
#define local_60 (*(gh_long *)(gh_fb - 0x60))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
#define auStack_50 (*(undefined1 (*)[8])(gh_fb - 0x50))
#define local_48 (*(gh_long *)(gh_fb - 0x48))
  
  lVar3 = tpidr_el0;
  local_48 = *(gh_long *)(lVar3 + 0x28);
  *(undefined8 *)(self + 0xc38) = 0;
  *(undefined8 *)(self + 0x8daa0) = 0;
  *(undefined8 *)(self + 0x8da98) = 0;
  *(undefined8 *)(self + 0x8da90) = 0;
  *(undefined8 *)(self + 0x8da88) = 0;
  *(undefined8 *)(self + 0x8da80) = 0;
  *(undefined8 *)(self + 0x32b824) = 0x320000000c8;
  bzStateGame__initResource_003a291c(GH_ARG(self));
  cocos2d__Application__getInstance_00484a3c();
  cocos2d__Application__ClearNotificationAll_00484a5c();
  __s = self + 0xd38;
  isGStop = 0;
  kScene__getSysInfo_0047e070(GH_ARG((kScene *)self), GH_ARG(1), GH_ARG(__s));
  sVar6 = strlen(__s);
  FUN_009d7480(GH_ARG(self + 0x32c960), GH_ARG(__s), GH_ARG(sVar6));
  cocos2d__log_005d21e4(GH_ARG(" deviceID %s "), GH_ARG(*(undefined8 *)(self + 0x32c960)), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  viewType = 1;
  self[0x1138] = 0;
  kScene__getSysInfo_0047e070(GH_ARG((kScene *)self), GH_ARG(0), GH_ARG(__s));
  iVar4 = strcmp(__s,"ko");
  if (iVar4 == 0) {
    self[0x1138] = 1;
  }
  sVar6 = strlen(__s);
  FUN_009d7480(GH_ARG(self + 0x1140), GH_ARG(__s), GH_ARG(sVar6));
  kScene__getSysInfo_0047e070(GH_ARG((kScene *)self), GH_ARG(5), GH_ARG(__s));
  sVar6 = strlen(__s);
  FUN_009d7480(GH_ARG(self + 0x1148), GH_ARG(__s), GH_ARG(sVar6));
  *(undefined8 *)(self + 0x1160) = 0x140000001e0;
  *(undefined8 *)(self + 0x1158) = 0x280000003c0;
  *(undefined8 *)(self + 0x1150) = 0x4000000000000001;
  kDate__getSingleton_004797f8();
  uVar5 = kDate__getIntervalSince1970_0047991c();
  *(undefined4 *)(self + 0x32a888) = uVar5;
  *(undefined4 *)(self + 0x1aec) = 0;
  *(undefined8 *)(self + 0x8daa8) = 0xf0000000f;
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("BestScoreStage"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQAg"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG((_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
              *)(self + 0x3a0)), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("FirstPlay"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG(&DAT_00a4d854), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  this = (_Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string___
          *)(self + 0x3d0);
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("FirstPlayJumpJump"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG(&DAT_00a4d879), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("FirstPlayDefense"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQBA"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("FirstPlayWeapons"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQBQ"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("FirstPlayFriends"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQBg"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("FirstPlayZombie"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQBw"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("FirstLevelUp"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQFQ"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("FirstPayment"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQFA"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level5Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQCA"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level10Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQCQ"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level15Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQCg"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level20Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQCw"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level25Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQDA"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level30Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQDQ"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level35Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQDg"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level40Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQDw"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level45Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQEA"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level50Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQEQ"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level55Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQEg"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  FUN_009d4eac(GH_ARG(&local_60), GH_ARG("Level60Success"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  FUN_009d4eac(GH_ARG(&local_58), GH_ARG("CgkI0eeN_4sLEAIQEw"), GH_ARG(auStack_50), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  std___Rb_tree_std__string_std__pair_std__string_const_std__string__std___Select1st_std__pair_std__string_const_std__string___std__less_std__string__std__allocator_std__pair_std__string_const_std__string______M_insert_unique_std__pair_std__string_std__string___00478224(GH_ARG(this), GH_ARG((pair_conflict *)&local_60));
  if ((undefined8 *)(local_58 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_58 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_58 + -0x18));
    }
  }
  if ((undefined8 *)(local_60 + -0x18) != &DAT_00d40300) {
    piVar7 = (int *)(local_60 + -8);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 < 1) {
      operator_delete((undefined8 *)(local_60 + -0x18));
    }
  }
  CommonInterface__setDebugMode_0047fb48(GH_ARG(true));
  CommonInterface__reqAdTrackingAuthorization_0047fb58(GH_ARG(onAdTrackingAuthorizationResponse));
  CommonInterface__setAdvertiserTrackingEnabled_0047fb4c(GH_ARG(true));
  *(uint64_t *)(self + 0x8b5) = (uint64_t)0x64373235616132ULL;
  *(undefined8 *)(self + 0x8b0) = 0x6161323138616438;
  *(undefined8 *)(self + 0x8a8) = 0x2d393663392d3865;
  *(undefined8 *)(self + 0x8a0) = 0x62342d666337662d;
  *(undefined8 *)(self + 0x898) = 0x6330353730666131;
  *(uint64_t *)(self + 0x8e7) = (uint64_t)0x61383939376332ULL;
  *(undefined8 *)(self + 0x8e2) = 0x3763323837366435;
  *(undefined8 *)(self + 0x8da) = 0x2d613333622d3162;
  *(undefined8 *)(self + 0x8d2) = 0x62342d323235342d;
  *(undefined8 *)(self + 0x8ca) = 0x3633373666376538;
  *(uint64_t *)(self + 0x919) = (uint64_t)0x61393463653630ULL;
  *(undefined8 *)(self + 0x914) = 0x6536303738636664;
  *(undefined8 *)(self + 0x90c) = 0x2d326431382d3563;
  *(undefined8 *)(self + 0x904) = 0x36342d336235612d;
  *(undefined8 *)(self + 0x8fc) = 0x3331633165656437;
  *(uint64_t *)(self + 0x94b) = (uint64_t)0x30643437636164ULL;
  *(undefined8 *)(self + 0x946) = 0x6361646562356663;
  *(undefined8 *)(self + 0x93e) = 0x2d636366612d3437;
  *(undefined8 *)(self + 0x936) = 0x31342d626331652d;
  *(undefined8 *)(self + 0x92e) = 0x3339366561616364;
  *(undefined8 *)(self + 0x978) = 0x3935393965313637;
  *(undefined8 *)(self + 0x970) = 0x2d393963392d6230;
  *(uint64_t *)(self + 0x97d) = (uint64_t)0x65386561393539ULL;
  *(undefined8 *)(self + 0x968) = 0x31342d393437622d;
  *(undefined8 *)(self + 0x960) = 0x3637346539356236;
  *(uint64_t *)(self + 0x9af) = (uint64_t)0x32316463336436ULL;
  *(undefined8 *)(self + 0x9aa) = 0x3364363939363964;
  *(undefined8 *)(self + 0x9a2) = 0x2d666563612d6636;
  *(undefined8 *)(self + 0x99a) = 0x64342d326163382d;
  *(undefined8 *)(self + 0x992) = 0x6137313262326137;
  *(undefined8 *)(self + 0x9dc) = 0x6639643366366166;
  *(undefined8 *)(self + 0x9d4) = 0x2d643739392d6634;
  *(undefined8 *)(self + 0x9cc) = 0x33342d663830302d;
  *(undefined8 *)(self + 0x9c4) = 0x3131326239616231;
  *(uint64_t *)(self + 0x9e1) = (uint64_t)0x36336561663964ULL;
  *(undefined8 *)(self + 0xa0e) = 0x3463356264653333;
  *(undefined8 *)(self + 0xa06) = 0x2d633630392d3434;
  *(uint64_t *)(self + 0xa13) = (uint64_t)0x66646639346335ULL;
  *(undefined8 *)(self + 0x9fe) = 0x38342d633464322d;
  *(undefined8 *)(self + 0x9f6) = 0x3266303362633933;
  *(uint64_t *)(self + 0xa45) = (uint64_t)0x39666264373039ULL;
  *(undefined8 *)(self + 0xa40) = 0x3730393561373066;
  *(undefined8 *)(self + 0xa38) = 0x2d373636612d6135;
  *(undefined8 *)(self + 0xa30) = 0x37342d323434392d;
  *(undefined8 *)(self + 0xa28) = 0x3732336431383339;
  *(uint64_t *)(self + 0xadb) = (uint64_t)0x64663832323962ULL;
  *(undefined8 *)(self + 0xad6) = 0x3239626333363361;
  *(undefined8 *)(self + 0xace) = 0x2d616134382d6638;
  *(undefined8 *)(self + 0xac6) = 0x63342d326431352d;
  *(undefined8 *)(self + 0xabe) = 0x3566623564643863;
  bzStateGame__initBanner_0039d0d4(GH_ARG(self));
  bzStateGame__initInterstitial_0039d394(GH_ARG(self));
  bzStateGame__initReward_0039d530(GH_ARG(self));
  *(undefined4 *)(self + 0xb04) = 0;
  *(undefined8 *)(self + 0xaf0) = 0xffffffffffffffff;
  *(undefined4 *)(self + 0x32c9c8) = 0;
  bzStateGame__GOrderload_003a39c8(GH_ARG(self));
  piVar7 = (int *)(self + 0x32c814);
  if (*piVar7 == -1) {
    bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x23), GH_ARG(0));
  }
  bzStateGame__lastDayLoadFile_003a3f0c(GH_ARG(self));
  if ((*piVar7 == 6) &&
     (((*(int *)(self + 0xb78) != *(int *)(self + 0xb7c) ||
       (*(int *)(self + 0xb74) != *(int *)(self + 0xb80))) ||
      (*(int *)(self + 0xb70) != *(int *)(self + 0xb84))))) {
    bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x23), GH_ARG(0));
  }
  if ((*(int *)(self + 0x32c80c) != 1) || (*piVar7 == 5)) {
    bzStateGame__GOrderSsave_003a3c6c(GH_ARG(self), GH_ARG(0x21), GH_ARG(0));
  }
  if (*(gh_long *)(lVar3 + 0x28) != local_48) {
                    
    __stack_chk_fail();
  }
  return 0;
  return 0;
}
