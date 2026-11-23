// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 17,11,2026
// This program generates a random number.
// It gets the user to try to guess
// the number and it uses a loop to get the user's guess.
// It breaks out of the loop if they guess correctly.

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ostream>
#include <string>

int main() {
    // declare variables
    int someRandomNumber, userInt;
    std::string userStr;

    // initialize random seed

    srand((unsigned)time(NULL));

    // generate a random number between 0 and 9

    someRandomNumber = rand() % 10;  // NOLINT(runtime/threadsafe_fn)

    do {
        // get user's guess
        std::cout <<"Guess a number from 0-9: ";
        std::cin >> userStr;

        // check if user input is the right data type
        try {
            userInt = std::stoi(userStr);

            if (userInt != someRandomNumber) {
                std::cout <<"Incorrect guess. Try again \n";
            } else if (userInt == someRandomNumber) {
                std::cout <<"You guessed correctly.";
                std::cout <<"The correct answer is " <<someRandomNumber;
                std::cout << std::endl;
            }
        } catch(std::invalid_argument) {
            std::cout <<userStr <<" is not a valid integer\n";
        }
    } while (userInt != someRandomNumber);
}
