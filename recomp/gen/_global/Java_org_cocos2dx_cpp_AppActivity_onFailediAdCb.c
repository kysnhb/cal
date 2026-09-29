/* Java_org_cocos2dx_cpp_AppActivity_onFailediAdCb @ 0x00482fcc — 원작 역변환, fixdecomp.py 자동 변환 */
#include "aos5_protos.h"
gh_long Java_org_cocos2dx_cpp_AppActivity_onFailediAdCb(uint64_t gh_a0, uint64_t gh_a1, uint64_t gh_a2)
{
  gh_long * param_1 = (gh_long *)(uintptr_t)gh_a0;
  undefined8 param_2 = (undefined8)gh_a1;
  undefined8 param_3 = (undefined8)gh_a2;

  char *pcVar1;
  
  gh_android_log_print(GH_ARG(3), GH_ARG("cocosAOF"), GH_ARG("Java_org_cocos2dx_cpp_AppActivity_onFailediAdCb"));
  pcVar1 = (char *)gh_vcall(GH_ARG(param_1), 0x548, GH_ARG(param_3), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  InterstitialController__callCallback_0048356c(GH_ARG("onFail"), GH_ARG(pcVar1));
                    
                    
  gh_vcall(GH_ARG(param_1), 0x550, GH_ARG(param_3), GH_ARG(pcVar1), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0), GH_ARG(0));
  return 0;
  return 0;
}
