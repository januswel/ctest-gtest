/*
 * main.cpp
 * */

#include "../../include/add.hpp"
#include "gtest/gtest.h"

TEST(Add, integer) {
    constexpr int expected = 3;
    constexpr int actual = add(1, 2);
    ASSERT_EQ(expected, actual);
}

