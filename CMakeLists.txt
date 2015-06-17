cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -pedantic")

include_directories(include)

add_subdirectory(util)

add_executable(main main.cpp)
target_link_libraries(main
    util)
if(NOT without-test)
    enable_testing()
    add_subdirectory(test)
endif()
