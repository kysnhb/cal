$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
if(-not (Get-Command cl.exe -ErrorAction SilentlyContinue)){throw 'Use x64 Visual Studio Developer PowerShell.'}
$out=Join-Path $root 'build/tests/ui-text'
New-Item -ItemType Directory -Path $out -Force | Out-Null
Push-Location -LiteralPath $out
try {
    & cl.exe /nologo /std:c++17 /utf-8 /EHsc /MD /W3 /D_CRT_SECURE_NO_WARNINGS "/I$root/recomp/rt" "$root/tests/ui_text_policy_test.cpp" /Fe:ui_text_policy_test.exe
    if($LASTEXITCODE -ne 0){throw 'UI policy diagnostic compilation failed.'}
    & ./ui_text_policy_test.exe "$root/AOS5/Content_gothic/aos5core/ui_layout.tsv"
    if($LASTEXITCODE -ne 0){throw 'UI policy diagnostic failed.'}
} finally { Pop-Location }
