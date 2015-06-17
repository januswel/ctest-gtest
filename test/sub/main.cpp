/*
 * main.cpp
 * */

#include "../../include/sub.hpp"
#include "gtest/gtest.h"

TEST(Sub, integer) {
    constexpr int expected = -1;
    constexpr int actual = sub(1, 2);
    ASSERT_EQ(expected, actual);
}

