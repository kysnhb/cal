"""Serve an exported web game locally. Bind explicitly to 0.0.0.0 for LAN QA."""
import argparse
from functools import partial
from http.server import SimpleHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path


class WebHandler(SimpleHTTPRequestHandler):
    extensions_map = {**SimpleHTTPRequestHandler.extensions_map,
                      '.wasm': 'application/wasm', '.data': 'application/octet-stream'}

    def end_headers(self):
        self.send_header('Cache-Control', 'no-cache')
        super().end_headers()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('directory', type=Path)
    parser.add_argument('--port', type=int, default=8080)
    parser.add_argument('--bind', default='127.0.0.1')
    args = parser.parse_args()
    folder = args.directory.resolve(strict=True)
    if not (folder / 'index.html').is_file() and not (folder / 'AOS5.html').is_file():
        parser.error('Expected index.html or AOS5.html in the exported build folder')
    server = ThreadingHTTPServer((args.bind, args.port), partial(WebHandler, directory=str(folder)))
    print(f'Web game: http://{args.bind}:{args.port}/', flush=True)
    server.serve_forever()
