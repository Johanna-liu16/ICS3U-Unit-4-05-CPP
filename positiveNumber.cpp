// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function generates a random number
    std::string stringLoops;
    std::string strUser;
    int intLoops;
    int intUser;
    int loopCounter = 0;
    int answer = 0;

    // input
    std::cout << "This program only adds positive numbers." << std::endl;
    std::cout << "Enter the amount of integers you want to add: ";
    std::cin >> stringLoops;

    // process and output
    try {
        intLoops = std::stoi(stringLoops);
        while (loopCounter < intLoops) {
            std::cout << "Enter an integer: ";
            std::cin >> strUser;
            intUser = std::stoi(strUser);
            if (intUser > 0) {
                answer = answer + intUser;
            } else {
                loopCounter++;
                continue;
            }
            loopCounter++;
        }
        std::cout << "The sum is : " << answer << ".";
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
