param([string]$BuildDir,[int]$Jobs=6,[string]$Emsdk=$env:EMSDK,[string]$CMake='cmake',[switch]$ConfigureOnly)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
if(Test-Path -LiteralPath "$root/local.config.ps1"){. "$root/local.config.ps1"}
if(-not $env:AX_ROOT -or -not (Test-Path -LiteralPath "$env:AX_ROOT/core/CMakeLists.txt")){throw 'Set AX_ROOT to Axmol 2.11.5.'}
if(-not $Emsdk -or -not (Test-Path -LiteralPath "$Emsdk/upstream/emscripten/emcmake.py")){throw 'Set EMSDK or pass -Emsdk with an activated Emscripten 3.1.73 SDK.'}
if(-not $BuildDir){$BuildDir=Join-Path $root 'build/web'}
$env:EMSDK=$Emsdk
$emRoot=Join-Path $Emsdk 'upstream/emscripten'
$python=Get-ChildItem -LiteralPath "$Emsdk/python" -Filter python.exe -Recurse -File | Select-Object -First 1 -ExpandProperty FullName
if(-not $python){$python='python'}
$env:PATH="$emRoot;$Emsdk/upstream/bin;"+$env:PATH
$cmakeArgs=@('-S',"$root/AOS5",'-B',$BuildDir,'-G','Ninja','-DCMAKE_BUILD_TYPE=RelWithDebInfo',
    "-DAOS5_CONTENT_DIR=$root/AOS5/Content_gothic",'-DAX_WASM_THREADS=OFF','-DAX_WASM_INITIAL_MEMORY=256MB',
    '-DAX_WASM_ENABLE_DEVTOOLS=OFF','-DAX_WASM_TIMING_USE_TIMEOUT=ON',
    '-DAX_WASM_ISA_SIMD=none','-DAX_ISA_LEVEL=0','-DAX_HAVE_SSE2_INTRINSICS=OFF','-DAX_HAVE_SSE41_INTRINSICS=OFF',
    '-DAX_ENABLE_MEDIA=OFF','-DAX_ENABLE_MSEDGE_WEBVIEW2=OFF','-DAX_ENABLE_EXT_IMGUI=OFF','-DAX_ENABLE_EXT_FAIRYGUI=OFF',
    '-DCMAKE_C_FLAGS=-sMEMORY64=2 -fexceptions','-DCMAKE_CXX_FLAGS=-sMEMORY64=2 -fexceptions',
    '-DCMAKE_EXE_LINKER_FLAGS=-sMEMORY64=2 -sEMULATE_FUNCTION_POINTER_CASTS=1 -sDISABLE_EXCEPTION_CATCHING=0 -sASSERTIONS=1 -sMAXIMUM_MEMORY=1073741824')
& $python "$emRoot/emcmake.py" $CMake @cmakeArgs
if($LASTEXITCODE -ne 0){throw "Web CMake configure failed: $LASTEXITCODE"}
if(-not $ConfigureOnly){
    & $CMake --build $BuildDir --parallel $Jobs
    if($LASTEXITCODE -ne 0){throw "Web build failed: $LASTEXITCODE"}
    Write-Output "Web game: $BuildDir/bin/AOS5/AOS5.html"
}
