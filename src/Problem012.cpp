#include "Timer.h"
#include <iostream>
#include <cmath>

/*
	Solution to Project Euler problem 12 in C++
	Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

long triangleNumber(int n) 
{
	long number = 0;
	for (long i = 1; i <= n; i++) 
	{
		number += i;
	}
	return number;
}

void problem012() 
{
	Timer startTimer;

	int n = 1; // Index of checked triangle number
	while (true) 
	{
		long checkedNumber = triangleNumber(n);
		int divisors = 0;
		for (int i = 1; i <= (int)sqrt(checkedNumber); i++) 
		{
			if (checkedNumber % i == 0)
				divisors += 2;
		}
		if (divisors > 500) 
		{
			std::cout << "Problem 12: " << (checkedNumber) << std::endl;
			break;
		}
		n++;
	}
}