/* Browser regression for the requested keyboard layout and paused guide. */
const {chromium}=require('playwright');
const assert=require('node:assert/strict');
const fs=require('node:fs');
const path=require('node:path');
const out=path.resolve(process.argv[3]||'build/controls-qa');fs.mkdirSync(out,{recursive:true});
(async()=>{
 const browser=await chromium.launch({executablePath:process.env.CHROME_EXECUTABLE,headless:true,args:['--enable-webgl','--use-angle=swiftshader','--enable-unsafe-swiftshader']});
 try{
  const page=await browser.newPage({viewport:{width:1200,height:832}}),errors=[],report={};
  page.on('pageerror',e=>errors.push(e.message));
  const state=k=>page.evaluate(k=>Module.ccall('aos5_web_state','number',['number'],[k]),k);
  const mode=n=>page.waitForFunction(n=>Module.ccall('aos5_web_state','number',['number'],[0])===n,n,{timeout:20000});
  const tap=async(x,y)=>{const r=await page.locator('#canvas').boundingBox(),p=await page.evaluate(([x,y])=>projectPoint(x,y),[x,y]);await page.mouse.click(r.x+p.x*r.width/(640*13/6),r.y+p.y*r.height/640,{delay:90});await page.waitForTimeout(300);};
  const hold=async(code,ms)=>{await page.keyboard.down(code);await page.waitForTimeout(ms);const result=await state(5);await page.keyboard.up(code);return result;};
  const idle=()=>page.waitForFunction(()=>Module.ccall('aos5_web_state','number',['number'],[5])===0,null,{timeout:8000});
  const fits=async root=>assert(await page.locator(root).evaluate(el=>{const r=el.getBoundingClientRect();return r.left>=0&&r.right<=innerWidth&&el.scrollWidth<=el.clientWidth+1;}),'Guide must fit without horizontal clipping');
  await page.goto(process.argv[2]||'http://127.0.0.1:8081/',{waitUntil:'domcontentloaded'});
  await page.waitForFunction(()=>window.aos5Ready,null,{timeout:90000});
  await page.screenshot({path:path.join(out,'desktop-start.png')});await fits('#loading');
  for(const [code,label] of Object.entries({KeyA:'왼쪽',KeyD:'오른쪽',KeyW:'점프',KeyS:'앉기',KeyK:'발차기',KeyL:'주먹',KeyO:'행동',KeyZ:'무기 변경',KeyM:'일시정지',Space:'필살기'})){
   assert((await page.locator(`#loading [data-key="${code}"]`).innerText()).includes(label));
   const tick=await state(1);await page.keyboard.down(code);assert(await page.locator(`#loading [data-key="${code}"]`).evaluate(e=>e.classList.contains('pressed')));await page.waitForTimeout(80);assert.equal(await state(1),tick);await page.keyboard.up(code);
  }
  for(const size of [{width:844,height:390},{width:390,height:844}]){await page.setViewportSize(size);await fits('#loading');await page.locator('#loading .keyboard').scrollIntoViewIfNeeded();await page.screenshot({path:path.join(out,`start-${size.width}.png`)});await page.locator('#start').scrollIntoViewIfNeeded();assert(await page.locator('#start').isVisible());}
  await page.setViewportSize({width:1200,height:832});await page.locator('#start').click();await page.waitForTimeout(2500);await tap(835,610);await page.waitForTimeout(700);
  if(await state(0)===51)await tap(480,444);
  await mode(2);await tap(280,560);await mode(15);await tap(115,510);
  if(await state(0)===9)await page.keyboard.press('Escape');
  await mode(5);await tap(260,278);await mode(12);await tap(885,610);if(await state(0)===21)await tap(692,160);await mode(11);await idle();
  let before=await state(7);await hold('KeyD',550);let after=await state(7);assert(after>before,'D must move right');report.D={before,after};await idle();
  before=await state(7);await hold('KeyA',550);after=await state(7);assert(after<before,'A must move left');report.A={before,after};await idle();
  const y=await state(3);report.W=await hold('KeyW',220);assert.notEqual(await state(3),y,'W must jump');await idle();
  await page.screenshot({path:path.join(out,'combat-before-crouch.png')});
  report.S=await hold('KeyS',200);assert.notEqual(report.S,0,'S must crouch');await page.screenshot({path:path.join(out,'combat-crouched.png')});await hold('KeyD',150);await idle();
  report.attacks={};for(const code of ['KeyK','KeyL','KeyO']){const action=await hold(code,100);const pose=await state(8);report.attacks[code]={action,pose};assert.notEqual(action,0,code+' must attack');await page.screenshot({path:path.join(out,code+'.png')});await idle();}
  assert.equal(new Set(Object.values(report.attacks).map(a=>a.pose)).size,3,'Punch, kick and contextual action must use different poses');
  const specials=await state(9);await page.keyboard.press('Space');assert.equal(await state(9),specials-1,'Space must consume exactly one special');report.special={before:specials,after:await state(9)};await idle();
  await page.keyboard.press('KeyM');await mode(13);await page.locator('#pause-guide').waitFor({state:'visible'});await page.waitForTimeout(900);await page.screenshot({path:path.join(out,'pause-menu.png')});
  await page.locator('#pause-guide').click();assert(await page.locator('#help').isVisible());assert((await page.locator('#help-close').innerText()).includes('일시정지'));await page.locator('#help-close').click();assert.equal(await state(0),13,'Closing pause help must leave combat paused');await page.keyboard.press('KeyM');await mode(11);report.pauseMenuHelp=true;
  await page.locator('#help-open').click();const tick=await state(1);await page.keyboard.down('Space');await page.waitForTimeout(400);assert.equal(await state(1),tick,'Trying Space in guide must not run combat');await page.screenshot({path:path.join(out,'desktop-help-space.png')});await page.keyboard.up('Space');
  for(const size of [{width:844,height:390},{width:390,height:844}]){await page.setViewportSize(size);await fits('#help');await page.locator('#help .keyboard').scrollIntoViewIfNeeded();await page.screenshot({path:path.join(out,`help-${size.width}.png`)});await page.locator('#help-close').scrollIntoViewIfNeeded();const r=await page.locator('#help-close').boundingBox();assert(r.y>=0&&r.y+r.height<=size.height);}
  await page.locator('#help-close').click();await page.waitForTimeout(300);assert((await state(1))>tick);report.guidePauses=true;
  report.pageErrors=errors;assert.deepEqual(errors,[]);report.passed=true;fs.writeFileSync(path.join(out,'controls.json'),JSON.stringify(report,null,2));console.log(JSON.stringify(report,null,2));
 }finally{await browser.close();}
})().catch(e=>{console.error(e);process.exit(1);});
