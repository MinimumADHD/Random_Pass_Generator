cmake_minimum_required(VERSION 3.25)
project(PasswordGenerator)

set(CMAKE_CXX_STANDARD 17)

add_executable(PasswordGenerator main.cpp)
target_link_libraries(PasswordGenerator bingitup)
