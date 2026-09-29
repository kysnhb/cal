"""Capture repeatable debug-APK scenarios in isolated app-owned QA folders."""
from pathlib import Path
import argparse, datetime, json, os, re, shlex, shutil, subprocess, time

ROOT=Path(__file__).resolve().parents[1]
PACKAGE='com.kys.testapk11'
ACTIVITY=PACKAGE+'/com.kys.testapk1.AppActivity'
CASES={
 'startup':('200:875,600',[300,600],750),
 'combat':('200:875,600;320:277,570;400:110,537;530:257,290;660:875,610;930:215,568,350;1320:890,410;1450:70,568,100;1560:885,555,900;2600:930,30;2770:618,254',[600,720,1200,1326,1480,1900,2650,2860],2900),
 'shop':('200:875,600;400:582,575;700:903,183;900:582,575;1200:903,183',[360,550,820,1050,1370],1420),
 'nested-shop':('200:875,600;320:277,570;400:110,537;530:257,290;700:616,610;900:717,33;1100:903,183;1300:929,33;1500:903,183',[600,840,1040,1200,1420,1640],1700),
 'coupon':('200:875,600;400:713,575;650:600,320;800:575,485;880:470,485;960:891,542;1100:937,25;1350:713,575;1390:600,320;1600:937,25',[550,780,1050,1200,1500,1700],1750),
 'event':('200:875,600;400:450,575;750:703,119;1000:450,575;1350:703,119',[550,850,1150,1450],1500),
 'menus':('200:875,600;320:277,570;400:110,537;530:257,290;700:616,610;900:616,610;1100:616,610',[260,360,480,600,840,1040,1240],1300),
 'reward':('200:875,600;400:450,575;700:480,500;900:703,119;1050:450,575;1250:480,500;1400:703,119',[550,750,950,1200,1300,1500],1550),
 'help':('200:875,600;400:713,575;650:480,320',[550,800,1100,1500],1600),
 'companions':('200:875,600;320:277,570;400:110,537;530:257,290;700:616,610;850:578,317;1050:778,317;1250:178,395;1450:378,395;1650:578,395;1850:778,395',[800,950,1150,1350,1550,1750,1950],2000),
}
CASES['result']=(CASES['combat'][0]+';3000:215,568,2000;6000:215,568,2000;9000:215,568,2000;12000:215,568,2000;15000:215,568,2000;18000:215,568,1500;20000:938,54;20300:257,275',[600,7000,10000,14000,18000,19980,20100,20500],20700)
CASES['help-pages']=(
 '200:875,600;400:713,575;650:480,320;'+ ';'.join(f'{850+100*page}:925,610' for page in range(1,16)),
 [800]+[900+100*page for page in range(1,16)],2450)

def main():
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--serial',required=True,help='Explicit device, e.g. emulator-5554')
 p.add_argument('--case',choices=CASES,default='startup')
 p.add_argument('--human-texture-probe',action='store_true',help='QA-only diagnostic overlay; not a normal game screenshot')
 p.add_argument('--adb',default=shutil.which('adb') or str(Path(os.environ.get('ANDROID_HOME',''))/'platform-tools/adb.exe'))
 p.add_argument('--out',type=Path)
 p.add_argument('--seed',type=Path,default=ROOT/'tests/fixtures/tutorial')
 p.add_argument('--speed',type=int,choices=[1,3,6],help='Use 1 for normal-speed animation review; default is 3 (6 for result).')
 a=p.parse_args()
 case_id=a.case+'-'+datetime.datetime.now().strftime('%Y%m%d-%H%M%S-%f')
 out=a.out or ROOT/'build/qa'/('android-'+case_id)
 out.mkdir(parents=True,exist_ok=False)
 adb=[a.adb,'-s',a.serial]
 def run(*args,check=True):
  return subprocess.run(adb+list(args),stdout=subprocess.PIPE,stderr=subprocess.PIPE,check=check,timeout=30)
 def shell(*args,check=True):
  return run('shell',' '.join(shlex.quote(str(x)) for x in args),check=check)
 shell('run-as',PACKAGE,'id')
 remote='files/qa/'+case_id
 shell('run-as',PACKAGE,'mkdir','-p',remote)
 if a.case!='startup':
  if not (a.seed/'aos5data.bz').is_file(): raise RuntimeError('Dedicated QA fixture missing')
  stage='/data/local/tmp/aos5-'+case_id
  shell('mkdir','-p',stage)
  for f in sorted(a.seed.iterdir()):
   if f.is_file() and (f.suffix=='.bz' or f.name=='UserDefault.bin'):
    run('push',str(f),stage+'/'+f.name)
    shell('run-as',PACKAGE,'cp',stage+'/'+f.name,remote+'/'+f.name)
 taps,shots,end=CASES[a.case]
 cmd=['am','start','-S','-n',ACTIVITY,'--ez','aos5.qa','true','--es','aos5.qa.case',case_id]
 for key,value in {'AOS5_TAPS':taps,'AOS5_SHOT_TICKS':','.join(map(str,shots)),'AOS5_EXIT_TICK':str(end),'AOS5_FAST':str(a.speed or (6 if a.case=='result' else 3))}.items():
  cmd+=['--es',key,value]
 if a.human_texture_probe: cmd+=['--es','AOS5_HUMAN_TEXTURE_PROBE','1']
 launch=shell(*cmd).stdout.decode('utf-8',errors='replace')
 (out/'launch.txt').write_text(launch,encoding='utf-8')
 pid=''
 for _ in range(20):
  pid=shell('pidof',PACKAGE,check=False).stdout.decode().strip().split(' ')[0]
  if pid: break
  time.sleep(.25)
 if not pid: raise RuntimeError('Debug APK did not start')
 deadline=time.monotonic()+(300 if a.case=='result' else 180)
 log=''
 while time.monotonic()<deadline:
  log=run('logcat','-d','--pid='+pid,'-v','threadtime').stdout.decode('utf-8',errors='replace')
  if 'exit at tick '+str(end)+' (AOS5_EXIT_TICK)' in log: break
  if not shell('pidof',PACKAGE,check=False).stdout.strip(): break
  time.sleep(1)
 (out/'run.log').write_text(log,encoding='utf-8')
 if 'exit at tick '+str(end)+' (AOS5_EXIT_TICK)' not in log:
  raise RuntimeError('QA did not reach the expected exit tick; inspect run.log')
 for tick in shots:
  name='aos5_shot_'+str(tick)+'.png'
  data=run('exec-out','run-as',PACKAGE,'cat',remote+'/'+name).stdout
  if not data.startswith(b'\x89PNG\r\n\x1a\n'): raise RuntimeError('Missing PNG '+name)
  (out/name).write_bytes(data)
 if a.case=='result' and not re.search(r'mode=14.*ST_GAME_Clear.*mode=5.*mode=12',log,re.S):
  raise RuntimeError('Expected result, close, level selection and weapon re-entry were not observed; capture success is not result-flow success.')
 result={'case':a.case,'serial':a.serial,'pid':pid,'qa_directory':remote,'capture_ticks':shots,'exit_tick':end,'expected_exit_seen':True,'human_texture_probe':a.human_texture_probe,'scope':'scripted logical inputs and capture checks; visual review and full-stage clear are separate checks'}
 (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
 print(json.dumps(result))

if __name__=='__main__': main()
