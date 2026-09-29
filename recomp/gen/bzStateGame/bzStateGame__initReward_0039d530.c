/* bzStateGame::initReward_0039d530 @ 0x0039d530 — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long bzStateGame__initReward_0039d530(uint64_t gh_a0)
{
  undefined * self = (undefined *)(uintptr_t)gh_a0;

  RewardInterface *pRVar1;
  gh_long lVar2;
  gh_long lVar3;
  
  pRVar1 = operator_new(8);
  RewardInterface__RewardInterface_0047fc88(GH_ARG(pRVar1), GH_ARG(self + 0x92e));
  *(RewardInterface **)(self + 0x828) = pRVar1;
  pRVar1 = operator_new(8);
  RewardInterface__RewardInterface_0047fc88(GH_ARG(pRVar1), GH_ARG(self + 0x960));
  *(RewardInterface **)(self + 0x830) = pRVar1;
  pRVar1 = operator_new(8);
  RewardInterface__RewardInterface_0047fc88(GH_ARG(pRVar1), GH_ARG(self + 0x992));
  *(RewardInterface **)(self + 0x838) = pRVar1;
  pRVar1 = operator_new(8);
  RewardInterface__RewardInterface_0047fc88(GH_ARG(pRVar1), GH_ARG(self + 0x9c4));
  *(RewardInterface **)(self + 0x840) = pRVar1;
  pRVar1 = operator_new(8);
  RewardInterface__RewardInterface_0047fc88(GH_ARG(pRVar1), GH_ARG(self + 0x9f6));
  *(RewardInterface **)(self + 0x848) = pRVar1;
  pRVar1 = operator_new(8);
  RewardInterface__RewardInterface_0047fc88(GH_ARG(pRVar1), GH_ARG(self + 0xa28));
  *(RewardInterface **)(self + 0x850) = pRVar1;
  pRVar1 = operator_new(8);
  RewardInterface__RewardInterface_0047fc88(GH_ARG(pRVar1), GH_ARG(self + 0xabe));
  *(RewardInterface **)(self + 0x868) = pRVar1;
  lVar2 = 0;
  do {
    if (((uint)lVar2 | 1) != 7) {
      lVar3 = lVar2 * 8;
      RewardInterface__setOnLoadCallback_0047fd20(GH_ARG(*(RewardInterface **)(self + lVar3 + 0x828)), GH_ARG(onRewardLoad));
      RewardInterface__setOnShowCallback_0047fd2c(GH_ARG(*(RewardInterface **)(self + lVar3 + 0x828)), GH_ARG(onRewardShow));
      RewardInterface__setOnCompleteCallback_0047fd44(GH_ARG(*(RewardInterface **)(self + lVar3 + 0x828)), GH_ARG(onRewardComplete));
      RewardInterface__setOnCloseCallback_0047fd5c(GH_ARG(*(RewardInterface **)(self + lVar3 + 0x828)), GH_ARG(onRewardClose));
      RewardInterface__setOnFailCallback_0047fd38(GH_ARG(*(RewardInterface **)(self + lVar3 + 0x828)), GH_ARG(onRewardFail));
      RewardInterface__setOnSkipCallback_0047fd50(GH_ARG(*(RewardInterface **)(self + lVar3 + 0x828)), GH_ARG(onRewardSkip));
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 9);
  return 0;
  return 0;
}
