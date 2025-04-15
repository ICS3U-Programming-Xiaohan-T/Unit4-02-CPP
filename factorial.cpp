// Copyright 2025 Xiaohan All rights reserved.
// Created by: Xiaohan
// Created on: April 14, 2025
// This program calculates the factorial of a whole number
// using a do..while loop.

#include <iostream>
#include <string>

int main() {
    // Variable to store user input as a string
    std::string userInput;
    // Variable to store the converted integer
    int userNum;
    // Set the counter
    int counter = 0;
    // Set the product
    int product = 1;

    // Get user input as string.
    std::cout << "Enter a positive whole number: ";
    // Store the user input as a string
    std::cin >> userInput;

    try {
        // Convert to integer
        userNum = std::stoi(userInput);

        // Check if the number is negative
        if (userNum < 0) {
            std::cout << "Please enter a positive integer." << std::endl;
        } else {
            // Calculate factorial using a do..while loop
            do {
                counter++;
                product = product * counter;
            } while (counter < userNum);
            // Display the result to user
            std::cout << "The factorial of " << userNum << "! is "
            << product << std::endl;
        }
    } catch (std::invalid_argument const &err) {
        // catches errors if user enter invalid things
        std::cout << "Invalid input. Please enter a positive integer."
        << std::endl;
    }
}
