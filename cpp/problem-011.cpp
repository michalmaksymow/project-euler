#include <iostream>
#include <fstream>
#include "Timer.h"

bool loadFile(int* number, size_t size)
{
    std::ifstream file;

    file.open("files/problem011.txt");

    if (!file)
        return false;

    for (size_t i = 0; i < size; i++)
        file >> number[i];
    
    file.close();
    return true;
}

int main()
{
    Timer startTimer;

    size_t arraySize = 20 * 20;
    int* number = new int[arraySize];
    if (!loadFile(number, arraySize))
    {
        std::cout << "Problem 11: Error loading data from file!" << std::endl;
        return 0;
    }

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

    return 0;
}
