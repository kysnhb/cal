$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
if(-not (Get-Command cl.exe -ErrorAction SilentlyContinue)){throw 'Use x64 Visual Studio Developer PowerShell.'}
$out=Join-Path $root 'build/tests/ads'
New-Item -ItemType Directory -Path $out -Force | Out-Null
Push-Location -LiteralPath $out
try {
    # Compile the exact clear-return request from production, without linking
    # or running the game. Refuse a changed fixture boundary.
    $lines=Get-Content -LiteralPath "$root/recomp/gen/bzStateGame/bzStateGame__handleEvent.c" -Encoding UTF8
    $sites=@(for($n=1;$n -lt $lines.Count;$n++) {
        if($lines[$n] -eq '        *(undefined8 *)(self + 0xba4) = 0x100000001;' -and $lines[$n-1] -match 'self\[0x32aad4\]') {$n}
    })
    if($sites.Count -ne 1){throw 'Clear-return fixture is missing or ambiguous.'}
    $at=$sites[0]
    if($lines[$at+5] -notmatch 'InterstitialInterface__load' -or $lines[$at+6].Trim() -ne '}') {
        throw 'Clear-return fixture changed; review the production branch.'
    }
    @('#include "aos5_protos.h"', 'gh_long test_clear_return_ad_branch(uint64_t addr) {', 'undefined *self = (undefined *)(uintptr_t)addr;') + $lines[($at-1)..($at+6)] + @('return 0;', '}') |
        Set-Content -LiteralPath 'clear_return_ad_branch.c' -Encoding UTF8
    $includes=@("/I$root/recomp/include","/I$root/recomp/gen","/I$root/recomp/rt")
    $callbacks=@('InterstitialFail','InterstitialClose','onRewardFail','onRewardClose')
    $sources=@($callbacks | ForEach-Object {"$root/recomp/gen/_global/$_.c"})
    $sources+="$root/recomp/gen/bzStateGame/bzStateGame__AdMob.c"
    $sources+='clear_return_ad_branch.c'
    & cl.exe /nologo /c /std:c17 /utf-8 /MD /J /w @includes @sources
    if($LASTEXITCODE -ne 0){throw 'Ad callback compilation failed.'}
    $objects=@($callbacks | ForEach-Object {"$_.obj"})
    $objects+='bzStateGame__AdMob.obj'
    $objects+='clear_return_ad_branch.obj'
    & cl.exe /nologo /std:c++17 /utf-8 /EHsc /MD /J /W3 "/I$out" @includes "$root/tests/ad_unavailable_test.cpp" @objects /Fe:ad_unavailable_test.exe
    if($LASTEXITCODE -ne 0){throw 'Ad regression compilation failed.'}
    & ./ad_unavailable_test.exe
    if($LASTEXITCODE -ne 0){throw 'Ad regression failed.'}
} finally { Pop-Location }
