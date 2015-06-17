cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -pedantic")

add_executable(add main.cpp)

if(NOT without-test)
    enable_testing()
    add_subdirectory(test)
endif()
