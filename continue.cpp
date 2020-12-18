// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on December 2020
// This is a for loop program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <string>

int main() {
  // This is the function to run for loop.

  int userInputNumber;
  int loopCounter;
  int final;
  int whileNumber;
  int inPutnumber;
  std::string userInputAsString;
  loopCounter = 0;
  final = 0;
  whileNumber = 0;

  // input
  std::cout << "How many numbers are you going to add: " << std::ends;
  std::cin >> userInputAsString;
  std::cout << "" << std::endl;

  // process + output
    try {
        userInputNumber = std::stoi(userInputAsString);
        if (userInputNumber > 0) {
            while (loopCounter < userInputNumber) {
                std::cout << "Enter integer to add: " << std::ends;
                std::cin >> inPutnumber;
                std::cout << "" << std::endl;
                if (inPutnumber < 0) {
                    final = final + 0;
                    loopCounter = loopCounter + 1;
                    continue;
                } else {
                    whileNumber = inPutnumber;
                    final = whileNumber + final;
                    loopCounter = loopCounter + 1;
                    continue;
                }
            }
            std::cout << "The total is " << final << std::endl;
        } else if (userInputNumber < 0) {
            std::cout << "Sorry, you did not enter a positive integer!" <<
            std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "You are not type in an integer!" << std::ends;
    }
}
