# R15 / 1.0.6 검은 실루엣과 진영별 외곽광

현재 표시는 원본 몸체 마스크 + 기존 모자 윤곽 + 코드로 생성한 외곽광입니다. 이미지 원화를 새로 생성하거나 원본 마스크를 덮어쓰지 않았습니다. 원래 골격·관절 길이·피벗·액션·공격 판정을 유지합니다.

- `recomp/rt/rt_silhouette.h`: 원본 알파의 4배 샘플링, 검은 몸체용 마스크, 거리 기반 테두리·잔광 생성 및 진영 판정.
- `recomp/rt/rt_stickrig_runtime.inc`: 텍스처 캐시, 푸른/붉은 색, 잔광 맥동, 캐릭터별 외곽광 그리기 순서.
- `AOS5/Content_gothic/aos5core/stickrig.json`: 기존 모자 등록값. 몸통/팔다리 원화 항목은 이전 작업 보존용이며 현재 실루엣에는 사용하지 않습니다.
- `silhouette_revision/index.html`: 실제 1.0.6 APK 영상/캡처와 이전 의상 비교.

기존 원화와 image_gen 제작 지시는 이전 비교 폴더에 남겨두었습니다. 원작 마스크는 수정하지 말고 `test_stickman_contract.py`, `test_silhouette.ps1`을 함께 실행하세요.
