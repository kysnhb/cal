# 다른 PC에서 설정하고 빌드하기

이 패키지는 완성된 게임 소스·런타임 콘텐츠를 포함합니다. Axmol 엔진과 컴파일러·SDK는 각 PC에 설치합니다. `C:\a5`나 이전 작업자의 사용자 폴더가 없어도 제공한 빌드 스크립트를 사용할 수 있습니다.

## 도구 기준

| 항목 | 기존 납품 빌드에서 확인된 값 |
|---|---|
| Axmol | 2.11.5, 엔진 소스 ZIP과 로컬 엔진 파일 대조 시 수정·누락 0 |
| Windows 컴파일러 | MSVC 14.29.30133 (VS 2019), C17, x64 |
| Windows SDK | 10.0.26100.0 |
| CMake | 3.31.5 |
| Ninja | CMake 설치에 포함된 실행 파일 |
| Java | JDK 21.0.12.1+1 |
| Android NDK | r27c / 27.2.12479018 |
| Android SDK | platform 36, build-tools 35.0.0 |
| Gradle / AGP | wrapper 8.14.3 / 8.13.0 (프로젝트에 고정) |
| Android 대상 | arm64-v8a, minSdk 21, package com.kys.testapk11 |
| Python | Python 3.10 이상. 제공 무결성 검사에는 추가 패키지 없음 |

