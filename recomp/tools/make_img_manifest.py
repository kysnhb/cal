"""make_img_manifest.py — 원작 이미지 원본 크기표 (Content/aos5core/img_sizes.tsv).
신규 그래픽이 N배 크기로 들어와도 엔진이 원본 크기로 맞춰 그리기 위한 기준."""
import os
from PIL import Image
SRC = r'D:/newgaems/aos5_restore/assets_orig'
OUT = r'D:/newgaems/aos5_restore/AOS5/Content/aos5core/img_sizes.tsv'
rows = []
for dp, _dn, fns in os.walk(SRC):
    for f in fns:
        if f.lower().endswith('.png'):
            p = os.path.join(dp, f)
            with Image.open(p) as im:
                rows.append((os.path.relpath(p, SRC).replace(os.sep, '/'), im.size[0], im.size[1]))
rows.sort()
with open(OUT, 'w', encoding='utf-8', newline='\n') as w:
    for r in rows:
        w.write(f'{r[0]}\t{r[1]}\t{r[2]}\n')
print(len(rows))
