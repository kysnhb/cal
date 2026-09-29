/* Wide-world and safe-area regression, using isolated mobile browser storage. */
const {chromium,devices}=require('playwright');
const assert=require('node:assert/strict'),fs=require('node:fs'),path=require('node:path');
const out=path.resolve(process.argv[3]||'build/wide-qa');fs.mkdirSync(out,{recursive:true});
(async()=>{
 const browser=await chromium.launch({executablePath:process.env.CHROME_EXECUTABLE,headless:true,args:['--enable-webgl','--use-angle=swiftshader','--enable-unsafe-swiftshader']});
 let page;
 try{
  const context=await browser.newContext({...devices['iPhone 13 Pro'],viewport:{width:852,height:393},deviceScaleFactor:1});
  page=await context.newPage();const errors=[],report={engine:'Chromium',profiles:'iPhone 15 Pro / Galaxy S25-S26 CSS sizes; simulated insets, not physical hardware'};page.on('pageerror',e=>errors.push(e.message));
  const state=k=>page.evaluate(k=>Module.ccall('aos5_web_state','number',['number'],[k]),k);
  const mode=n=>page.waitForFunction(n=>Module.ccall('aos5_web_state','number',['number'],[0])===n,n,{timeout:20000});
  const target=async(x,y)=>{const r=await page.locator('#canvas').boundingBox(),p=await page.evaluate(([x,y])=>projectPoint(x,y),[x,y]);return{x:r.x+p.x*r.width/(640*13/6),y:r.y+p.y*r.height/640};};
  const tap=async(x,y)=>{const p=await target(x,y);await page.touchscreen.tap(p.x,p.y);await page.waitForTimeout(350);};
  const shot=n=>page.screenshot({path:path.join(out,n+'.png')});
  await page.goto(process.argv[2]||'http://127.0.0.1:8081/',{waitUntil:'domcontentloaded'});await page.waitForFunction(()=>window.aos5Ready,null,{timeout:120000});
  await page.locator('#start').click();await page.waitForTimeout(2500);await tap(835,610);await page.waitForTimeout(700);if(await state(0)===51)await tap(480,444);
  await mode(2);await shot('wide-main');await tap(280,560);await mode(15);await shot('wide-play-mode');await tap(115,510);
  if(await state(0)===9){await shot('wide-tutorial');await page.keyboard.press('Escape');}
  await mode(5);await shot('wide-stages');await tap(260,278);await mode(12);
  // Every weapon page keeps its frame, captions and native hit mapping together.
  for(let i=0;i<4;i++){await shot('wide-weapons-'+i);await tap(345,608);}
  await tap(885,610);if(await state(0)===21){await shot('wide-objective');await tap(692,160);}await mode(11);
  assert.equal(await state(10),1386,'World culling/camera must actually use wider logical width');
  const cdp=await context.newCDPSession(page);
  await page.locator('#safe-area').evaluate(e=>e.style.padding='0px 59px 21px 59px');await page.evaluate(()=>syncSafeArea());await page.waitForTimeout(300);
  const bounds=await page.locator('#canvas').boundingBox();assert(Math.abs(bounds.width/bounds.height-13/6)<0.001);assert(bounds.width>850);report.iPhoneCanvas=bounds;
  const actionPoints={};for(const [name,x,y] of [['left',75,568],['right',210,568],['crouch',155,457],['kick',725,573],['punch',875,557],['action',745,450],['jump',890,410],['special',610,570],['weapon',500,580],['pause',915,28]]){
   const p=await target(x,y);assert(p.x>=59&&p.x<=852-59);assert(p.y>=0&&p.y<=393-21);actionPoints[name]=p;
  }
  report.iPhoneSafeTargets=actionPoints;await shot('iphone15pro-safe-combat');
  const specials=await state(9);
  await cdp.send('Input.dispatchTouchEvent',{type:'touchStart',touchPoints:[{id:1,x:426,y:355}]});assert.equal(await page.evaluate(()=>pointers.size),0,'Gap touch must not register an invisible control');await cdp.send('Input.dispatchTouchEvent',{type:'touchEnd',touchPoints:[]});assert.equal(await state(9),specials);
  await tap(155,457);assert.notEqual(await state(5),0,'Crouch must work after safe-area translation');await page.keyboard.down('KeyD');await page.waitForTimeout(200);await page.keyboard.up('KeyD');await page.waitForTimeout(300);
  const before={world:await state(7),camera:await state(11)};const right=await target(210,568);
  await cdp.send('Input.dispatchTouchEvent',{type:'touchStart',touchPoints:[{id:1,...right}]});await page.waitForTimeout(2600);await cdp.send('Input.dispatchTouchEvent',{type:'touchEnd',touchPoints:[]});await page.waitForTimeout(350);
  const after={world:await state(7),camera:await state(11),screen:await state(2)};assert(after.world>before.world+450);assert(after.camera>before.camera);assert(after.screen>600&&after.screen<800,'Wider camera must track near the new center');report.camera={before,after};await shot('iphone15pro-scrolling');
  await tap(915,28);await mode(13);await page.waitForTimeout(400);await shot('iphone15pro-pause');await page.locator('#pause-guide').click();await page.locator('#help-close').click();assert.equal(await state(0),13);await tap(658,256);await mode(11);
  const jump=await target(890,410),move=await target(210,568);const ground=await state(3);
  await cdp.send('Input.dispatchTouchEvent',{type:'touchStart',touchPoints:[{id:1,...move}]});await page.waitForTimeout(160);await cdp.send('Input.dispatchTouchEvent',{type:'touchStart',touchPoints:[{id:1,...move},{id:2,...jump}]});await page.waitForTimeout(220);assert.notEqual(await state(3),ground);await cdp.send('Input.dispatchTouchEvent',{type:'touchEnd',touchPoints:[{id:2,...jump}]});assert.equal(await page.evaluate(()=>pointers.size),1);await cdp.send('Input.dispatchTouchEvent',{type:'touchEnd',touchPoints:[]});report.safeMultitouch=true;
  await page.setViewportSize({width:780,height:360});await page.locator('#safe-area').evaluate(e=>e.style.padding='0px 20px 0px 20px');await page.evaluate(()=>syncSafeArea());await page.waitForTimeout(350);const galaxy=await page.locator('#canvas').boundingBox();assert.equal(galaxy.width,780);assert.equal(galaxy.height,360);report.galaxyCanvas=galaxy;await shot('galaxy-s25-s26-combat');
  await tap(915,28);await mode(13);await tap(658,256);await mode(11);await page.keyboard.press('KeyO');await page.waitForTimeout(500);assert.equal(await state(10),1386,'Input handling must restore wide world dimensions');
  assert.deepEqual(errors,[]);report.pageErrors=errors;report.passed=true;fs.writeFileSync(path.join(out,'wide.json'),JSON.stringify(report,null,2));console.log(JSON.stringify(report,null,2));
 }catch(e){if(page)await page.screenshot({path:path.join(out,'failure.png')}).catch(()=>{});throw e;}finally{await browser.close();}
})().catch(e=>{console.error(e);process.exit(1);});
