# Copy to local.config.ps1 (ignored by Git), then set this PC's paths.
$env:AX_ROOT = 'C:/tools/axmol-2.11.5'
$env:JAVA_HOME = 'C:/tools/jdk-21'
$env:ANDROID_HOME = "$env:LOCALAPPDATA/Android/Sdk"
# Optional when cmake/ninja are not already in PATH:
$env:PATH = "$env:ANDROID_HOME/cmake/3.31.5/bin;" + $env:PATH
# For Windows builds, open x64 Native Tools / Developer PowerShell first.
