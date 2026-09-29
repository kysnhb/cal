param([string]$BuildDir, [int]$Jobs=6, [string]$CMake='cmake', [switch]$ConfigureOnly)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
if(Test-Path -LiteralPath "$root/local.config.ps1"){. "$root/local.config.ps1"}
if(-not $env:AX_ROOT -or -not (Test-Path -LiteralPath "$env:AX_ROOT/core/CMakeLists.txt")){throw 'Set AX_ROOT to Axmol 2.11.5 in local.config.ps1.'}
if(-not (Get-Command cl.exe -ErrorAction SilentlyContinue)){throw 'Run from an x64 Visual Studio Developer PowerShell / Native Tools terminal.'}
if(-not $BuildDir){$BuildDir=Join-Path $root 'build/windows'}
$cmakeArgs=@('-S',"$root/AOS5",'-B',$BuildDir,'-G','Ninja','-DCMAKE_BUILD_TYPE=RelWithDebInfo',"-DAOS5_CONTENT_DIR=$root/AOS5/Content_gothic",'-DAX_ENABLE_MEDIA=OFF','-DAX_ENABLE_MSEDGE_WEBVIEW2=OFF','-DAX_ENABLE_EXT_IMGUI=OFF','-DAX_ENABLE_EXT_FAIRYGUI=OFF')
& $CMake @cmakeArgs
if($LASTEXITCODE -ne 0){throw "CMake configure failed: $LASTEXITCODE"}
if(-not $ConfigureOnly){
    & $CMake --build $BuildDir --parallel $Jobs
    if($LASTEXITCODE -ne 0){throw "Windows build failed: $LASTEXITCODE"}
    Write-Output "Executable: $BuildDir/bin/AOS5/AOS5.exe"
}
