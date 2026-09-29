"""Check original masks/animation and the registered R11 material contract.

Use --original-root C:/a5/assets_orig for independent byte comparison.
No game build, launch or asset transformation is performed.
"""
from pathlib import Path
from collections import Counter
import argparse
import hashlib
import json
import re
import struct

ROOT = Path(__file__).resolve().parents[1]
CONTENT = ROOT / 'AOS5/Content_gothic'
ANIMATION = {
    'recomp/gen/bzStateGame/bzStateGame__Pimg_rotateImage_004331e8.c': 'c61b841ad6a59f6513e8b1491f75c2e74c20a3e5eb100210ae411f15f8829b58',
    'recomp/gen/bzStateGame/bzStateGame__PHead_rotateImage_0046cbd0.c': '2de26ef1181aa203dc80c914c6ef2d0da45aa965c1ef531ddfe93f5b1d20275b',
    'recomp/gen/bzStateGame/bzStateGame__PHead_rotateImage2_0046c5d4.c': '6a85b11c7df148eae4668e217b96ee69a201dd7665cd520fd0d637083b7a0c9f',
    'AOS5/Content_gothic/data/imgdata1.txt': '7fa8a868e8b97195ca6bb2464b0a4e33fac25229361dc0a3e19994f968ee09b3',
    'AOS5/Content_gothic/data/imgdata2.txt': 'f94fe1346d4304956a0be2455bb1838345280995c885f13351df9054da29a176',
}


