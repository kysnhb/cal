# GitHub 공동 작업

공동 작업 저장소: https://github.com/kysnhb/cal

이 폴더에는 소스·필수 게임 콘텐츠·빌드 스크립트·현재 검수 자료를 담았습니다. APK와 Windows ZIP, SDK·캐시·로컬 설정·서명키·개인 세이브는 커밋하지 않습니다. 별도 압축 파일 자체를 소스 저장소에 올리지 마세요.

```powershell
git clone https://github.com/kysnhb/cal.git C:/work/aos5-gothic
Set-Location C:/work/aos5-gothic
python scripts/verify_package.py
```

이후 [SETUP.md](SETUP.md)에 따라 PC별 도구와 `local.config.ps1`을 설정합니다. 작업 전 pull하고 담당 브랜치에서 commit·push한 뒤 PR로 합칩니다. 같은 PNG는 담당자를 나눠 충돌을 줄입니다. `.gitattributes`는 최초 전달 파일의 줄바꿈·해시를 보존합니다.

이동용 소스 ZIP에는 .git을 넣지 않습니다. ZIP을 풀어 쓸 때는 기존 원격 저장소를 clone하는 방식을 권합니다. APK 개발 서명키는 PC마다 달라질 수 있습니다. 기존 설치·세이브가 필요한 기기에서 서명이 다르다는 이유만으로 앱을 삭제하지 마세요.
