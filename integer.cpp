// Copyright (c) 2022. Daniel Momoh HS All rights reserved.
// usr/bin/env c++
// Created by : Daniel Momoh
// Created on : Oct 2022
// this program determines if number is
// positive or negative
#include <iostream>

int main() {
    int num;
    std::cout << "Enter the number : ";
    std::cin >> num;

    if (num >= 0) {
        std::cout << num << " is a positive number.";
    } else if (num == 0) {
        std::cout << num << " is a Zero";
    } else {
        std::cout << num << " is a negative number.";
    }
}
