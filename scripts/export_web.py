"""Export only files needed by a static web host, without SDKs or saved games."""
import argparse
import hashlib
import json
import shutil
import subprocess
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('build', type=Path, help='CMake build directory')
    parser.add_argument('output', type=Path, help='Empty or existing web export directory')
    parser.add_argument('--wasm-opt', type=Path, required=True)
    args = parser.parse_args()
    source = args.build.resolve() / 'bin' / 'AOS5'
    for name in ('AOS5.html', 'AOS5.js', 'AOS5.wasm', 'AOS5.data'):
        if not (source / name).is_file():
            parser.error(f'Missing web build file: {source / name}')
    out = args.output.resolve()
    if out == source or out == args.build.resolve():
        parser.error('Export directory must be separate from the build')
    out.mkdir(parents=True, exist_ok=True)
    shutil.copy2(source / 'AOS5.html', out / 'index.html')
    for name in ('AOS5.js', 'AOS5.data'):
        shutil.copy2(source / name, out / name)
    subprocess.run([str(args.wasm_opt), str(source / 'AOS5.wasm'),
                    '--enable-bulk-memory', '--enable-mutable-globals', '--enable-sign-ext',
                    '--strip-debug', '--strip-dwarf', '-o', str(out / 'AOS5.wasm')], check=True)
    # A fresh HTML page must not pair with an older JS/Wasm file from the
    # browser's cache. Unchanged game data can retain its cached hash URL.
    versions = {name: hashlib.sha256((out / name).read_bytes()).hexdigest()[:16]
                for name in ('AOS5.js', 'AOS5.wasm', 'AOS5.data')}
    html = (out / 'index.html').read_text(encoding='utf-8')
    script = '<script async type="text/javascript" src="AOS5.js"></script>'
    if html.count(script) != 1:
        raise ValueError('Expected exactly one Emscripten script entry')
    loader = '<script>Module.locateFile=function(file,prefix){const versions=' + json.dumps(versions) + \
             ';return (prefix||"")+file+(versions[file]?"?v="+versions[file]:"");};</script>\n'
    html = html.replace(script, loader + script.replace('AOS5.js"', 'AOS5.js?v=' + versions['AOS5.js'] + '"'))
    (out / 'index.html').write_text(html, encoding='utf-8', newline='\n')
    (out / '.nojekyll').write_text('', encoding='utf-8')
    manifest = {}
    for name in ('index.html', 'AOS5.js', 'AOS5.wasm', 'AOS5.data'):
        path = out / name
        manifest[name] = {'bytes': path.stat().st_size,
                          'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}
    (out / 'build-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(manifest, indent=2))


if __name__ == '__main__':
    main()
