#include <iostream>
#include "Timer.h"

/*
    Solution to Project Euler problem 24 in C++
    Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

void nextLexiographicPermutation(int array[], size_t size)
{
    int i = size - 1;
    while (i > 0 && array[i - 1] >= array[i])
        i--;

    if (i <= 0)
        return;

    int j = size - 1;
    while (array[j] <= array[i - 1])
        j--;

    int temp = array[i - 1];
    array[i - 1] = array[j];
    array[j] = temp;

    j = size - 1;
    while (i < j) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
}

void problem024()
{
    Timer startTimer;

	int permutation[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    size_t i;
    for (i = 1; i < 1000000; i++)
    {
        nextLexiographicPermutation(permutation, 10);
    }

    std::cout << "Problem 24: ";
    for (i = 0; i < 10; i++)
    {
        std::cout << permutation[i];
    }
    std::cout << "\n";
}