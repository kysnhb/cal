"""Verify a web release against its manifest before deployment."""
import hashlib
import json
import sys
from pathlib import Path

root = Path(sys.argv[1]).resolve(strict=True)
manifest = json.loads((root / 'build-manifest.json').read_text(encoding='utf-8'))
expected = {'index.html', 'AOS5.js', 'AOS5.wasm', 'AOS5.data'}
assert set(manifest) == expected, 'Unexpected release manifest entries'
for name, info in manifest.items():
    blob = (root / name).read_bytes()
    assert len(blob) == info['bytes'], f'Size mismatch: {name}'
    assert hashlib.sha256(blob).hexdigest() == info['sha256'], f'Hash mismatch: {name}'
assert (root / 'AOS5.wasm').read_bytes()[:4] == b'\0asm', 'Invalid WebAssembly module'
print('Web export verified: HTML, JavaScript, WebAssembly, game data')
