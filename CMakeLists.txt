cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -pedantic")

# include path
include_directories(include)

# libraries
add_subdirectory(lib)

# executables
add_executable(main main.cpp)
target_link_libraries(main
    util)

# tests
if(NOT without-test)
    enable_testing()
    include(cmake/gtest.cmake)
    add_subdirectory(test)
endif()
