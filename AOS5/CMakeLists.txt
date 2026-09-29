# /****************************************************************************
# Copyright (c) 2013-2014 cocos2d-x.org
# Copyright (c) 2019-present Axmol Engine contributors (see AUTHORS.md).
#
# https://axmol.dev/
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
# ****************************************************************************/

cmake_minimum_required(VERSION 3.22...4.1)

set(APP_NAME AOS5)

# Decompiled C needs C17. Let CMake emit one standard flag rather than
# mixing the engine's /std:c11 with a per-source /std:c17 on older MSVC.
set(CMAKE_C_STANDARD 17)

project(${APP_NAME})

if(XCODE)
  set(CMAKE_XCODE_GENERATE_TOP_LEVEL_PROJECT_ONLY TRUE)
endif()

set(_is_axmol_embed FALSE)
set(_AX_USE_PREBUILT FALSE)

set(CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules
)

# NOTE: The order of the cmake module "include(AXGame...)" statements matters
include(AXGameEngineOptions)
include(AXGameEngineSetup)

# AXConfigDefine sets the engine's C11 standard. The restored game is C17.
set(CMAKE_C_STANDARD 17)

# The common cross-platforms source files and header files
file(GLOB_RECURSE GAME_HEADER
  Source/*.h Source/*.hpp
)

file(GLOB_RECURSE GAME_SOURCE
  Source/*.cpp Source/*.c
)

set(GAME_INC_DIRS
  "${CMAKE_CURRENT_SOURCE_DIR}/Source"
)

# ---- 원작 게임 로직 (재컴파일) + 엔진 래퍼 런타임 ----
set(AOS5_RECOMP "${CMAKE_CURRENT_SOURCE_DIR}/../recomp")
file(GLOB_RECURSE AOS5_GEN_SOURCES "${AOS5_RECOMP}/gen/*.c")
set(AOS5_RT_C_SOURCES "${AOS5_RECOMP}/rt/rt_core.c" "${AOS5_RECOMP}/rt/rt_autostub.c")
set(AOS5_RT_CXX_SOURCES "${AOS5_RECOMP}/rt/rt_engine.cpp" "${AOS5_RECOMP}/rt/rt_diag.cpp")
# Track local runtime inputs explicitly. Some Windows MSVC/Ninja installations
# misdecode the localized /showIncludes prefix, losing automatic header deps.
# Keep this small list in sync with rt_engine.cpp and its local includes.
set(AOS5_ENGINE_INPUTS
  "${AOS5_RECOMP}/rt/rt_engine.h"
  "${AOS5_RECOMP}/rt/rt_ui_text.h"
  "${AOS5_RECOMP}/rt/rt_visual_policy.h"
  "${AOS5_RECOMP}/rt/rt_stickman_style.h"
  "${AOS5_RECOMP}/rt/rt_sprite_pool.h"
  "${AOS5_RECOMP}/rt/rt_stickrig_runtime.inc"
  "${AOS5_RECOMP}/rt/rt_stickrig_json.h"
  "${AOS5_RECOMP}/rt/rt_stickrig_roles.h"
  "${AOS5_RECOMP}/rt/rt_stickrig_art.h"
  "${AOS5_RECOMP}/rt/rt_ads.inc"
  "${AOS5_RECOMP}/include/gh.h"
  "${AOS5_RECOMP}/include/aos5_image_layout.h"
)
set_property(SOURCE "${AOS5_RECOMP}/rt/rt_engine.cpp" APPEND PROPERTY
  OBJECT_DEPENDS ${AOS5_ENGINE_INPUTS})
list(APPEND GAME_SOURCE ${AOS5_GEN_SOURCES} ${AOS5_RT_C_SOURCES} ${AOS5_RT_CXX_SOURCES})
list(APPEND GAME_HEADER "${AOS5_RECOMP}/rt/rt_engine.h")
list(APPEND GAME_INC_DIRS "${AOS5_RECOMP}/include" "${AOS5_RECOMP}/gen" "${AOS5_RECOMP}/rt")
# 역변환 C: 형 변환 경고가 대량이라 끈다. 큰 함수(drawScene 등) 때문에 /bigobj.
# 원작(ARM64)의 char 는 부호 없음 → /J · -funsigned-char 로 맞춘다 (UTF-8 바이트 비교가 원작과 같게).
if(MSVC)
  set_source_files_properties(${AOS5_GEN_SOURCES} ${AOS5_RT_C_SOURCES} PROPERTIES
    COMPILE_OPTIONS "/w;/bigobj;/Od;/Ob0;/J")
else()
  set_source_files_properties(${AOS5_GEN_SOURCES} ${AOS5_RT_C_SOURCES} PROPERTIES
    COMPILE_OPTIONS "-std=gnu17;-w;-Wno-int-conversion;-Wno-incompatible-pointer-types;-Wno-implicit-function-declaration;-fwrapv;-fno-strict-aliasing;-funsigned-char")
endif()

set(AOS5_CONTENT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Content" CACHE PATH "Game resource folder")
set(content_folder "${AOS5_CONTENT_DIR}")

if(APPLE)
  ax_mark_multi_resources(common_content_files RES_TO "Resources" FOLDERS ${content_folder})
elseif(WINDOWS)
  ax_mark_multi_resources(common_content_files RES_TO "Content" FOLDERS ${content_folder})
endif()

include(AXGameSourceSetup)

# mark app complie info and libs info
set(APP_SOURCES
  ${GAME_HEADER}
  ${GAME_SOURCE}
)

if(LINUX OR MACOSX OR WINDOWS)
  option(_AX_TESTS "Enable doctest" OFF)
endif()

if(_AX_TESTS)
  set(TEST_TARGET_NAME "${APP_NAME}_test")

  file(GLOB_RECURSE TEST_HEADER CONFIGURE_DEPENDS
    Tests/*.h Tests/*.hpp
  )
  list(APPEND TEST_HEADER ${GAME_HEADER})

  file(GLOB_RECURSE TEST_SOURCE CONFIGURE_DEPENDS
    Tests/*.cpp Tests/*.c
  )
  list(APPEND TEST_SOURCE ${GAME_SOURCE})

  set(TEST_TARGET_SOURCES
    ${APP_SOURCES}
    ${TEST_HEADER}
    ${TEST_SOURCE}
  )

 set(TEST_INC_DIRS
   "${CMAKE_CURRENT_SOURCE_DIR}/Tests"
   "${CMAKE_CURRENT_SOURCE_DIR}/Source"
 )
endif()

include(AXGameTargetSetup)

# mark app resources, resource will be copy auto after mark
ax_setup_app_config(${APP_NAME})

if(_AX_TESTS)
  ax_setup_app_config(${TEST_TARGET_NAME} CONSOLE)
endif()

# Add any libraries you need to link to the project after this point

# Default Platform-specific setup
include(AXGamePlatformSetup)

# Make sure the AXGameFinalSetup is included at the end of this file
include(AXGameFinalSetup)
