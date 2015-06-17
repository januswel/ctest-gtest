/*
 * main.cpp
 * */

#include <gtest/gtest.h>

#include "awesome.hpp"

TEST(Awesome, Print) {
    const std::string expected = "awesome!";
    const std::string actual = awesome();
    ASSERT_EQ(expected, actual);
}

