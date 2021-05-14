cmake_minimum_required(VERSION 3.13)
project(Lab2)

set(SOURCE_LIB source/MySummDiff.c)	
add_library(StaticLib STATIC ${SOURCE_LIB})

set(SOURCE_LIB2 source/Myhelp.c)
add_library(libDyn SHARED ${SOURCE_LIB2} MyLib.h)

set(SOURCE_EXE Lab2.c)
add_executable(Lab2Final ${SOURCE_EXE})
target_link_libraries(Lab2Final StaticLib)	
target_link_libraries(Lab2Final libDyn)

set_property(TARGET Lab2Final PROPERTY C_STANDARD 11)
