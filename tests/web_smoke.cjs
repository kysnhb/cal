/* Run with Playwright installed, CHROME_EXECUTABLE optional. Separate test profile. */
const {chromium,devices}=require('playwright');
const assert=require('node:assert/strict');
const fs=require('node:fs');
const path=require('node:path');
const url=process.argv[2]||'http://127.0.0.1:8080/AOS5.html';
const out=path.resolve(process.argv[3]||'build/web-qa');fs.mkdirSync(out,{recursive:true});
// Axmol uses a big-endian count and length-prefixed UTF-8 key/value strings.
// Reload can reorder the hash map, so compare settings rather than byte order.
function settings(bytes){const b=Buffer.from(bytes);let p=4;const result={};function str(){let length=0,shift=0,part;do{part=b[p++];length|=(part&127)<<shift;shift+=7;assert(shift<=35);}while(part&128);const s=b.subarray(p,p+length).toString('utf8');p+=length;return s;}for(let n=b.readInt32BE(0);n>0;n--){const k=str();result[k]=str();}return result;}
let activePage;
(async()=>{
 const browser=await chromium.launch({executablePath:process.env.CHROME_EXECUTABLE||undefined,headless:true,args:['--enable-webgl','--use-angle=swiftshader','--enable-unsafe-swiftshader',...(process.env.WEB_KEEP_FAILURE?['--remote-debugging-port=9231']:[])]});
 const mobile=process.env.WEB_MOBILE==='1';
 const context=await browser.newContext({...mobile?devices['Pixel 7']:{},viewport:{width:1200,height:832},deviceScaleFactor:1,hasTouch:true});
 const page=await context.newPage();activePage=page;const errors=[];const report={url,mobileEmulation:mobile};
 page.on('pageerror',e=>errors.push(String(e.stack||e)));
 const state=k=>page.evaluate(k=>Module.ccall('aos5_web_state','number',['number'],[k]),k);
 const mode=async n=>page.waitForFunction(n=>Module.ccall('aos5_web_state','number',['number'],[0])===n,n,{timeout:20000});
 const tap=async(x,y)=>{const r=await page.locator('#canvas').boundingBox();await page.mouse.click(r.x+x*r.width/960,r.y+y*r.height/640,{delay:90});await page.waitForTimeout(300);};
 await page.goto(url,{waitUntil:'domcontentloaded'});await page.waitForFunction(()=>window.aos5Ready,null,{timeout:90000});
 const initialTick=await state(1);await page.waitForTimeout(700);assert.equal(await state(1),initialTick,'Loading/start overlay must pause the game');
 await page.locator('#start').click();await page.waitForTimeout(2500);await tap(835,610);await page.waitForTimeout(700);
 if(await state(0)===51)await tap(480,444);
 await mode(2);await tap(280,560);await mode(15);await tap(115,510);
 if(await state(0)===9){await page.keyboard.press('Escape');}
 await mode(5);await tap(260,278);await mode(12);
 // The four-page weapon menu remains the original game UI.
 for(let i=0;i<3;i++)await tap(345,608);
 await page.screenshot({path:path.join(out,'desktop-weapons.png')});
 await tap(885,610);if(await state(0)===21)await tap(692,160);await mode(11);
 const before=await state(7);await page.keyboard.down('ArrowRight');await page.waitForTimeout(900);await page.keyboard.up('ArrowRight');
 const after=await state(7);assert(after>before,'Keyboard must move hero right');report.keyboardMove={before,after};
 await page.keyboard.down('KeyS');await page.waitForTimeout(500);await page.keyboard.up('KeyS');
 await page.locator('#help-open').click();const stopped=await state(1);await page.waitForTimeout(800);assert.equal(await state(1),stopped,'Help must pause combat');await page.locator('#help-close').click();await page.waitForTimeout(500);assert((await state(1))>stopped,'Closing help must resume combat');report.helpPause=true;
 await page.screenshot({path:path.join(out,'desktop-combat.png')});
 await page.setViewportSize({width:844,height:390});const r=await page.locator('#canvas').boundingBox();assert(r.y>=31,'Web toolbar must not cover HP');assert(Math.abs(r.width/r.height-1.5)<0.01,'Game must preserve 3:2 aspect ratio');
 const cdp=await context.newCDPSession(page);const pt=(id,x,y)=>({id,x:r.x+x*r.width/960,y:r.y+y*r.height/640,radiusX:4,radiusY:4,force:1});
 const right=pt(1,210,568),jump=pt(2,890,410);
 const touch=async(type,touchPoints)=>cdp.send('Input.dispatchTouchEvent',{type,touchPoints});
 const touchX=await state(7),groundY=await state(3);
 await touch('touchStart',[right]);await page.waitForTimeout(350);console.log('First touch',JSON.stringify(await page.evaluate(()=>({points:Array.from(pointers),x:Module.ccall('aos5_web_state','number',['number'],[2]),action:Module.ccall('aos5_web_state','number',['number'],[5]),rect:canvas.getBoundingClientRect().toJSON()}))));await touch('touchStart',[right,jump]);await page.waitForTimeout(220);
 const jumpY=await state(3);assert.notEqual(jumpY,groundY,'Second finger must jump while moving');
 await touch('touchEnd',[jump]);const heldX=await state(7);await page.waitForTimeout(1600);const continuedX=await state(7);console.log('Touch state',await page.evaluate(()=>({points:JSON.stringify(Array.from(pointers.entries())),x:Module.ccall('aos5_web_state','number',['number'],[2]),y:Module.ccall('aos5_web_state','number',['number'],[3]),action:Module.ccall('aos5_web_state','number',['number'],[5])})),{touchX,heldX,continuedX,jumpY});assert(continuedX>heldX,'Releasing jump must preserve movement finger after landing');
 await touch('touchEnd',[]);await page.waitForTimeout(800);assert.equal(await page.evaluate(()=>pointers.size),0);report.multiTouch={touchX,heldX,continuedX,groundY,jumpY};
 await page.screenshot({path:path.join(out,'mobile-combat.png')});
 // Simulate focus loss with a held keyboard key: no stuck walking after return.
 await page.keyboard.down('ArrowRight');await page.waitForTimeout(250);await page.evaluate(()=>window.dispatchEvent(new Event('blur')));await page.keyboard.up('ArrowRight');assert.equal(await page.evaluate(()=>keys.size),0);report.blurRelease=true;
 await page.evaluate(()=>flushSave());await page.waitForFunction(()=>!syncing);await page.waitForTimeout(500);
 const saved=await page.evaluate(()=>Object.fromEntries(['aos5stg.bz','UserDefault.bin'].map(n=>[n,Array.from(FS.readFile('/axmolPersistPath/city-last-light/'+n))])));
 assert(saved['aos5stg.bz'].length>0);assert(saved['UserDefault.bin'].some(x=>x!==0));
 await page.reload({waitUntil:'domcontentloaded'});await page.waitForFunction(()=>window.aos5Ready,null,{timeout:90000});
 const restored=await page.evaluate(()=>Object.fromEntries(['aos5stg.bz','UserDefault.bin'].map(n=>[n,Array.from(FS.readFile('/axmolPersistPath/city-last-light/'+n))])));
 assert.deepEqual(restored['aos5stg.bz'],saved['aos5stg.bz'],'Actual stage save must survive reload');assert.deepEqual(settings(restored['UserDefault.bin']),settings(saved['UserDefault.bin']),'Game settings must survive reload');report.saveReload=true;
 await page.locator('#start').click();await page.waitForTimeout(500);await tap(835,610);await mode(2);report.dailyRewardNotRepeated=true;
 report.audio=await page.evaluate(()=>Object.values(AL.contexts).map(c=>c.audioCtx.state));assert(report.audio.includes('running'));
 await page.setViewportSize({width:390,height:844});await page.waitForTimeout(300);const portrait=await page.locator('#canvas').boundingBox();assert(portrait.x>=0&&portrait.x+portrait.width<=391&&portrait.y+portrait.height<=844);assert(Math.abs(portrait.width/portrait.height-1.5)<0.01);report.portraitFits=true;await page.screenshot({path:path.join(out,'portrait-menu.png')});
 report.heapBytes=await page.evaluate(()=>HEAPU8.length);assert.deepEqual(errors,[]);report.pageErrors=errors;report.passed=true;
 fs.writeFileSync(path.join(out,'web-smoke.json'),JSON.stringify(report,null,2));console.log(JSON.stringify(report,null,2));await browser.close();
})().catch(async e=>{console.error(e);if(activePage){await activePage.screenshot({path:path.join(out,'failure.png')}).catch(()=>{});console.error(await activePage.evaluate(()=>({ready,playing,paused,failed,mode:Module.ccall('aos5_web_state','number',['number'],[0]),tick:Module.ccall('aos5_web_state','number',['number'],[1]),log:FS.readFile('/aos5_run.log',{encoding:'utf8'}).slice(-3000)})).catch(String));}if(process.env.WEB_KEEP_FAILURE)await new Promise(()=>{});process.exit(1)});
