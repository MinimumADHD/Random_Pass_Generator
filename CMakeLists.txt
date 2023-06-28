cmake_minimum_required(VERSION 3.25)
project(PasswordGenerator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
set(BUILD_SHARED_LIBS OFF)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(PasswordGenerator main.cpp)