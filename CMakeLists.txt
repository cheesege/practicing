cmake_minimum_required(VERSION 3.23)
project(coding)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX FLAGS -fexec-charset=GBK)
MATH(EXPR stack_size "1000*100000")
set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
add_executable(coding main.cpp)
