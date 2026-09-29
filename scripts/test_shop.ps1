$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
if(Test-Path -LiteralPath "$root/local.config.ps1"){. "$root/local.config.ps1"}
if(-not (Get-Command cl.exe -ErrorAction SilentlyContinue)){throw 'Use x64 Visual Studio Developer PowerShell.'}
$out=Join-Path $root 'build/tests'
New-Item -ItemType Directory -Path $out -Force | Out-Null
Push-Location $out
try{
    & cl.exe /nologo /std:c17 /MD /J /w "/I$root/recomp/include" "/I$root/recomp/gen" "$root/tests/shop_sret_test.c" "$root/recomp/rt/rt_core.c" "$root/recomp/gen/bzStateGame/bzStateGame__getCurCode_0039fa6c.c" "$root/recomp/gen/bzStateGame/bzStateGame__convertMoneyStr_003fcd68.c" '/Fe:shop_sret_test.exe'
    if($LASTEXITCODE -ne 0){throw "Test compilation failed: $LASTEXITCODE"}
    & ./shop_sret_test.exe "$root/AOS5/Content_gothic/aos5core/image.bin" "$root/AOS5/Content_gothic/aos5core/reloc.bin"
    if($LASTEXITCODE -ne 0){throw "Shop regression failed: $LASTEXITCODE"}
}finally{Pop-Location}
