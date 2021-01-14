// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for 2D arrarys

#include <iostream>

template <int rows, int cols>
int averageOfNumbers(int (&passedIn2DList)[rows][cols], int average) {
    // this function adds up all the elements in  a 2D array

    int total = 0;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement)
            total += passedIn2DList[rowElement][columnElement];
    }
    average = total/(2 * 5);

    return average;
}


int main() {
    // this function uses a 2D array

    int aSingleRandomNumber = 0;
    int average = 0;
    const int rows = 2;
    const int columns = 5;
    int a2DArray[rows][columns];

    srand(time(NULL));

    // input

    // So, ...
    //   In C++ you can't define array's size using variable.
    //   this is why you see const int rows = 2; above,
    //   so the size of the array can never change

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            aSingleRandomNumber = (rand() % 50) + 1;
            a2DArray[rowElement][columnElement] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << std::endl;
    }

    average = averageOfNumbers(a2DArray, average);
    std::cout << "The average of all the numbers is: " << average << std::endl;
}
