/* Mobile landscape workflow. Rejected orientation APIs deliberately exercise fallback. */
const {chromium,devices}=require('playwright');
const assert=require('node:assert/strict');
const fs=require('node:fs');
const path=require('node:path');
const url=process.argv[2]||'http://127.0.0.1:8081/';
const out=path.resolve(process.argv[3]||'build/mobile-qa');fs.mkdirSync(out,{recursive:true});
(async()=>{
 const browser=await chromium.launch({executablePath:process.env.CHROME_EXECUTABLE,headless:true,args:['--enable-webgl','--use-angle=swiftshader','--enable-unsafe-swiftshader']});
 let page;
 try{
  const context=await browser.newContext({...devices['Pixel 7'],viewport:{width:390,height:844},deviceScaleFactor:1});
  page=await context.newPage();const errors=[],report={url,device:'Pixel 7 emulation',orientationAPIs:'Rejection fallback; physical phone rotation simulated by viewport resize'};
  page.on('pageerror',e=>errors.push(e.message));
  await page.addInitScript(()=>{
   window.orientationRequests=[];
   Element.prototype.requestFullscreen=async function(options){window.orientationRequests.push({api:'fullscreen',options,active:navigator.userActivation.isActive});throw new DOMException('Test unsupported fullscreen','NotSupportedError');};
   screen.orientation.lock=async function(value){window.orientationRequests.push({api:'orientation',value});throw new DOMException('Test unsupported orientation','NotSupportedError');};
  });
  const state=k=>page.evaluate(k=>Module.ccall('aos5_web_state','number',['number'],[k]),k);
  const mode=n=>page.waitForFunction(n=>Module.ccall('aos5_web_state','number',['number'],[0])===n,n,{timeout:20000});
  const tap=async(x,y)=>{const r=await page.locator('#canvas').boundingBox(),p=await page.evaluate(([x,y])=>projectPoint(x,y),[x,y]);await page.touchscreen.tap(r.x+p.x*r.width/(640*13/6),r.y+p.y*r.height/640);await page.waitForTimeout(350);};
  const shot=name=>page.screenshot({path:path.join(out,name+'.png')});
  const fullyVisible=async selector=>{const r=await page.locator(selector).boundingBox();const v=page.viewportSize();assert(r&&r.x>=0&&r.y>=0&&r.x+r.width<=v.width+1&&r.y+r.height<=v.height+1,selector+' must be fully visible');};
  await page.goto(url,{waitUntil:'domcontentloaded'});
  await page.locator('#launch-help').click();assert(await page.locator('#touch-help').isVisible());
  await page.waitForFunction(()=>window.aos5Ready,null,{timeout:90000});
  assert(await page.evaluate(()=>paused),'Help during loading must not prevent resources from completing');
  await page.locator('#help-close').click();
  assert(await page.locator('#loading .controls').isHidden());assert(await page.locator('#bar').isHidden());
  await fullyVisible('#start');await fullyVisible('#launch-help');await shot('mobile-start-portrait');
  await page.setViewportSize({width:844,height:390});await fullyVisible('#start');await fullyVisible('#launch-help');await shot('mobile-start-landscape');
  await page.setViewportSize({width:667,height:375});await fullyVisible('#start');await fullyVisible('#launch-help');
  await page.setViewportSize({width:390,height:844});await page.locator('#start').click();
  await page.locator('#rotate').waitFor({state:'visible'});const stopped=await state(1);await page.waitForTimeout(400);assert.equal(await state(1),stopped);await shot('mobile-rotate');
  report.startRequests=await page.evaluate(()=>orientationRequests);assert.equal(report.startRequests[0].api,'fullscreen');assert.equal(report.startRequests[0].active,true,'Fullscreen must be requested inside start user activation');assert.equal(report.startRequests[1].value,'landscape');
  await page.locator('#rotate-retry').click();assert.equal((await page.evaluate(()=>orientationRequests)).length,4);
  await page.setViewportSize({width:844,height:390});await page.locator('#rotate').waitFor({state:'hidden'});await page.waitForTimeout(2500);assert((await state(1))>stopped);
  const r=await page.locator('#canvas').boundingBox();assert(r.y<1);assert(Math.abs(r.height-844*6/13)<0.1);assert.equal(r.width,844);assert(await page.locator('#bar').isHidden());report.canvas=r;
  await tap(835,610);await page.waitForTimeout(700);if(await state(0)===51)await tap(480,444);
  await mode(2);await tap(280,560);await mode(15);await tap(115,510);if(await state(0)===9)await page.keyboard.press('Escape');
  await mode(5);await tap(260,278);await mode(12);await shot('mobile-weapons');await tap(885,610);if(await state(0)===21)await tap(692,160);await mode(11);
  await page.waitForTimeout(500);await shot('mobile-combat');
  // A held touch must be released when portrait guidance pauses combat.
  const cdp=await context.newCDPSession(page);const x0=await state(7);const move=await page.evaluate(()=>projectPoint(210,568));
  await cdp.send('Input.dispatchTouchEvent',{type:'touchStart',touchPoints:[{id:1,x:r.x+move.x*r.width/(640*13/6),y:r.y+move.y*r.height/640}]});await page.waitForTimeout(350);assert((await state(7))>x0);
  await page.setViewportSize({width:390,height:844});await page.waitForFunction(()=>paused);assert.equal(await page.evaluate(()=>pointers.size),0);const pausedTick=await state(1);await page.waitForTimeout(500);assert.equal(await state(1),pausedTick);
  await cdp.send('Input.dispatchTouchEvent',{type:'touchEnd',touchPoints:[]});await page.setViewportSize({width:844,height:390});await page.waitForFunction(()=>!paused);await page.waitForTimeout(400);assert.equal(await state(5),0,'Returning from portrait must not leave walking stuck');report.rotatePauseRelease=true;
  // Use the real on-screen pause button, with no external web toolbar.
  await tap(915,28);await mode(13);await page.locator('#pause-guide').waitFor({state:'visible'});await page.waitForTimeout(500);await fullyVisible('#pause-guide');await fullyVisible('#pause-fullscreen');await shot('mobile-pause');
  await page.locator('#pause-fullscreen').click();assert.equal((await page.evaluate(()=>orientationRequests)).length,6);
  await page.locator('#pause-guide').click();assert(await page.locator('#touch-help').isVisible());assert(await page.evaluate(()=>paused));await fullyVisible('#touch-help .touch-layout');const diagram=await page.locator('.touch-layout').boundingBox(),footer=await page.locator('.help-footer').boundingBox();assert(diagram.y+diagram.height<=footer.y,'Landscape touch diagram must not be covered by return button');await shot('mobile-touch-help');
  await page.locator('#keyboard-tab').click();assert(await page.locator('#keyboard-help').isVisible());assert((await page.locator('#help [data-key="KeyO"]').innerText()).includes('행동'));
  await page.locator('#touch-tab').click();await page.setViewportSize({width:390,height:844});await shot('mobile-help-portrait');await page.locator('#help-close').click();assert(await page.locator('#rotate').isVisible());assert(await page.evaluate(()=>paused));
  await page.setViewportSize({width:844,height:390});await page.waitForFunction(()=>!paused);assert.equal(await state(0),13,'Help and rotation must preserve native pause menu');await tap(658,256);await mode(11);report.pauseHelp=true;
  // Simulate browser chrome consuming height: do not crop either HUD edge.
  await page.setViewportSize({width:844,height:320});const short=await page.locator('#canvas').boundingBox();assert.equal(short.height,320);assert(Math.abs(short.width/short.height-13/6)<0.01);report.shortViewport=short;
  assert.deepEqual(errors,[]);report.pageErrors=errors;report.passed=true;fs.writeFileSync(path.join(out,'mobile.json'),JSON.stringify(report,null,2));console.log(JSON.stringify(report,null,2));
 }catch(e){if(page){await page.screenshot({path:path.join(out,'failure.png')}).catch(()=>{});console.error(await page.evaluate(()=>({playing,paused,failed,mode:Module.ccall('aos5_web_state','number',['number'],[0])})).catch(String));}throw e;}finally{await browser.close();}
})().catch(e=>{console.error(e);process.exit(1);});
