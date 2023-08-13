cmake_minimum_required(VERSION 3.12)

project(glad LANGUAGES C)

add_library(glad
  src/egl.c
  src/gl.c
  src/glx.c
  src/vulkan.c
  include/vk_platform.h
  include/EGL/eglplatform.h
  include/KHR/khrplatform.h
  include/glad/egl.h
  include/glad/gl.h
  include/glad/glx.h
  include/glad/vulkan.h
)

add_library(glad::glad ALIAS glad)

target_include_directories(glad
  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
