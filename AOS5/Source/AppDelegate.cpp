/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 Copyright (c) 2019-present Axmol Engine contributors (see AUTHORS.md).

 https://axmol.dev/

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "AppDelegate.h"
#include "rt_engine.h"
#include <cstdio>
#include <cstdlib>

#if AX_TARGET_PLATFORM == AX_PLATFORM_WIN32
#    include <GLFW/glfw3.h>
#endif

#define USE_AUDIO_ENGINE 1

#if USE_AUDIO_ENGINE
#    include "audio/AudioEngine.h"
#endif

#if _AX_TESTS
#   include "doctest/doctest.h"
#endif

using namespace ax;

// 원작 AOS5: 설계 해상도 960x640, 렌더 30fps (AppDelegate::applicationDidFinishLaunching @0x39aa54)
static ax::Size designResolutionSize = ax::Size(960, 640);

AppDelegate::AppDelegate() {}

AppDelegate::~AppDelegate() {}

// if you want a different context, modify the value of gfxContextAttrs
// it will affect all platforms
void AppDelegate::initGfxContextAttrs()
{
    // set graphics context attributes: red,green,blue,alpha,depth,stencil,multisamplesCount
    GfxContextAttrs gfxContextAttrs = {8, 8, 8, 8, 24, 8, 0};
    // since axmol-2.2 vsync was enabled in engine by default
    // gfxContextAttrs.vsync = false;

    RenderView::setGfxContextAttrs(gfxContextAttrs);
}

bool AppDelegate::applicationDidFinishLaunching()
{
    // initialize director
    auto director = Director::getInstance();
    auto renderView   = director->getRenderView();
    if (!renderView)
    {
#if (AX_TARGET_PLATFORM != AX_PLATFORM_ANDROID) && (AX_TARGET_PLATFORM != AX_PLATFORM_IOS)
        // Repeatable desktop aspect-ratio checks without changing game coordinates.
        float viewWidth = designResolutionSize.width;
        float viewHeight = designResolutionSize.height;
        if (const char* viewport = std::getenv("AOS5_QA_VIEWPORT"))
        {
            int width = 0, height = 0;
            if (std::sscanf(viewport, "%dx%d", &width, &height) == 2 &&
                width >= 640 && width <= 2560 && height >= 480 && height <= 1600)
            {
                viewWidth = static_cast<float>(width);
                viewHeight = static_cast<float>(height);
            }
        }
        renderView = RenderViewImpl::createWithRect(
            "CITY OF LAST LIGHT", ax::Rect(0, 0, viewWidth, viewHeight));
#else
        renderView = RenderViewImpl::create("CITY OF LAST LIGHT");
#endif
        director->setRenderView(renderView);
    }

#if AX_TARGET_PLATFORM == AX_PLATFORM_WIN32
    // Keep isolated scripted captures from taking over the user's play window.
    // AOS5_QA_BACKGROUND keeps the diagnostic renderer running while hidden.
    if (std::getenv("AOS5_QA_HIDDEN") && std::getenv("AOS5_QA_BACKGROUND"))
        glfwHideWindow(static_cast<RenderViewImpl*>(renderView)->getWindow());
#endif

    // turn on display FPS
    director->setStatsDisplay(false);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0f / 30);

    // Set the design resolution
    renderView->setDesignResolutionSize(designResolutionSize.width, designResolutionSize.height,
                                    ResolutionPolicy::SHOW_ALL);

#if !_AX_TESTS
    // create a scene. it's an autorelease object
    auto scene = utils::createInstance<Aos5Scene>();

    // run
    director->runWithScene(scene);
#endif

    return true;
}

// This function will be called when the app is inactive. Note, when receiving a phone call it is invoked.
void AppDelegate::applicationDidEnterBackground()
{
    // Allow the game's own scripted regression runner to finish unattended.
    // Normal builds keep the original mobile background behaviour.
    if (getenv("AOS5_QA_BACKGROUND")) return;
    Director::getInstance()->stopAnimation();

#if USE_AUDIO_ENGINE
    AudioEngine::pauseAll();
#endif
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    Director::getInstance()->startAnimation();

#if USE_AUDIO_ENGINE
    AudioEngine::resumeAll();
#endif
}

void AppDelegate::applicationWillQuit() {}

#if _AX_TESTS
int AppDelegate::run(int argc, char** argv) {
    AXLOGI("Running unit tests...\n");
    fflush(stdout);
    AXLOGI("Default resource path: {}\n", FileUtils::getInstance()->getDefaultResourceRootPath());
    AXLOGI("Writable path: {}\n", FileUtils::getInstance()->getWritablePath());
    {
        for (auto& path : FileUtils::getInstance()->getSearchPaths())
            AXLOGI("Search path: {}\n", path);
    }
    fflush(stdout);

    ax::Director::getInstance()->init();

    doctest::Context context;

    //context.addFilter("test-case-exclude", "*math*"); // exclude test cases with "math" in their name
    //context.setOption("abort-after", 5);              // stop test execution after 5 failed assertions

    //context.setOption("order-by", "name");            // sort the test cases by their name

    context.applyCommandLine(argc, argv);

    // overrides
    context.setOption("no-breaks", true);             // don't break in the debugger when assertions fail

    int res = context.run(); // run
    return res;
}
#endif
