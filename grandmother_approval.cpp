// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 7 2020
// this program tells you if the grandmother approves of the users age(25-40)

#include <iostream>
#include <string>

int main() {
    // this program tells you if the grandmother approves of the users
    // age(25-40)
    const float MAX_AGE = 40;
    const float MINIMUM_AGE = 25;
    std::string age_string;
    int age;

    // input
    std::cout << "Enter an age please:";
    std::cin >> age_string;
    std::cout << "" << std::endl;


    // process and output
    try {
        age = std::stoi(age_string);
        if (age <= MAX_AGE && age >= MINIMUM_AGE) {
            std::cout << "Grandmother approves";
    }   else {
            std::cout << "Grandmother does not approve";
            std::cout << "" << std::endl;
    }
    }catch (std::invalid_argument) {
        std::cout << "That was not an age. Try again.";
    }
}
