#include "Timer.h"
#include <iostream>
#include <cmath>

int  main() 
{
	Timer timer;

	// The sum of the squares of the first one houndred natural numbers
	int sumOfSquares {};
	// The square of the sum of the first one houndred natural numbers
	int squareOfSum {};

	for (int i = 1; i <= 100; i++) 
	{
		sumOfSquares += pow(i, 2); // Adding squares of i's
		squareOfSum += i; // Adding i's and then rising the sum to the power of 2
	}

	std::cout << "Problem 6: " << (squareOfSum * squareOfSum) - sumOfSquares << std::endl;

	return 0;
}