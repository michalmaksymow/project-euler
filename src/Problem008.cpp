#include <iostream>
#include <fstream>
#include <string>
#include "Timer.h"

/*
    Solution to Project Euler problem 8 in C++
    Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

/* Loading 1000-digit number from file "problem008.txt" */
bool loadFile(std::string &number)
{
    std::ifstream file;

    file.open("files/problem008.txt");
    if (!file)
    {
        return 0;
    }

    std::string lineRead;
    while (file >> lineRead)
    {
        number.append(lineRead);
    }
    file.close();
    return 1;
}

void problem008()
{
    std::string number;
    if (!loadFile(number))
    {
        std::cout << "Problem 8: Error loading data from file!" << std::endl;
        return;
    }

    unsigned long long product = 1;
    unsigned long long maxProduct = 0;

    for (size_t i = 0; i < number.length() - 12; i++)
    {
        for (size_t j = 0; j < 13; j++)
        {
            product *= (long long)number.at(i + j) - 48; // Casting char to its numerical value
        }
        if (product > maxProduct)
        {
            maxProduct = product;
        }
        product = 1;
    }

    std::cout << "Problem 8: " << maxProduct << std::endl;
    
}

