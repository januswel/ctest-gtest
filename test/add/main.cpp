/*
 * main.cpp
 * */

#include <gtest/gtest.h>

#include "add.hpp"

TEST(Add, integer) {
    constexpr int expected = 3;
    constexpr int actual = add(1, 2);
    ASSERT_EQ(expected, actual);
}

