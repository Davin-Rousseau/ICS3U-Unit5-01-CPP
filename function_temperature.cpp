// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Davin ROusseau
// Created on: November 2019
// This program uses user defined functions
// To calculate fahrenheit value given celcius value

#include <iostream>
#include <string>


void CalculateFahrenheit() {
    // calculate perimeter
    std::string input1;
    int tempCelc;
    int tempFahr;

    // input
    std::cout << "Enter a temperature in degrees Celcius: ";
    std::cin >> input1;

    // process
    try {
        tempCelc = std::stoi(input1);
        tempFahr = (tempCelc * 1.8) + 32;
            // output
        std::cout << "The temperature in degrees Fahrenheit: "<< tempFahr
                  << std::endl;
    } catch(std::invalid_argument) {
        std::cout << "Invalid input";
    }
}

main() {
    // this function just calls other functions

    // call functions
    CalculateFahrenheit();
}
