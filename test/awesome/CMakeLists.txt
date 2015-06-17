cmake_minimum_required(VERSION 2.8)

add_executable(awesome-test main.cpp)
target_link_libraries(awesome-test
    gtest
    gtest_main
    pthread
    util
    )

add_test(
    NAME awesome
    COMMAND $<TARGET_FILE:awesome-test>
    )

# run with: ctest -L lib
set_property(
    TEST awesome
    PROPERTY LABELS lib awesome
    )
