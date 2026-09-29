"""
make_art_package.py — 코덱스 그래픽 작업용 원본 리소스 패키지 생성.

출력(OUT 폴더):
  원본리소스/        원작 PNG 전부 (게임 안 경로 그대로)
  리소스목록.csv     파일별 크기·그룹·2배 납품 크기
  한눈에보기/        그룹별 번호표 시트 (투명 영역은 체커보드)
"""
import os, re, csv, shutil, sys
from PIL import Image, ImageDraw, ImageFont

SRC = r'D:/newgaems/aos5_restore/assets_orig'
OUT = sys.argv[1] if len(sys.argv) > 1 else '.'

GROUP = {
    'npc1': ('캐릭터 신체 부위 조각 (PCimg) — 프레임 데이터로 매 프레임 조립', '높음'),
    'npc2': ('캐릭터 머리 조각 (Headimg) — 부위 조립', '높음'),
    'out': ('이펙트·무기·투사체·아이템 조각 (ImF)', '중간'),
    'out2': ('추가 이펙트 (ImF 202번~)', '중간'),
    'tile': ('맵 타일·배경 오브젝트 (bimg)', '중간'),
    'bg': ('스테이지 배경 960x640', '낮음'),
    'UI': ('메뉴·팝업·버튼·HUD', '중간'),
    'Daily': ('출석 보상 화면', '낮음'),
    'loading': ('로딩 애니메이션', '낮음'),
    'Icon': ('앱 아이콘 (시즌별)', '낮음'),
    'example': ('예시', '낮음'),
    '': ('최상위 (box.png = 사각형 그리기용 100x100 흰색 등)', '낮음'),
}


def main():
    dst = os.path.join(OUT, '원본리소스')
    if os.path.exists(dst):
        shutil.rmtree(dst)
    shutil.copytree(os.path.join(SRC, 'img'), os.path.join(dst, 'img'))
    for f in os.listdir(SRC):
        if f.lower().endswith('.png'):
            shutil.copy2(os.path.join(SRC, f), dst)

    rows = []
    for dp, _dn, fns in os.walk(dst):
        for f in fns:
            if not f.lower().endswith('.png'):
                continue
            p = os.path.join(dp, f)
            rel = os.path.relpath(p, dst).replace(os.sep, '/')
            parts = rel.split('/')
            grp = '/'.join(parts[1:-1]) if parts[0] == 'img' else ''
            try:
                with Image.open(p) as im:
                    w, h = im.size
                    mode = im.mode
            except Exception:
                w = h = 0
                mode = 'ERR'
            m = re.search(r'\[(\d+)\]', f)
            rows.append(dict(path=rel, group=grp, index=int(m.group(1)) if m else -1, w=w, h=h, mode=mode))
    rows.sort(key=lambda r: (r['group'], r['index'], r['path']))

    with open(os.path.join(OUT, '리소스목록.csv'), 'w', newline='', encoding='utf-8-sig') as fo:
        wr = csv.writer(fo)
        wr.writerow(['경로', '그룹', '번호', '가로px', '세로px', '색모드', '설명', '조립 민감도', '2배 납품 가로', '2배 납품 세로'])
        for r in rows:
            desc, sens = GROUP.get(r['group'].split('/')[0], ('', ''))
            wr.writerow([r['path'], r['group'], r['index'], r['w'], r['h'], r['mode'], desc, sens, r['w'] * 2, r['h'] * 2])

    sheets = os.path.join(OUT, '한눈에보기')
    os.makedirs(sheets, exist_ok=True)
    try:
        font = ImageFont.truetype('C:/Windows/Fonts/malgun.ttf', 12)
    except Exception:
        font = ImageFont.load_default()
    bygrp = {}
    for r in rows:
        bygrp.setdefault(r['group'] or '(최상위)', []).append(r)
    cell, cols, pad, per = 128, 10, 16, 100
    count = 0
    for g, items in bygrp.items():
        for pg in range(0, len(items), per):
            chunk = items[pg:pg + per]
            nrow = (len(chunk) + cols - 1) // cols
            sheet = Image.new('RGBA', (cols * cell, nrow * (cell + pad)), (60, 60, 64, 255))
            d = ImageDraw.Draw(sheet)
            for i, r in enumerate(chunk):
                x, y = (i % cols) * cell, (i // cols) * (cell + pad)
                for cy in range(0, cell, 16):
                    for cx in range(0, cell, 16):
                        if (cx // 16 + cy // 16) % 2 == 0:
                            d.rectangle([x + cx, y + cy, x + cx + 15, y + cy + 15], fill=(84, 84, 90, 255))
                try:
                    with Image.open(os.path.join(dst, r['path'])) as im0:
                        im = im0.convert('RGBA')
                    im.thumbnail((cell - 4, cell - 4))
                    sheet.alpha_composite(im, (x + (cell - im.width) // 2, y + (cell - im.height) // 2))
                except Exception:
                    pass
                label = f"{os.path.basename(r['path'])} {r['w']}x{r['h']}"
                d.text((x + 2, y + cell), label[:24], fill=(255, 255, 255, 255), font=font)
            name = g.replace('/', '_')
            sheet.convert('RGB').save(os.path.join(sheets, f'{name}_{pg // per + 1:02d}.png'), optimize=True)
            count += 1
    print(f'files {len(rows)}, sheets {count}')


if __name__ == '__main__':
    main()
