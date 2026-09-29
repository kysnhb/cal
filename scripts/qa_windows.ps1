param(
    [Parameter(Mandatory=$true)][string]$ExeDir,
    [ValidateSet('startup','combat','shop','nested-shop','coupon','event','menus','reward','help','help-pages','companions','result')][string]$Case='startup',
    [string]$SeedDir,
    [string]$OutDir,
    [ValidateSet('960x640','1280x720','1024x768')][string]$Viewport='960x640',
    [ValidateSet(0,1,3,6)][int]$GameSpeed=0,
    [switch]$HumanTextureProbe
)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
$cases=@{
    startup=@{Taps='200:875,600';Shots='300,600';End=750}
    combat=@{Taps='200:875,600;320:277,570;400:110,537;530:257,290;660:875,610;930:215,568,350;1320:890,410;1450:70,568,100;1560:885,555,900;2600:930,30;2770:618,254';Shots='600,720,1200,1326,1480,1900,2650,2860';End=2900}
    shop=@{Taps='200:875,600;400:582,575;700:903,183;900:582,575;1200:903,183';Shots='360,550,820,1050,1370';End=1420}
    'nested-shop'=@{Taps='200:875,600;320:277,570;400:110,537;530:257,290;700:616,610;900:717,33;1100:903,183;1300:929,33;1500:903,183';Shots='600,840,1040,1200,1420,1640';End=1700}
    coupon=@{Taps='200:875,600;400:713,575;650:600,320;800:575,485;880:470,485;960:891,542;1100:937,25;1350:713,575;1390:600,320;1600:937,25';Shots='550,780,1050,1200,1500,1700';End=1750}
    event=@{Taps='200:875,600;400:450,575;750:703,119;1000:450,575;1350:703,119';Shots='550,850,1150,1450';End=1500}
    menus=@{Taps='200:875,600;320:277,570;400:110,537;530:257,290;700:616,610;900:616,610;1100:616,610';Shots='260,360,480,600,840,1040,1240';End=1300}
    reward=@{Taps='200:875,600;400:450,575;700:480,500;900:703,119;1050:450,575;1250:480,500;1400:703,119';Shots='550,750,950,1200,1300,1500';End=1550}
    help=@{Taps='200:875,600;400:713,575;650:480,320';Shots='550,800,1100,1500';End=1600}
    companions=@{Taps='200:875,600;320:277,570;400:110,537;530:257,290;700:616,610;850:578,317;1050:778,317;1250:178,395;1450:378,395;1650:578,395;1850:778,395';Shots='800,950,1150,1350,1550,1750,1950';End=2000}
    result=@{Taps='';Shots='600,7000,10000,14000,18000,19980,20100,20500';End=20700}
}
$cases['result'].Taps=$cases['combat'].Taps+';3000:215,568,2000;6000:215,568,2000;9000:215,568,2000;12000:215,568,2000;15000:215,568,2000;18000:215,568,1500;20000:938,54;20300:257,275'
$helpTaps=@('200:875,600','400:713,575','650:480,320')
$helpShots=@('800')
foreach($page in 1..15){$helpTick=850+100*$page;$helpTaps+=("{0}:925,610" -f $helpTick);$helpShots+=[string]($helpTick+50)}
$cases['help-pages']=@{Taps=($helpTaps -join ';');Shots=($helpShots -join ',');End=2450}
if(-not (Test-Path -LiteralPath "$ExeDir/AOS5.exe")){throw 'ExeDir must contain the integrated AOS5.exe and its Content/DLL files.'}
if($Case -ne 'startup' -and -not $SeedDir){$SeedDir=Join-Path $root 'tests/fixtures/tutorial'}
if($SeedDir -and -not (Test-Path -LiteralPath "$SeedDir/aos5data.bz")){throw 'Provide a dedicated QA seed with tutorial completed; do not use personal saves.'}
if(-not $OutDir){$OutDir=Join-Path $root ("build/qa/{0}-{1}" -f $Case,(Get-Date -Format 'yyyyMMdd-HHmmss-fff'))}
if(Test-Path -LiteralPath $OutDir){throw 'Output already exists. Choose a new folder to preserve previous evidence.'}
New-Item -ItemType Directory -Path $OutDir | Out-Null
$OutDir=(Resolve-Path -LiteralPath $OutDir).Path
if($SeedDir){
    Get-ChildItem -LiteralPath $SeedDir -File |
        Where-Object {$_.Extension -eq '.bz' -or $_.Name -eq 'UserDefault.bin'} |
        ForEach-Object {Copy-Item -LiteralPath $_.FullName -Destination $OutDir}
}
$spec=$cases[$Case]
$qaSpeed=if($GameSpeed -gt 0){[string]$GameSpeed}elseif($Case -eq 'result'){'6'}else{'3'}
$settings=@{
    AOS5_SAVE_DIR=$OutDir.Replace('\','/')
    AOS5_QA_BACKGROUND='1'
    AOS5_QA_HIDDEN='1'
    AOS5_QA_VIEWPORT=$Viewport
    AOS5_FAST=$qaSpeed
    AOS5_EXIT_TICK=[string]$spec.End
    AOS5_TAPS=$spec.Taps
    AOS5_SHOT_TICKS=$spec.Shots
    AOS5_TRACE_TICKS=$spec.Shots
    AOS5_CHARS=$spec.Shots
    AOS5_DUMP=''
    AOS5_HUMAN_TEXTURE_PROBE=$(if($HumanTextureProbe){'1'}else{''})
}
$previous=@{}
foreach($key in $settings.Keys){$previous[$key]=[Environment]::GetEnvironmentVariable($key);[Environment]::SetEnvironmentVariable($key,$settings[$key])}
try{
    $process=Start-Process -FilePath "$ExeDir/AOS5.exe" -WorkingDirectory $ExeDir -WindowStyle Hidden -PassThru
    $timeoutMs=if($Case -eq 'result'){300000}else{180000}
    if(-not $process.WaitForExit($timeoutMs)){$process.Kill();throw "QA process exceeded $($timeoutMs / 1000) seconds."}
    $logPath=Join-Path $OutDir 'run.log'
    Copy-Item -LiteralPath "$ExeDir/aos5_run.log" -Destination $logPath
    if($process.ExitCode -ne 0){throw "QA process failed: $($process.ExitCode). See $logPath"}
    foreach($tick in $spec.Shots.Split(',')){
        if(-not (Test-Path -LiteralPath "$OutDir/aos5_shot_$tick.png")){throw "Missing screenshot at tick $tick"}
    }
    if(Select-String -LiteralPath $logPath -Pattern 'kFile wOpenF .* -> 0' -Quiet){throw 'QA save write failed.'}
    if($Case -eq 'result'){
        $resultLog=Get-Content -LiteralPath $logPath -Raw -Encoding UTF8
        if($resultLog -notmatch '(?s)mode=14.*ST_GAME_Clear.*mode=5.*mode=12'){throw 'Expected result, close, level selection and weapon re-entry were not observed. Do not count capture success as result-flow success.'}
    }
    $result=[ordered]@{case=$Case;viewport=$Viewport;exit_code=$process.ExitCode;capture_ticks=$spec.Shots;output=$OutDir;human_texture_probe=[bool]$HumanTextureProbe;scope='scripted logical inputs, capture and save checks; screenshots require visual review; physical touch mapping and complete stage clear are separate checks'}
    $result | ConvertTo-Json | Set-Content -LiteralPath "$OutDir/result.json" -Encoding UTF8
    $result | ConvertTo-Json
}finally{
    foreach($key in $previous.Keys){[Environment]::SetEnvironmentVariable($key,$previous[$key])}
}
