# 현재 캐릭터: R14 / 1.0.5

모자 머리와 무광 직물 의상입니다. 내장 image_gen으로 머리 및 몸의 원화를 만들었습니다. 제작 지시는 head_hat_generation.json 및 material_revision/generation_prompts.json에 보존했습니다. 사용 원화는 AOS5/Content_gothic/img/gothic/stickrig의 head.png·limb.png·torso.png입니다.

원래 스틱 골격·마스크·관절 길이·액션을 보존합니다. 68개 직선 부품의 중앙 폭은 팔/다리1.08, 몸통1.15로 제한했습니다. 50개 특수/짧은/발 마스크는 기존 외곽을 유지합니다. 원화 등록값은 aos5core/stickrig.json입니다. 같은 머리 그림 쌍도 원래 ROM 피벗은 서로 다르므로 등록 좌표를 피벗으로 중복 보정하지 마세요.

material_revision/index.html에 Windows 전후 비교와 최종 APK의 실제 Android 화면·영상이 있습니다. registered_pose_preview.png는 C++ 생성 함수로 만든 정적 자세 검토이며 실제 실행과 구분합니다. 이전 광택 재질은 현재 적용본이 아닙니다.
