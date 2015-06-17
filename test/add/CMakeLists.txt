cmake_minimum_required(VERSION 2.8)

add_executable(add-test main.cpp)
target_link_libraries(add-test
    gtest
    gtest_main
    pthread
    )

add_test(
    NAME add
    COMMAND $<TARGET_FILE:add-test>
    )

# run with: ctest -L lib
set_property(
    TEST add
    PROPERTY LABELS lib add
    )
