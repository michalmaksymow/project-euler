#include "Timer.h"
#include <iostream>
#include <cmath>

/*
	Solution to Project Euler problem 6 in C++
	Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

void problem006() 
{
	Timer timer;

	// The sum of the squares of the first one houndred natural numbers
	int sumOfSquares = 0;
	// The square of the sum of the first one houndred natural numbers
	int squareOfSum = 0;

	for (int i = 1; i <= 100; i++) 
	{
		sumOfSquares += pow(i, 2); // Adding squares of i's
		squareOfSum += i; // Adding i's and then rising the sum to the power of 2
	}

	std::cout << "Problem 6: " << (squareOfSum * squareOfSum) - sumOfSquares << std::endl; // Returning the answer
}