동일 버전 조합이 재현 기준입니다. 다른 도구 버전은 이관 후 별도 빌드 확인 대상입니다. Axmol 출처는 [공식 v2.11.5 릴리스](https://github.com/axmolengine/axmol/releases/tag/v2.11.5)입니다. 버전 태그의 소스를 받아 `C:\tools\axmol-2.11.5` 같은 경로에 둡니다. 원래 사용한 소스 ZIP의 SHA-256은 `425bf1b2661b4488f1d62f24d2e7b8f0f5ce2154891820ce84c05219a5c0c0ee`입니다.

Axmol의 자체 의존 라이브러리와 shader compiler는 엔진 CMake/setup 절차가 내려받습니다. 첫 설정·빌드에는 인터넷 연결과 추가 디스크 공간이 필요합니다. 이미 준비된 SDK·엔진 폴더는 재사용할 수 있습니다.

## PC별 경로

저장소 루트에서 실행합니다.

```powershell
Copy-Item -LiteralPath local.config.example.ps1 -Destination local.config.ps1
```

`local.config.ps1`의 `AX_ROOT`, `JAVA_HOME`, `ANDROID_HOME`을 실제 경로로 바꿉니다. 이 파일은 Git 제외 대상입니다. 이미 환경 변수와 PATH가 설정돼 있다면 복사하지 않아도 됩니다.

## Windows

Visual Studio C++ 데스크톱 도구와 Windows SDK를 설치합니다. **x64 Native Tools Command Prompt**에서 PowerShell을 열거나 x64 Visual Studio Developer PowerShell을 사용합니다. `cl.exe`, `rc.exe`, `cmake.exe`, `ninja.exe`가 검색되어야 합니다.

```powershell
python scripts/verify_package.py
./scripts/build_windows.ps1
./scripts/test_shop.ps1
./scripts/test_ads.ps1
./scripts/test_ui_text.ps1
python scripts/test_stickman_contract.py
python scripts/test_font_asset.py
```

출력: `build/windows/bin/AOS5/AOS5.exe`. 실행할 때 해당 폴더를 작업 디렉터리로 사용하고, 함께 생성된 Content·DLL·shader를 유지합니다. 고딕 콘텐츠 경로는 스크립트가 명시적으로 넘깁니다. 기본 CMake 명령만 직접 실행하면 원래 `Content` 기본값을 찾으므로 이 패키지의 스크립트를 사용하거나 `-DAOS5_CONTENT_DIR=<저장소>/AOS5/Content_gothic`을 지정합니다.

```powershell
./scripts/build_windows.ps1 -BuildDir C:/work/aos5-build -Jobs 6
```

납품 Windows ZIP은 호환 VC14 런타임을 함께 검수한 실행본입니다. 직접 재빌드한 실행본은 해당 PC의 Visual C++ x64 런타임 설치 상태도 영향을 받습니다.

## Android

먼저 저장소를 **한글이 없는 경로**(예: `C:\work\aos5-gothic`)에 clone/복사합니다. 현재 바탕화면 정리 폴더는 한글 이름이므로 Android Gradle의 경로 검사를 통과하지 않습니다. 경로 검사를 강제로 해제하는 대신 영문 경로를 사용합니다.

Android SDK Manager에서 platform 36, build-tools 35.0.0, NDK 27.2.12479018, CMake 3.31.5를 준비하고 SDK 라이선스에 동의합니다. JDK 21과 SDK 경로를 위 설정 파일에 지정합니다.

```powershell
./scripts/build_android.ps1
```

출력: `AOS5/proj.android/app/build/outputs/apk/debug/AOS5-debug.apk`.
Windows 개발자 컴파일러 셸은 Android 빌드에는 필요하지 않습니다. Gradle이 NDK를 사용합니다. 새 PC는 자신의 디버그 키를 생성하므로 기존 설치 APK와 서명이 다를 수 있습니다. 저장 데이터를 보존해야 하는 기기에서는 기존 앱을 임의로 삭제하지 말고, 서명 또는 테스트용 패키지명 정책을 먼저 맞춥니다.

## 수정 후 확인

- PNG는 `docs/verification/content_manifest.json`의 캔버스 크기·8비트 LA/RGBA 형식을 유지합니다. 원작 캐릭터 마스크 131개는 원본 바이트를 보존하고, 의상 수정은 [현재 원화와 등록값](art/stickman_redesign_20260929/README.md)을 사용합니다. 파일명에 대괄호가 많으므로 PowerShell에서는 `-LiteralPath`를 사용합니다.
- `aos5core`의 원본 논리 크기·이미지 데이터·재배치 정보를 지우지 않습니다.
- 상점 관련 코드 수정 후 `scripts/test_shop.ps1`을 실행합니다.
- 캐릭터 부품·자세 매핑을 수정하면 `test_stickman_contract.py`, 글꼴을 수정하면 `test_font_asset.py`로 연결 파일과 글자 범위를 확인합니다. `test_human_contract.py`는 현재 스틱 골격 검사를 호출하는 이전 이름의 호환 진입점입니다. 이 검사들은 실제 화면의 텍스처·가독성 검토를 대신하지 않습니다.
- `verify_package.py`는 현재 납품 빌드의 스냅샷 대조입니다. 수정 후 해시 차이는 검토 대상이며 자동으로 기준값을 다시 쓰지 않습니다. 의도적으로 수정한 소스에서 경로·형식만 검사하려면 `--structure-only`를 사용합니다.
- 최종 실행 확인: 첫 실행 도움말 → 모드 → 스테이지 → 무기 → 전투, 상점·쿠폰·이벤트 진입·닫기·재진입, 저장 후 재실행.

## 반복 화면 검사

검수 우선 기준은 모바일 화면과 터치입니다. Windows는 개발용 보조 검사이며 새 저장 폴더에서 시작하고, 메뉴·전투 검사에는 제공된 테스트용 `tests/fixtures/tutorial`을 복사합니다. 일반 게임 저장자료를 덮지 않습니다. Windows 자동 검사는 `AOS5_QA_HIDDEN`과 `AOS5_QA_BACKGROUND`를 함께 설정해 숨겨진 창에서 캡처합니다. 일반 게임 실행에는 이 환경변수를 설정하지 않습니다.

```powershell
./scripts/qa_windows.ps1 -ExeDir C:/work/aos5-build/bin/AOS5 -Case combat
./scripts/qa_windows.ps1 -ExeDir C:/work/aos5-build/bin/AOS5 -Case shop -Viewport 1280x720
```

`startup`, `combat`, `shop`, `coupon`, `event`, `menus`, `reward`, `help`, `help-pages`, `companions`를 선택할 수 있습니다. `menus`는 무기·아이템·로봇의 네 페이지를 순서대로 확인하며, `help-pages`는 도움말 0~15를 순회합니다. `companions`는 아이템 2/4의 동료 여섯 칸을 선택하여 설명을 확인합니다. 잠금 상태에서 동료 구매·장착까지 검증한 것은 아닙니다. `-Viewport 1024x768`도 지원합니다. 캡처와 종료 확인 후 스크린샷을 직접 검토해야 합니다. 자동 입력은 게임 논리 좌표를 사용하므로 물리 터치 좌표 변환 검사를 대신하지 않습니다. `combat`은 전투 중 검증이며 전체 단계 클리어를 보장하지 않습니다. `reward`는 광고 미지원 환경에서 보상창이 닫히고 재진입되는 흐름을 확인하며, 광고 성공이나 보상 지급 검사가 아닙니다.

설치된 디버그 APK는 별도 `files/qa/<검사ID>` 경로를 사용합니다. 기기 번호를 명시하여 실행합니다.

```powershell
python scripts/qa_android.py --serial emulator-5554 --case combat --adb C:/tools/Android/platform-tools/adb.exe
```

이 명령은 지정 기기의 이 게임을 재시작하여 검사합니다. 개인 세이브는 복사하거나 초기화하지 않으며, 기존 검사 자료도 고유 폴더에 보존합니다. 실제 휴대전화의 사용성·성능과 클리어 후 재진입은 별도 확인 대상입니다.

`nested-shop`은 무기 2/4 화면의 골드·보석 '+'로 여는 상점과 닫기·재진입을 검사합니다. 메인 화면의 `shop`과 다른 진입 경로이므로 둘 다 확인합니다. 해당 시나리오에서는 유료 상품을 선택하지 않습니다.

`result` 시나리오는 첫 전투와 부활 이후 구간 이동을 반복하고 결과와 X 복귀·재선택을 캡처합니다. 진단 속도는 프레임당6틱이며 결과를 충분히 기다린 뒤 X를 누릅니다. 결과창 진입 → X → 레벨 선택 → 무기 재진입이 로그에 없으면 검사 실패로 처리합니다. 성공 클리어 검사가 아닙니다. 게임 상태나 전투 난수에 따라 해당 시점에 결과가 나오지 않으면 실패한 캡처·로그를 보존하고 원인을 확인해야 합니다. 자동 입력 도중 직접 조작하면 검증 경로가 달라질 수 있으므로 평소 플레이와 검사 실행을 구분합니다.

일반 사망의 `mode20` 이어하기 창은 스테이지 결과 `mode14`와 다른 경로입니다. 이때는 논리 좌표 `(433,418)`의 거절 X로 팝업을 닫고, 별도 탭으로 GAME OVER를 닫습니다. `mode20 → 광고 미지원 종료 콜백 → mode5 → mode12` 복귀와 팝업 전후 캡처를 별도로 확인합니다. 기존 `result`의 mode14 전용 조건을 만족한 것으로 바꾸지 않습니다. 최종 검수에서 사용한 추가 탭과 원래 실패 로그는 납품 `검증자료`에 구분 보존했습니다.
