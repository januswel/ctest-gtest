/*
 * main.cpp
 * */

#include <iostream>

#include "add.hpp"
#include "sub.hpp"

int main(const int, const char* const []) {
    std::cout
        << add(1, 2)
        << std::endl;
    std::cout
        << sub(1, 2)
        << std::endl;

    return 0;
}

