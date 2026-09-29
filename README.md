# 잔광의 도시 / CITY OF LAST LIGHT

**웹 버전:** 기존 R15 게임을 브라우저에서 실행할 수 있도록 포팅했습니다. [웹 빌드·조작·저장·배포 안내](docs/WEB.md)를 확인하세요.

**현재 검수 빌드: 1.0.6 / R15, 2026-09-29.** `프로젝트복원_01` 인수 후 그래픽과 런타임 수정까지 포함한 공동 작업 소스입니다. APK·Windows 실행본은 저장소 밖에 별도로 제공합니다.

캐릭터는 원래 검은 스틱 실루엣·골격·동작과 모자 윤곽을 유지합니다. 의상 질감과 망토를 없애고 아군·인질은 푸른 외곽광, 적은 붉은 외곽광으로 표시합니다. 코드에서 생성한 얇은 테두리와 부드러운 잔광을 캐릭터 뒤에 배치하고 은은하게 맥동시킵니다. 모바일 HUD·무기/상점 UI 수정과 움직이는 구름·전투 효과는 유지합니다.

- [실제 화면·정상 속도 영상·질감 전후 비교](docs/art/stickman_redesign_20260929/index.html)
- [다른 PC 설정과 빌드](docs/SETUP.md)
- [인수인계와 변경 범위](docs/HANDOFF.md)
- [검증 결과와 한계](docs/verification/SILHOUETTE_QA_20260929.md)
- [GitHub 공동 작업](docs/GITHUB.md)

## 빠른 시작

```powershell
git clone https://github.com/kysnhb/cal.git C:/work/aos5-gothic
Set-Location C:/work/aos5-gothic
Copy-Item local.config.example.ps1 local.config.ps1
# SETUP.md에 따라 엔진/SDK 설치 및 이 PC의 경로 입력
python scripts/verify_package.py
./scripts/build_windows.ps1
./scripts/test_shop.ps1
./scripts/test_ads.ps1
./scripts/test_ui_text.ps1
./scripts/test_silhouette.ps1
python scripts/test_stickman_contract.py
./scripts/build_android.ps1
```

Android 빌드 경로는 짧은 영문 경로를 사용합니다. Windows 빌드는 x64 Visual Studio 개발자 PowerShell에서 실행합니다. 개인 경로·키·SDK·캐시·세이브는 공유하지 않습니다.

## 수정 위치

| 경로 | 용도 |
|---|---|
| AOS5/Content_gothic | 이미지 2,110장 포함 실행 콘텐츠 2,208개 |
| AOS5/Content_gothic/img/gothic/stickrig | 모자 원화와 이전 의상 원화 보존 |
| AOS5/Content_gothic/aos5core/stickrig.json | 모자 등록값과 이전 의상 설정 보존 |
| recomp/rt | Axmol 연결, UI, 표시·효과·캐릭터 렌더링 |
| recomp/gen | 복원된 기존 게임 로직. 일반 빌드에 그대로 사용 |
| scripts, tests | 빌드·무결성 검사·회귀 검사와 별도 QA 저장 데이터 |
| docs | 현재 검수 자료와 협업 안내 |

과거 캐릭터 후보·전체 원화 이력은 별도 아트 자료에 보존합니다. 예전 패치 ZIP을 현재 소스 위에 덮어쓰지 않습니다. `verify_package.py`는 전달 당시 해시를 검사하며, 작업 후 의도적인 해시 변경은 정상입니다. 구조만 확인하려면 `--structure-only`를 사용합니다.
