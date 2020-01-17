#include "Timer.h"
#include <iostream>
#include <cmath>

/*
	Solution to Project Euler problem 9 in C++
	Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

void problem009() 
{
	Timer startTimer;

	// a < b < c
	for (int a = 1; a < 1000; a++) 
	{
		// Making sure that b is bigger than a by at least 1
		for (int b = a + 1; b < 1000; b++) 
		{
			// a + b + c = 1000 => c = 1000 - a - b
			int c = 1000 - a - b;
			// Conditions for a Pythagorean triplet
			if (pow(a, 2) + pow(b, 2) == pow(c, 2) && b < c) 
			{
				// Returning the product abc
				std::cout << "Problem 9: " << (a * b * c) << std::endl;
			}
		}
	}

}