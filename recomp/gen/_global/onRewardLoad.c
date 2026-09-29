/* onRewardLoad @ 0x0039c7c8 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(gh_long *)IMG(0x00d23c48))
gh_long onRewardLoad(uint64_t gh_a0)
{
  char * param_1 = (char *)(uintptr_t)gh_a0;

  char *__s2;
  char *__s2_00;
  char *__s2_01;
  char *__s2_02;
  char *__s2_03;
  char *__s2_04;
  uint uVar1;
  uint uVar2;
  gh_long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (DAT_00d23c48 != 0) {
    cocos2d__log_005d21e4(GH_ARG("onRewardLoad %s"), GH_ARG(param_1), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    lVar3 = DAT_00d23c48;
    __s2 = (char *)(DAT_00d23c48 + 0x92e);
    iVar4 = strcmp(param_1,__s2);
    iVar5 = strcmp(param_1,(char *)(lVar3 + 0x960));
    __s2_00 = (char *)(lVar3 + 0x992);
    iVar6 = strcmp(param_1,__s2_00);
    __s2_01 = (char *)(lVar3 + 0x9c4);
    iVar7 = strcmp(param_1,__s2_01);
    __s2_02 = (char *)(lVar3 + 0x9f6);
    iVar8 = strcmp(param_1,__s2_02);
    __s2_03 = (char *)(lVar3 + 0xa28);
    iVar9 = strcmp(param_1,__s2_03);
    __s2_04 = (char *)(lVar3 + 0xabe);
    iVar10 = strcmp(param_1,__s2_04);
    if (((((iVar4 == 0) && (iVar5 != 0)) && (iVar6 != 0)) && ((iVar7 != 0 && (iVar8 != 0)))) &&
       ((iVar9 != 0 && (iVar10 != 0)))) {
      *(undefined1 *)(lVar3 + 0xb94) = 1;
    }
    iVar4 = strcmp(param_1,__s2_00);
    iVar5 = strcmp(param_1,__s2_01);
    iVar6 = strcmp(param_1,__s2_02);
    iVar7 = strcmp(param_1,__s2_03);
    iVar8 = strcmp(param_1,__s2_04);
    if (((iVar4 == 0) && (iVar5 != 0)) && ((iVar6 != 0 && ((iVar7 != 0 && (iVar8 != 0)))))) {
      *(undefined1 *)(lVar3 + 0xb95) = 1;
    }
    iVar4 = strcmp(param_1,__s2);
    uVar2 = -(uint)(iVar4 != 0);
    iVar4 = strcmp(param_1,(char *)(lVar3 + 0x960));
    if (iVar4 == 0) {
      uVar2 = 1;
    }
    iVar4 = strcmp(param_1,__s2_00);
    uVar1 = 2;
    if (iVar4 != 0) {
      uVar1 = uVar2;
    }
    iVar4 = strcmp(param_1,__s2_01);
    uVar2 = 3;
    if (iVar4 != 0) {
      uVar2 = uVar1;
    }
    iVar4 = strcmp(param_1,__s2_02);
    uVar1 = 4;
    if (iVar4 != 0) {
      uVar1 = uVar2;
    }
    iVar4 = strcmp(param_1,__s2_03);
    uVar2 = 5;
    if (iVar4 != 0) {
      uVar2 = uVar1;
    }
    iVar4 = strcmp(param_1,__s2_04);
    uVar1 = 8;
    if (iVar4 != 0) {
      uVar1 = uVar2;
    }
    if (((uVar1 | 2) != 2) && (*(char *)(lVar3 + 0xb05) != '\0')) {
      *(undefined1 *)(lVar3 + 0xb07) = 1;
    }
  }
  return 0;
  return 0;
}
