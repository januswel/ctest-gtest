cmake_minimum_required(VERSION 2.8)

# Google Test settings
include(ExternalProject)

ExternalProject_Add(
    GoogleTest
    URL https://googletest.googlecode.com/files/gtest-1.7.0.zip
    PREFIX ${CMAKE_CURRENT_BINARY_DIR}/lib
    INSTALL_COMMAND ""
    LOG_DOWNLOAD ON
    )

ExternalProject_Get_Property(GoogleTest source_dir)
include_directories(${source_dir}/include)

ExternalProject_Get_Property(GoogleTest binary_dir)
add_library(gtest STATIC IMPORTED)
set_property(
    TARGET gtest
    PROPERTY IMPORTED_LOCATION ${binary_dir}/libgtest.a
    )
add_library(gtest_main STATIC IMPORTED)
set_property(
    TARGET gtest_main
    PROPERTY IMPORTED_LOCATION ${binary_dir}/libgtest_main.a
    )
