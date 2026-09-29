/* bzStateGame::GetAchieveDataIdx_00471cb8 @ 0x00471cb8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d40300
#define DAT_00d40300 (*(undefined8 *)IMG(0x00d40300))
undefined4 bzStateGame__GetAchieveDataIdx_00471cb8(uint64_t gh_a0, uint64_t gh_a1)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gh_a1;

  char cVar1;
  bool bVar2;
  gh_long lVar3;
  gh_long lVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  size_t __n;
  gh_long lVar9;
  uint uVar10;
  uint64_t gh_frame64[16] = {0};   /* 원작 스택 프레임 (SP-0x68 ~ SP) */
  uint8_t *gh_fb = (uint8_t *)gh_frame64 + 0x68;
#define local_68 (*(void *(*)[2])(gh_fb - 0x68))
#define local_58 (*(gh_long *)(gh_fb - 0x58))
  
  lVar4 = tpidr_el0;
  local_58 = *(gh_long *)(lVar4 + 0x28);
  FUN_009d881c(GH_ARG(local_68), GH_ARG(0));
  lVar9 = *(gh_long *)(self + 1000);
  uVar10 = 0xffffffff;
  do {
    uVar7 = *(ulong *)((gh_long)local_68[0] + -0x18);
    __n = *(ulong *)((gh_long)*(void **)(lVar9 + 0x28) + -0x18);
    lVar3 = uVar7 - __n;
    if (uVar7 < __n || lVar3 == 0) {
      __n = uVar7;
    }
    iVar5 = memcmp(local_68[0],*(void **)(lVar9 + 0x28),__n);
    if ((iVar5 == 0) && (lVar3 < 0x80000000)) {
      iVar5 = (int)lVar3;
      if (lVar3 < -0x7fffffff) {
        iVar5 = -0x80000000;
      }
      if (iVar5 == 0) {
        FUN_009d899c(GH_ARG(param_2), GH_ARG(lVar9 + 0x20));
      }
    }
    lVar9 = FUN_009c084c(GH_ARG(lVar9));
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x13);
  iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("FirstPlay"), GH_ARG(0));
  if (iVar5 == 0) {
    uVar6 = 1;
  }
  else {
    iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("FirstPlayJumpJump"), GH_ARG(0));
    if (iVar5 == 0) {
      uVar6 = 2;
    }
    else {
      iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("FirstPlayDefense"), GH_ARG(0));
      if (iVar5 == 0) {
        uVar6 = 3;
      }
      else {
        iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("FirstPlayWeapons"), GH_ARG(0));
        if (iVar5 == 0) {
          uVar6 = 4;
        }
        else {
          iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("FirstPlayFriends"), GH_ARG(0));
          if (iVar5 == 0) {
            uVar6 = 5;
          }
          else {
            iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("FirstPlayZombie"), GH_ARG(0));
            if (iVar5 == 0) {
              uVar6 = 6;
            }
            else {
              iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("FirstLevelUp"), GH_ARG(0));
              if (iVar5 == 0) {
                uVar6 = 7;
              }
              else {
                iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("FirstPayment"), GH_ARG(0));
                if (iVar5 == 0) {
                  uVar6 = 8;
                }
                else {
                  iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level5Success"), GH_ARG(0));
                  if (iVar5 == 0) {
                    uVar6 = 9;
                  }
                  else {
                    iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level10Success"), GH_ARG(0));
                    if (iVar5 == 0) {
                      uVar6 = 10;
                    }
                    else {
                      iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level15Success"), GH_ARG(0));
                      if (iVar5 == 0) {
                        uVar6 = 0xb;
                      }
                      else {
                        iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level20Success"), GH_ARG(0));
                        if (iVar5 == 0) {
                          uVar6 = 0xc;
                        }
                        else {
                          iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level25Success"), GH_ARG(0));
                          if (iVar5 == 0) {
                            uVar6 = 0xd;
                          }
                          else {
                            iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level30Success"), GH_ARG(0));
                            if (iVar5 == 0) {
                              uVar6 = 0xe;
                            }
                            else {
                              iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level35Success"), GH_ARG(0));
                              if (iVar5 == 0) {
                                uVar6 = 0xf;
                              }
                              else {
                                iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level40Success"), GH_ARG(0));
                                if (iVar5 == 0) {
                                  uVar6 = 0x10;
                                }
                                else {
                                  iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level45Success"), GH_ARG(0));
                                  if (iVar5 == 0) {
                                    uVar6 = 0x11;
                                  }
                                  else {
                                    iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level50Success"), GH_ARG(0));
                                    if (iVar5 == 0) {
                                      uVar6 = 0x12;
                                    }
                                    else {
                                      iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level55Success"), GH_ARG(0));
                                      if (iVar5 == 0) {
                                        uVar6 = 0x13;
                                      }
                                      else {
                                        iVar5 = FUN_009d6cd4(GH_ARG(param_2), GH_ARG("Level60Success"), GH_ARG(0));
                                        uVar6 = 0x14;
                                        if (iVar5 != 0) {
                                          uVar6 = 0xffffffff;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((undefined8 *)((gh_long)local_68[0] + -0x18) != &DAT_00d40300) {
    piVar8 = (int *)((gh_long)local_68[0] + -8);
    do {
      iVar5 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 < 1) {
      operator_delete((undefined8 *)((gh_long)local_68[0] + -0x18));
    }
  }
  if (*(gh_long *)(lVar4 + 0x28) == local_58) {
    return uVar6;
  }
                    
  __stack_chk_fail();
}

