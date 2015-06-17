/*
 * main.cpp
 * */

#include <iostream>

#include "add.hpp"
#include "sub.hpp"
#include "awesome.hpp"

int main(const int, const char* const []) {
    std::cout
        << add(1, 2)
        << std::endl;
    std::cout
        << sub(1, 2)
        << std::endl;
    std::cout
        << awesome()
        << std::endl;

    return 0;
}

