# cmake version
cmake_minimum_required(VERSION 3.4.1)
# 支持 -std=gnu++11
set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
# CMAKE_SOURCE_DIR 是 CMakeLists.txt 所在的目录
add_library( my-lib SHARED ${CMAKE_SOURCE_DIR}/src/main/jni/MyLib.cpp )
find_library( log-lib log )
target_link_libraries( my-lib ${log-lib} )