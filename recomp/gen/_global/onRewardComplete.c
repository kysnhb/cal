/* onRewardComplete @ 0x0039cb00 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
#undef DAT_00d23c48
#define DAT_00d23c48 (*(uint8_t * *)IMG(0x00d23c48))
#undef DAT_00a533c0
#define DAT_00a533c0 (*(undefined1 *)IMG(0x00a533c0))
#undef DAT_00a533e8
#define DAT_00a533e8 (*(undefined1 *)IMG(0x00a533e8))
#undef DAT_00a534f8
#define DAT_00a534f8 (*(undefined1 *)IMG(0x00a534f8))
#undef DAT_00a53514
#define DAT_00a53514 (*(undefined1 *)IMG(0x00a53514))
gh_long onRewardComplete(uint64_t gh_a0)
{
  char * param_1 = (char *)(uintptr_t)gh_a0;

  char *__s2;
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  RewardInterface *this;
  
  puVar1 = DAT_00d23c48;
  if (DAT_00d23c48 == (undefined *)0x0) {
switchD_0039cbdc_caseD_6:
    return 0;
  }
  __s2 = DAT_00d23c48 + 0x92e;
  *(undefined4 *)(DAT_00d23c48 + 0xba8) = 0;
  iVar2 = strcmp(param_1,__s2);
  iVar2 = -(uint)(iVar2 != 0);
  iVar3 = strcmp(param_1,puVar1 + 0x960);
  if (iVar3 == 0) {
    iVar2 = 1;
  }
  iVar4 = strcmp(param_1,puVar1 + 0x992);
  iVar3 = 2;
  if (iVar4 != 0) {
    iVar3 = iVar2;
  }
  iVar4 = strcmp(param_1,puVar1 + 0x9c4);
  iVar2 = 3;
  if (iVar4 != 0) {
    iVar2 = iVar3;
  }
  iVar4 = strcmp(param_1,puVar1 + 0x9f6);
  iVar3 = 4;
  if (iVar4 != 0) {
    iVar3 = iVar2;
  }
  iVar4 = strcmp(param_1,puVar1 + 0xa28);
  iVar2 = 5;
  if (iVar4 != 0) {
    iVar2 = iVar3;
  }
  iVar4 = strcmp(param_1,puVar1 + 0xabe);
  iVar3 = 8;
  if (iVar4 != 0) {
    iVar3 = iVar2;
  }
  switch(iVar3) {
  case 0:
    bzStateGame__Gold_003acc54(GH_ARG(puVar1), GH_ARG(*(int *)(&DAT_00a534f8 + (gh_long)*(int *)(puVar1 + 0x32aacc) * 4)));
    bzStateGame__Jewel_003acdd4(GH_ARG(puVar1), GH_ARG(*(int *)(&DAT_00a53514 + (gh_long)*(int *)(puVar1 + 0x32aacc) * 4)));
    puVar1[0xb94] = 0;
    *(undefined4 *)(puVar1 + 0x32aac8) = 1;
    *(undefined4 *)(puVar1 + 0x32aaa8) = 2;
    bzStateGame__AitemSsave_003ab270(GH_ARG(puVar1));
    bzStateGame__GetDailyReward_SaveTime_003fc798(GH_ARG(puVar1));
    puVar1 = DAT_00d23c48;
    DAT_00d23c48[0xb05] = 1;
    *(undefined4 *)(puVar1 + 0xaf4) = 0;
    cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    this = *(RewardInterface **)(puVar1 + 0x828);
    break;
  case 1:
    cocos2d__log_005d21e4(GH_ARG("-TEST- GetGameResultDouble"), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    cocos2d__log_005d21e4(GH_ARG("GetGameResultDouble Gold == %d"), GH_ARG((ulong)*(uint *)(puVar1 + 0x32aad0)), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    puVar1[0x32aad4] = 1;
    bzStateGame__Gold_003acc54(GH_ARG(puVar1), GH_ARG(*(int *)(puVar1 + 0x32aad0)));
    bzStateGame__AitemSsave_003ab270(GH_ARG(puVar1));
    return 0;
  case 2:
    iVar2 = *(int *)(&DAT_00a533e8 + (gh_long)*(int *)(puVar1 + 0x1a1c) * 4);
    bzStateGame__Gold_003acc54(GH_ARG(puVar1), GH_ARG(*(int *)(&DAT_00a533c0 + (gh_long)*(int *)(puVar1 + 0x1a1c) * 4)))
    ;
    bzStateGame__Jewel_003acdd4(GH_ARG(puVar1), GH_ARG(iVar2));
    iVar2 = *(int *)(puVar1 + 0x1a28) + 1;
    *(int *)(puVar1 + 0x1a24) = *(int *)(puVar1 + 0x1a24) + 1;
    iVar3 = 9;
    if (*(int *)(puVar1 + 0x1a28) < 0x31) {
      iVar3 = iVar2 / 5;
    }
    *(int *)(puVar1 + 0x1a28) = iVar2;
    *(int *)(puVar1 + 0x1a1c) = iVar3;
    bzStateGame__MainRewardSave_003aaff4(GH_ARG(puVar1));
    puVar1[0xb96] = 1;
    bzStateGame__AitemSsave_003ab270(GH_ARG(puVar1));
    puVar1 = DAT_00d23c48;
    DAT_00d23c48[0xb05] = 1;
    *(undefined4 *)(puVar1 + 0xaf4) = 2;
    cocos2d__log_005d21e4(GH_ARG("loadReward = %d"), GH_ARG(2), GH_ARG(0), GH_ARG(0), GH_ARG(0));
    this = *(RewardInterface **)(puVar1 + 0x838);
    break;
  case 3:
    bzStateGame__GetRewardAdFirstAidKit_0039b068(GH_ARG(puVar1));
    return 0;
  case 4:
  case 5:
    bzStateGame__GetRewardDrone_0039b160(GH_ARG(puVar1));
    return 0;
  default:
    goto switchD_0039cbdc_caseD_6;
  case 8:
    bzStateGame__GetRewardWeaponFree_0039b234(GH_ARG(puVar1));
    return 0;
  }
  RewardInterface__load_0047fcf4(GH_ARG(this));
  return 0;
  return 0;
}
