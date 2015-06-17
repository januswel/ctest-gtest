/*
 * main.cpp
 * */

#include <gtest/gtest.h>

#include "sub.hpp"

TEST(Sub, integer) {
    constexpr int expected = -1;
    constexpr int actual = sub(1, 2);
    ASSERT_EQ(expected, actual);
}

