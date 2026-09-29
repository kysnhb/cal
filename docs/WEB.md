# 웹 버전 빌드와 배포

플레이: **https://kysnhb.github.io/cal/** · [웹 0.1.1 배포 ZIP](https://github.com/kysnhb/cal/releases/tag/web-v0.1.1)

기존 R15의 C/C++ 전투 로직과 고딕 리소스를 WebAssembly + WebGL 2로 실행합니다. 별도의 웹 게임으로 다시 작성한 것이 아닙니다. Android/Windows 빌드는 기존 스크립트를 사용합니다.

## 개발 PC 준비

- Axmol **2.11.5** ([기존 설치 안내](SETUP.md))
- Emscripten SDK **3.1.73**
- CMake **3.31.5**, Ninja, Python
- Windows PowerShell, 짧은 영문 작업 경로 권장

```powershell
git clone https://github.com/emscripten-core/emsdk.git C:/tools/emsdk
C:/tools/emsdk/emsdk.bat install 3.1.73
C:/tools/emsdk/emsdk.bat activate 3.1.73
$env:AX_ROOT='C:/tools/axmol-2.11.5'
./scripts/build_web.ps1 -Emsdk C:/tools/emsdk -BuildDir C:/work/aos5-web-build
```

`cmake`와 `ninja`는 PATH에 있어야 합니다. 엔진 의존성과 shader compiler는 첫 CMake 설정에서 내려받습니다. 출력은 `C:/work/aos5-web-build/bin/AOS5/AOS5.html`입니다.

```powershell
python scripts/export_web.py C:/work/aos5-web-build dist/web --wasm-opt C:/tools/emsdk/upstream/bin/wasm-opt.exe
python scripts/serve_web.py dist/web --port 8080
```

브라우저에서 `http://127.0.0.1:8080/`을 엽니다. HTML 파일을 더블 클릭하는 `file://` 방식은 사용할 수 없습니다. 같은 Wi-Fi의 휴대폰에서 확인하려면 `--bind 0.0.0.0`으로 실행하고 PC의 LAN 주소로 접속합니다. 외부 공개에는 HTTPS 정적 호스팅을 사용합니다.

## 공유할 파일

`dist/web`의 `index.html`, `AOS5.js`, `AOS5.wasm`, `AOS5.data`, `.nojekyll`, `build-manifest.json`을 함께 배포합니다. SDK, 빌드 캐시, 개인 저장 데이터는 배포하지 않습니다. `.data`가 GitHub 단일 파일 제한보다 크므로 빌드 결과를 소스 Git에 직접 커밋하지 않습니다. 배포 ZIP/Pages artifact로 전달합니다.

## 조작과 저장

- 모바일: 가로 화면, 화면 내 터치 버튼. 여러 손가락 동시 입력 지원.
- PC: 마우스로 메뉴 선택. A 왼쪽, D 오른쪽, W 점프, S 앉기, K 발차기, L 주먹, O 상황별 행동, Space 필살기, Z 무기 변경, M 일시정지, Esc 뒤로/일시정지.
- O는 원작의 주황색 버튼입니다. 일반 전투의 별도 공격, 문 앞의 출입, 이용 가능한 장비의 탑승·사용 등 주변 대상과 장착 무기에 따라 작동합니다. 고정된 ‘큰주먹’으로 안내하지 않습니다. 원작 `handleEvent`의 해당 버튼 분기와 `GameUIImg`의 상황별 아이콘 변경을 그대로 사용합니다.
- 방향키 대체 입력: ← 왼쪽, → 오른쪽, ↑ 점프, ↓ 앉기.
- 시작 화면과 상단 ‘조작법’에 실제 배치 모양의 키보드 안내가 있습니다. 안내 화면에서 키를 누르면 해당 키가 빛나며, 게임은 멈춰 있으므로 필살기를 소모하지 않습니다.
- 일시정지 메뉴의 ‘키 설명’으로도 열 수 있습니다. 여기에서 안내를 닫으면 일시정지 상태를 유지합니다.
- 웹 메뉴에서 전체 화면과 조작법을 엽니다. 조작법/다른 탭으로 이동하면 일시 정지합니다.
- 첫 `게임 시작` 클릭에서 브라우저 오디오를 활성화합니다.
- 세이브는 현재 출처(origin)의 IndexedDB에 저장됩니다. 다른 브라우저/기기로 자동 동기화되지 않습니다. 브라우저 사이트 데이터 삭제 시 세이브도 삭제됩니다.
- 저장 접근 실패 시 화면 하단에 임시 저장 안내를 표시합니다. 게임 자체는 계속 실행할 수 있습니다.

## 웹 포팅의 핵심

- 원작 복원 객체는 8바이트 포인터를 전제로 합니다. `MEMORY64=2`로 LP64 C/C++를 컴파일한 뒤 일반 wasm32로 낮춥니다. 브라우저에 native memory64 기능을 요구하지 않습니다. ([Emscripten 설정](https://emscripten.org/docs/tools_reference/settings_reference.html#memory64))
- 직접 호출하는 COW 문자열 함수에는 정확한 Wasm 시그니처의 어댑터를 제공합니다. 기존 가상 함수 호출은 `EMULATE_FUNCTION_POINTER_CASTS`를 사용합니다.
- SDK 3.1.73의 SIMD memory64-lowering 검증 오류를 피하기 위해 웹 SIMD를 끕니다.
- pthread를 끄므로 SharedArrayBuffer와 COOP/COEP 헤더 없이 정적 호스팅에서 실행합니다.
- Pointer Events를 단일 입력 경로로 사용해 엔진의 구형 touch/mouse 경로와 중복되지 않게 합니다. 모든 터치는 기존 모바일 UI 좌표 변환을 거칩니다.
- IDBFS를 게임 시작 전에 복원하며, mmap 기반 설정은 명시적으로 `msync` 후 저장합니다.
- 웹 변경은 `__EMSCRIPTEN__` 조건 또는 `proj.wasm`에 한정합니다. 원본 캐릭터 이미지·스테이지 데이터는 바꾸지 않습니다.

## 수정 위치

검수 결과: [웹 QA 기록](verification/WEB_QA_20260929.md).

GitHub Pages는 `Deploy tested web game` 작업에서 검수된 릴리스 ZIP을 받아 해시를 확인한 후 배포합니다. 소스를 고친 뒤에는 재빌드·내보내기·검수 후 새 릴리스 ZIP을 등록하고 해당 태그로 배포 작업을 실행합니다. 웹 실행 파일을 소스 브랜치에 커밋할 필요가 없습니다.

| 파일 | 역할 |
|---|---|
| `AOS5/proj.wasm/shell.html` | 시작/로딩 화면, 모바일 화면 비율, Pointer Events, 키보드, IndexedDB |
| `AOS5/proj.wasm/main.cpp` | 브라우저 진입점과 설정 파일 동기화 |
| `recomp/rt/rt_engine.cpp` | 웹 입력과 게임 장면 연결 |
| `recomp/rt/rt_core.c`, `recomp/gen/aos5_protos.h` | 복원 ABI의 웹 호환 어댑터 |
| `scripts/build_web.ps1` | 고정 도구 설정으로 빌드 |
| `scripts/export_web.py`, `scripts/serve_web.py` | 최소 배포 파일 추출, 로컬 검수 서버 |
