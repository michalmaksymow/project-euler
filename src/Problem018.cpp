#include <iostream>
#include <fstream>
#include <algorithm>
#include "Timer.h"

/*
    Solution to Project Euler problem 18 in C++
    Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

void problem018()
{
    int triangle[15][15];

    std::ifstream file;
    file.open("files/problem018.txt");
    for (size_t i = 0; i < 15; i++) 
    {
        for (size_t j = 0; j < i + 1; j++) 
        {
            file >> triangle[i][j];
        }
    }
    file.close();

    Timer startTimer;

    for (int i = 13; i >= 0; i--) 
    {
        for (int j = 0; j <= i; j++) 
        {
            triangle[i][j] += std::max(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }
    std::cout << "Problem 18: " << triangle[0][0] << std::endl;
}