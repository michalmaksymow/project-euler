#include <iostream>
#include <fstream>
#include <algorithm>
#include "Timer.h"

/*
    Solution to Project Euler problem 67 in C++
    Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

int main()
{
    int* triangle[100];
    /* Initializing part of 2D array on heap */
    for (size_t i = 0; i < 100; i++)
    {
        triangle[i] = new int[100];
    }

    std::ifstream file;
    file.open("files/problem067.txt");
    for (size_t i = 0; i < 100; i++)
    {
        for (size_t j = 0; j < i + 1; j++)
        {
            file >> triangle[i][j];
        }
    }
    file.close();

    Timer startTimer;

    for (int i = 98; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            triangle[i][j] += std::max(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }

    std::cout << "Problem 67: " << triangle[0][0] << std::endl;

    /* Cleaning up the memory */
    for (size_t i = 0; i < 100; i++)
    {
        delete[] triangle[i];
    }

    return 0;
}