def sha(data):
    return hashlib.sha256(data).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original-root', type=Path)
    parser.add_argument('--report', type=Path)
    args = parser.parse_args()
    manifest = json.loads((ROOT / 'docs/art/stickman_20260929/restored_assets.json').read_text(encoding='utf-8'))
    styled = {f'img/npc1/PCimg[{i}].png' for i in [*range(1, 113), 203, 204]}
    styled |= {f'img/npc2/Headimg[{i}].png' for i in [*range(1, 11), 31, 32]}
    styled |= {f'img/out/ImF[{i}].png' for i in [345, 48, 49, 50]}
    expected = styled | {'img/npc1/PCimg[294].png'}
    assets = {row['path']: row for row in manifest['files']}
    assert len(styled) == 130 and expected == assets.keys()
    sizes = {}
    for line in (CONTENT / 'aos5core/img_sizes.tsv').read_text(encoding='utf-8').splitlines():
        columns = line.split('\t')
        if len(columns) == 3:
            sizes[columns[0]] = tuple(map(int, columns[1:]))
    formats = Counter()
    for name in sorted(expected):
        row = assets[name]
        raw = (CONTENT / name).read_bytes()
        assert raw[:8] == b'\x89PNG\r\n\x1a\n' and sha(raw) == row['sha256'], name
        dimensions = struct.unpack_from('>II', raw, 16)
        assert dimensions == tuple(row['canvas']) == sizes[name], name
        assert raw[24] == 8 and raw[25] in (4, 6), name  # Eight-bit LA/RGBA alpha
        formats['LA' if raw[25] == 4 else 'RGBA'] += 1
        if args.original_root:
            assert raw == (args.original_root / name).read_bytes(), name
    for name, digest in ANIMATION.items():
        raw = (ROOT / name).read_bytes()
        assert sha(raw) == digest, f'Animation/part transform changed: {name}'
        if args.original_root and '/data/' in name:
            assert raw == (args.original_root / 'data' / Path(name).name).read_bytes()
    engine = (ROOT / 'recomp/rt/rt_engine.cpp').read_text(encoding='utf-8')
    adapter = (ROOT / 'recomp/rt/rt_stickrig_runtime.inc').read_text(encoding='utf-8')
    art = (ROOT / 'recomp/rt/rt_stickrig_art.h').read_text(encoding='utf-8')
    lpimg = (ROOT / 'recomp/gen/bzStateGame/bzStateGame__LPimg_0041db74.c').read_text(encoding='utf-8')
    canonical = '\n'.join(line for line in lpimg.splitlines() if not any(token in line for token in
        ('aos5_human_record', 'aos5_stickrig_begin', 'aos5_stickrig_end'))) + '\n'
    assert sha(canonical.encode()) == 'e5d650826e8000721559910798a56a911957b585afb53c7a144392e25a43f671'
    assert lpimg.count('aos5_stickrig_begin(param_2, param_5, (int)(lVar36 / 7));') == 1
    assert lpimg.count('aos5_stickrig_end();') == 1
    policy = (ROOT / 'recomp/rt/rt_visual_policy.h').read_text(encoding='utf-8')
    for removed in ('g_human_', 'humanPart', 'human_masters', 'load_human_art', 'torsoPose',
                    'fit_joint', 'fit_torso', 'g_cape_', 'cape_tick', 'hero_cape.png', 'rt_human_rig.h'):
        assert removed not in engine + adapter, f'Retired runtime path: {removed}'
    assert 'fit_joint' not in policy and 'fit_torso' not in policy
    assert 'aos5_human_record' not in engine and 'class StickSprite' not in engine
    assert 'aos5_stickman::tint' not in engine and 'aos5_stickman::light' not in engine
    assert 'aos5_stickman::rgba_texture(p) ? original_mask_texture(p)' in engine
    assert 'aos5_stickman::expand_la(decoded->getData(),pixels,image.rgba.data());' in adapter
    assert 'addImage(raw,key,backend::PixelFormat::RGBA8)' in adapter
    assert 'tex->setAntiAliasTexParameters();' in engine
    assert 'if (art) stickrig_runtime::mark_head(si);' in engine
    assert 'c->values[4]==2 && c->headReplaced' in adapter
    assert 'std::memcmp(entry.rgba->getData(),image.rgba.data(),image.rgba.size())==0' in adapter
    assert 'LINEAR_MIPMAP_LINEAR' not in adapter and 'generateMipmap(' not in adapter
    assert 'sampler.minFilter=backend::SamplerFilter::LINEAR;' in adapter
    assert 'sampler.magFilter=backend::SamplerFilter::LINEAR;' in adapter
    assert 'EVENT_RENDERER_RECREATED' in adapter
    draw = engine.split('static void draw_sprite', 1)[1].split('EXT gh_long kSprite__drawPos', 1)[0]
    assert 'bake(' not in draw and 'draw_offset(art->registration' in draw
    assert '*(float *)(rec + KS_W) = tex->getPixelsWide() / si->hd;' in engine
    assert '*(float *)(rec + KS_H) = tex->getPixelsHigh() / si->hd;' in engine
    silhouette = (ROOT / 'recomp/rt/rt_silhouette.h').read_text(encoding='utf-8')
    assert 'aos5_silhouette::make(*mask,hat,head,density)' in adapter
    assert 'aos5_silhouette::team(c->actor,c->friendlyLimit,c->ai)' in adapter
    assert 'haloLayers.clear()' in engine and 'stickrig_runtime::halo(si,art,s)' in engine
    assert 'friendlyLimit=*reinterpret_cast<const int *>(game+0x32c134)' in adapter
    assert 'sample(original,(x+.5f)/density,(y+.5f)/density).a' in silhouette
    assert 'rgb[i] / maximum' not in art
    def rows(name):
        return [list(map(int, re.findall(r'-?\d+', line.split('//')[0]))) for line in
                (CONTENT / 'data' / name).read_text(encoding='utf-8').splitlines() if line.split('//')[0].strip()]
    frames, records = rows('imgdata1.txt'), rows('imgdata2.txt')
    roles = (ROOT / 'recomp/rt/rt_stickrig_roles.h').read_text(encoding='utf-8')
    entries = re.findall(r'\{(\d+), (\d+), \{([^}]+)\}, Role::(TorsoUpper|TorsoLower)\}', roles)
    assert len(entries) == 309
    for frame, record, values, role in entries:
        frame, record = int(frame), int(record)
        values = list(map(int, values.split(',')))
        assert values == records[record] and values[4] == 0
        assert frames[frame-1][0] <= record < frames[frame][0]
    assert 'values[4] != 0' in roles
    for row in manifest['retired']:
        assert not (CONTENT / row['path']).exists()
        assert sha((ROOT / row['preserved']).read_bytes()) == row['sha256']
    result = dict(status='PASS', styled_mask_count=len(styled), original_mask_count=len(expected), formats=dict(formats),
                  original_byte_comparison=bool(args.original_root), logical_sizes_match=True,
                  animation_hashes=ANIMATION, lpimg_original_logic_sha256=sha(canonical.encode()),
                  alpha='Original body alpha and geometry; retained hat silhouette; cached padded team halo',
                  human_retargeting=False, suppressed_records=0, cape_draw_calls=0,
                  head41_overlay='Suppressed only after successful base-head replacement in the same head record',
                  preserved_torso_records=len(entries), extra_character_draw_calls='one cached halo sprite per styled body/head draw',
                  bake_per_frame=False, exact_upload_dedup=True,
                  retired_assets=len(manifest['retired']), native_runtime_verified=False)
    report = json.dumps(result, indent=2)
    if args.report:
        args.report.parent.mkdir(parents=True, exist_ok=True)
        args.report.write_text(report + '\n', encoding='utf-8')
    print(report)


if __name__ == '__main__':
    main()
