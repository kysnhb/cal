$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
if(-not (Get-Command cl.exe -ErrorAction SilentlyContinue)){throw 'Use x64 Visual Studio Developer PowerShell.'}
$out=Join-Path $root 'build/tests/silhouette'
New-Item -ItemType Directory -Path $out -Force | Out-Null
Push-Location -LiteralPath $out
try {
    & cl.exe /nologo /std:c++17 /utf-8 /EHsc /MD /W3 /D_CRT_SECURE_NO_WARNINGS "/I$root/recomp/rt" "$root/tests/silhouette_test.cpp" /Fe:silhouette_test.exe
    if($LASTEXITCODE -ne 0){throw 'Silhouette diagnostic compilation failed.'}
    & ./silhouette_test.exe
    if($LASTEXITCODE -ne 0){throw 'Silhouette diagnostic failed.'}
} finally { Pop-Location }
