#include <iostream>
#include <fstream>
#include "Timer.h"

/*
    Solution to Project Euler problem 11 in C++
    Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

bool loadFile(int* number, size_t size)
{
    std::ifstream file;

    file.open("files/problem011.txt");
    if (!file)
    {
        return 0;
    }

    for (size_t i = 0; i < size; i++)
    {
        file >> number[i];
    }
    file.close();
    return 1;
}

void problem011()
{
    int* number = new int[20 * 20];
    loadFile(number, 20 * 20);

    int biggestProduct = 0;

    for (int i = 0; i < 17; i++) 
    {
        for (int j = 0; j < 17; j++) 
        {
            if (number[j + i *20] * number[j+1 + i *20] * number[j+2 + i *20] * number[j+3 + i *20] > biggestProduct)
                biggestProduct = number[j + i *20] * number[j+1 + i *20] * number[j+2 + i *20] * number[j+3 + i *20];
            if (number[j + i *20] * number[j + 1 + i * 20 + 20] * number[j + 2 + i * 20 + 40] * number[j + 3 + i * 20 + 60] > biggestProduct)
                biggestProduct = number[j + i *20] * number[j + 1 + i * 20 + 20] * number[j + 2 + i * 20 + 40] * number[j + 3 + i * 20 + 60];
            if (number[j + i *20] * number[j + i * 20 + 20] * number[j + i * 20 + 40] * number[j + i * 20 + 60] > biggestProduct)
                biggestProduct = number[j + i *20] * number[j + i * 20 + 20] * number[j + i * 20 + 40] * number[j + i * 20 + 60];
            if (j > 2) {
                if (number[j + i *20] * number[j - 1 + i * 20 + 20] * number[j - 2 + i * 20 + 40] * number[j - 3 + i * 20 + 60] > biggestProduct)
                    biggestProduct = number[j + i * 20] * number[j - 1 + i * 20 + 20] * number[j - 2 + i * 20 + 40] * number[j - 3 + i * 20 + 60];
            }

        }
    }
    std::cout << "Problem 11: " << biggestProduct << std::endl;
}
