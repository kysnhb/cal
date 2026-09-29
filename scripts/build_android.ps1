param([ValidateSet('assembleDebug','tasks')][string]$Task='assembleDebug')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
if($root -match '[^\x00-\x7F]'){throw 'Android Gradle requires an ASCII project path on Windows. Clone/copy this repository to C:/work/aos5-gothic and retry.'}
if(Test-Path -LiteralPath "$root/local.config.ps1"){. "$root/local.config.ps1"}
foreach($name in @('AX_ROOT','JAVA_HOME','ANDROID_HOME')){
    $value=[Environment]::GetEnvironmentVariable($name)
    if(-not $value -or -not (Test-Path -LiteralPath $value)){throw "Set $name in local.config.ps1."}
}
$env:PATH="$env:JAVA_HOME/bin;$env:ANDROID_HOME/cmake/3.31.5/bin;"+$env:PATH
Push-Location "$root/AOS5/proj.android"
try {
    & ./gradlew.bat $Task --no-daemon '-P__1K_ARCHS=arm64-v8a' "-Paos5Content=$root/AOS5/Content_gothic"
    if($LASTEXITCODE -ne 0){throw "Android Gradle task failed: $LASTEXITCODE"}
    if($Task -eq 'assembleDebug'){Write-Output "APK: $root/AOS5/proj.android/app/build/outputs/apk/debug/AOS5-debug.apk"}
} finally {Pop-Location}
