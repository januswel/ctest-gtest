cmake_minimum_required(VERSION 2.8)

add_executable(sub-test main.cpp)
target_link_libraries(sub-test
    gtest
    gtest_main
    pthread
    )

add_test(
    NAME sub
    COMMAND $<TARGET_FILE:sub-test>
    )

# run with: ctest -L lib
set_property(
    TEST sub
    PROPERTY LABELS lib sub
    )
