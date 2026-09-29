/* 자동 생성: fixdecomp.py — 셈(rt/)이 구현할 외부 함수 원형 (전 인자 uint64 규약)
   호출 횟수 / 역변환 래퍼 존재 여부를 주석으로 단다. */
#pragma once
#include "aos5_types.h"
gh_long BannerController__callCallback_004812bc(uint64_t, uint64_t);  /* 2 calls, wrapper */
gh_long BannerInterface__BannerInterface_0047fb04(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long BannerInterface__hideBannerView_0047fb18(void);  /* 5 calls, wrapper */
gh_long BannerInterface__load_0047fb10(uint64_t, uint64_t);  /* 3 calls, wrapper */
gh_long BannerInterface__onPause_0047fb24(void);  /* 1 calls, wrapper */
gh_long BannerInterface__onResume_0047fb28(void);  /* 1 calls, wrapper */
gh_long BannerInterface__removeBanner_0047fb14(void);  /* 1 calls, wrapper */
gh_long BannerInterface__setInterval_0047fb08(uint64_t);  /* 1 calls, wrapper */
gh_long BannerInterface__setOnFailCallback_0047fb44(uint64_t);  /* 1 calls, wrapper */
gh_long BannerInterface__setOnLoadCallback_0047fb40(uint64_t);  /* 1 calls, wrapper */
gh_long BannerInterface__showBannerView_0047fb1c(void);  /* 1 calls, wrapper */
gh_long CommonInterface__reqAdTrackingAuthorization_0047fb58(uint64_t);  /* 1 calls, wrapper */
gh_long CommonInterface__setAdvertiserTrackingEnabled_0047fb4c(uint64_t);  /* 1 calls, wrapper */
gh_long CommonInterface__setDebugMode_0047fb48(uint64_t);  /* 1 calls, wrapper */
gh_long FUN_00995494(uint64_t);  /* 1 calls, cocos/std */
gh_long FUN_009b02d4(uint64_t);  /* 1 calls, cocos/std */
gh_long FUN_009b469c(uint64_t, uint64_t, uint64_t);  /* 1 calls, cocos/std */
gh_long FUN_009b9be4(uint64_t, uint64_t);  /* 1 calls, cocos/std */
gh_long FUN_009bb5d4(uint64_t, uint64_t);  /* 1 calls, cocos/std */
gh_long FUN_009d1a48(void);  /* 1 calls, wrapper */
gh_long FUN_009d1e68(uint64_t, uint64_t);  /* 3 calls, cocos/std */
gh_long FUN_009d4eac(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 695 calls, cocos/std */
gh_long FUN_009d537c(uint64_t, uint64_t);  /* 2 calls, cocos/std */
gh_long FUN_009d5908(uint64_t, uint64_t);  /* 127 calls, cocos/std */
gh_long FUN_009d5ac8(uint64_t, uint64_t, uint64_t);  /* 123 calls, cocos/std */
gh_long FUN_009d5ec8(uint64_t, uint64_t);  /* 13 calls, cocos/std */
gh_long FUN_009d6cd4(uint64_t, uint64_t, uint64_t);  /* 54 calls, cocos/std */
gh_long FUN_009d719c(uint64_t);  /* 4 calls, cocos/std */
gh_long FUN_009d7480(uint64_t, uint64_t, uint64_t);  /* 7 calls, cocos/std */
gh_long FUN_009d7684(uint64_t, uint64_t, uint64_t, uint64_t);  /* 207 calls, cocos/std */
gh_long FUN_009d881c(uint64_t, uint64_t);  /* 69 calls, cocos/std */
gh_long FUN_009d899c(uint64_t, uint64_t);  /* 55 calls, cocos/std */
gh_long GoogleGDPRController__callCallback_00482d10(uint64_t, uint64_t);  /* 5 calls, wrapper */
gh_long InterstitialController__callCallback_0048356c(uint64_t, uint64_t);  /* 4 calls, wrapper */
gh_long InterstitialInterface__InterstitialInterface_0047fbc0(uint64_t, uint64_t);  /* 3 calls, wrapper */
gh_long InterstitialInterface__isLoaded_0047fc3c(uint64_t);  /* 2 calls, wrapper */
gh_long InterstitialInterface__load_0047fc2c(uint64_t);  /* 15 calls, wrapper */
gh_long InterstitialInterface__setOnCloseCallback_0047fc7c(uint64_t, uint64_t);  /* 3 calls, wrapper */
gh_long InterstitialInterface__setOnFailCallback_0047fc70(uint64_t, uint64_t);  /* 3 calls, wrapper */
gh_long InterstitialInterface__setOnLoadCallback_0047fc58(uint64_t, uint64_t);  /* 3 calls, wrapper */
gh_long InterstitialInterface__setOnShowCallback_0047fc64(uint64_t, uint64_t);  /* 3 calls, wrapper */
gh_long InterstitialInterface__show_0047fc34(uint64_t);  /* 2 calls, wrapper */
gh_long RewardController__callCallback_00484364(uint64_t, uint64_t);  /* 6 calls, wrapper */
gh_long RewardInterface__RewardInterface_0047fc88(uint64_t, uint64_t);  /* 7 calls, wrapper */
gh_long RewardInterface__isLoaded_0047fd04(uint64_t);  /* 6 calls, wrapper */
gh_long RewardInterface__load_0047fcf4(uint64_t);  /* 9 calls, wrapper */
gh_long RewardInterface__setOnCloseCallback_0047fd5c(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long RewardInterface__setOnCompleteCallback_0047fd44(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long RewardInterface__setOnFailCallback_0047fd38(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long RewardInterface__setOnLoadCallback_0047fd20(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long RewardInterface__setOnShowCallback_0047fd2c(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long RewardInterface__setOnSkipCallback_0047fd50(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long RewardInterface__show_0047fcfc(uint64_t);  /* 5 calls, wrapper */
gh_long SoundClip__SoundClip_0047e340(uint64_t);  /* 4 calls, wrapper */
gh_long SoundClip___SoundClip_0047e354(uint64_t);  /* 4 calls, wrapper */
gh_long SoundClip__loadSnd_0047e3fc(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long SoundClip__play_0047e570(uint64_t, uint64_t);  /* 259 calls, wrapper */
gh_long SoundClip__stop_0047e6d0(uint64_t);  /* 2 calls, wrapper */
gh_long __cxa_begin_catch_00991ca8(void);  /* 1 calls, cocos/std */
gh_long builtin_strncpy(uint64_t, uint64_t, uint64_t);  /* 1 calls, cocos/std */
gh_long cocos2d__Application__ClearNotificationAll_00484a5c(void);  /* 2 calls, cocos/std */
gh_long cocos2d__Application__Click_AppsFlyerEvent_00485298(uint64_t, uint64_t, uint64_t, uint64_t);  /* 1 calls, cocos/std */
gh_long cocos2d__Application__OnInterstitial_00484e24(uint64_t, uint64_t);  /* 4 calls, cocos/std */
gh_long cocos2d__Application__RequestLoadRewardAd_DailyBonus_00485ebc(void);  /* 2 calls, cocos/std */
gh_long cocos2d__Application__SkipGameClearBonus_00485dfc(void);  /* 3 calls, cocos/std */
gh_long cocos2d__Application__getInstance_00484a3c(void);  /* 37 calls, cocos/std */
gh_long cocos2d__Application__getNetStatus_004862f4(void);  /* 9 calls, cocos/std */
gh_long cocos2d__Application__getPurchaseList_00485bb0(void);  /* 2 calls, cocos/std */
gh_long cocos2d__Application__purchase_00485ae8(uint64_t, uint64_t);  /* 5 calls, cocos/std */
gh_long cocos2d__Application__setRestore_00485c70(void);  /* 1 calls, cocos/std */
gh_long cocos2d__Color4B__Color4B_0060b934(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 1 calls, cocos/std */
gh_long cocos2d__Color4F__Color4F_0060bc2c(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 943 calls, cocos/std */
gh_long cocos2d__Device__getDPI_00487800(void);  /* 6 calls, cocos/std */
gh_long cocos2d__Director__end_005e3ab0(uint64_t);  /* 1 calls, cocos/std */
gh_long cocos2d__Director__getInstance_005dff80(void);  /* 4 calls, cocos/std */
gh_long cocos2d__FileUtils__getInstance_00488d1c(void);  /* 1 calls, cocos/std */
gh_long cocos2d__Image__Image_005c10e0(uint64_t);  /* 1 calls, cocos/std */
gh_long cocos2d__Image__initWithImageFile_005c12f8(uint64_t, uint64_t);  /* 1 calls, cocos/std */
gh_long cocos2d__JniHelper__callStaticBooleanMethod___004748f8(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long cocos2d__JniHelper__callStaticVoidMethod___004745b0(uint64_t, uint64_t);  /* 3 calls, wrapper */
gh_long cocos2d__JniHelper__callStaticVoidMethod_std__string__00474c54(uint64_t, uint64_t, uint64_t);  /* 2 calls, wrapper */
gh_long cocos2d__JniHelper__callStaticVoidMethod_std__string_bool__00475dc4(uint64_t, uint64_t, uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long cocos2d__JniHelper__callStaticVoidMethod_std__string_int__004759a8(uint64_t, uint64_t, uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long cocos2d__JniHelper__callStaticVoidMethod_std__string_long__00474fbc(uint64_t, uint64_t, uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long cocos2d__JniHelper__jstring2string_0048f9b4(uint64_t);  /* 7 calls, cocos/std */
gh_long cocos2d__Label__createWithSystemFont_0055a324(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 2 calls, cocos/std */
gh_long cocos2d__RandomHelper__getEngine_0060b3d4(void);  /* 1195 calls, cocos/std */
gh_long cocos2d__Rect__Rect_005c7150(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 66 calls, cocos/std */
gh_long cocos2d__Scene__Scene_0058f9c4(uint64_t);  /* 1 calls, cocos/std */
gh_long cocos2d__Scene___Scene_0058fc84(uint64_t);  /* 1 calls, cocos/std */
gh_long cocos2d__Sprite__create_005918a4(uint64_t);  /* 1 calls, cocos/std */
gh_long cocos2d__StringUtils__format_0060c028(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 9 calls, cocos/std */
gh_long cocos2d__StringUtils__toString_int__003b434c(uint64_t, uint64_t);  /* 246 calls, wrapper */
gh_long cocos2d__UserDefault__getInstance_00600b04(void);  /* 26 calls, cocos/std */
gh_long cocos2d__UserDefault__getIntegerForKey_005fb92c(uint64_t, uint64_t);  /* 7 calls, cocos/std */
gh_long cocos2d__log_005d21e4(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 126 calls, cocos/std */
gh_long cocos2d__ui__Button__create_004e7df4(uint64_t, uint64_t, uint64_t, uint64_t);  /* 2 calls, cocos/std */
gh_long cocos2d__ui__Button__setTitleFontSize_004e9758(uint64_t, uint64_t);  /* 2 calls, cocos/std */
gh_long cocos2d__ui__Button__setTitleText_004e94b4(uint64_t, uint64_t);  /* 2 calls, cocos/std */
gh_long gh_android_log_print(uint64_t, uint64_t, uint64_t);  /* 14 calls, cocos/std */
gh_long kDate__getIntervalSince1970_0047991c(void);  /* 8 calls, wrapper */
gh_long kDate__getMonthEnd_004798b4(uint64_t);  /* 2 calls, wrapper */
gh_long kDate__getSingleton_004797f8(void);  /* 12 calls, wrapper */
gh_long kDraw__drawRect_00479ae8(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 65 calls, wrapper */
gh_long kFile__close_00479f64(uint64_t);  /* 29 calls, wrapper */
gh_long kFile__getSize_0047a88c(uint64_t);  /* 10 calls, wrapper */
gh_long kFile__kFile_00479ebc(uint64_t);  /* 31 calls, wrapper */
gh_long kFile__rOpenF_0047a2a0(uint64_t, uint64_t, uint64_t);  /* 11 calls, wrapper */
gh_long kFile__rOpenR_0047a018(uint64_t, uint64_t, uint64_t);  /* 9 calls, wrapper */
gh_long kFile__readInt_0047aacc(uint64_t);  /* 17 calls, wrapper */
gh_long kFile__readString_0047aae8(uint64_t);  /* 1 calls, wrapper */
gh_long kFile__read_0047a894(uint64_t, uint64_t, uint64_t);  /* 8 calls, wrapper */
gh_long kFile__wOpenF_0047a5e8(uint64_t, uint64_t, uint64_t);  /* 11 calls, wrapper */
gh_long kFile__writeInt_0047aa34(uint64_t, uint64_t);  /* 18 calls, wrapper */
gh_long kFile__writeString_0047ab60(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long kFont__drawDString2_0047b830(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 51 calls, wrapper */
gh_long kFont__drawDString_0047b574(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 146 calls, wrapper */
gh_long kFont__drawString_0047ae54(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 159 calls, wrapper */
gh_long kPopup__create_0047c134(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long kPopup__setCallback_0047c26c(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long kScene__clearResData_0047e310(uint64_t, uint64_t);  /* 9 calls, wrapper */
gh_long kScene__clearSprite_0047daa8(uint64_t, uint64_t, uint64_t);  /* 4 calls, wrapper */
gh_long kScene__getSysInfo_0047e070(uint64_t, uint64_t, uint64_t);  /* 6 calls, wrapper */
gh_long kScene__httpPost_0047e198(uint64_t, uint64_t, uint64_t, uint64_t);  /* 24 calls, wrapper */
gh_long kScene__makeDraw_0047d650(uint64_t);  /* 1 calls, wrapper */
gh_long kScene__makeFont_0047d5c4(uint64_t, uint64_t, uint64_t);  /* 5 calls, wrapper */
gh_long kScene__makeSprite_0047d208(uint64_t, uint64_t, uint64_t, uint64_t);  /* 53 calls, wrapper */
gh_long kSprite__drawPos_0047ee7c(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 21 calls, wrapper */
gh_long kSprite__drawPos_0047f378(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 92 calls, wrapper */
gh_long kSprite__drawPos_0047f88c(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long std___Function_handler_void_cocos2d__Ref___std___Bind_std___Mem_fn_void_bzStateGame_____cocos2d__Ref____bzStateGame__std___Placeholder_1_______M_invoke(uint64_t, uint64_t);  /* 0 calls, wrapper */
gh_long std___Rb_tree_int_std__pair_int_const_kSprite___std___Select1st_std__pair_int_const_kSprite____std__less_int__std__allocator_std__pair_int_const_kSprite_______M_erase_00477a84(uint64_t, uint64_t);  /* 1 calls, wrapper */
gh_long std__terminate_00992aac(void);  /* 1 calls, cocos/std */
gh_long std__uniform_int_distribution_int___operator___00477ad0(uint64_t, uint64_t, uint64_t);  /* 1195 calls, wrapper */
