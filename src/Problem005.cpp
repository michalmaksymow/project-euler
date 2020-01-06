#include "Timer.h"
#include <vector>

/*
	Solution to Project Euler problem 5 in C++
	Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

void problem005_1()
{
	Timer timer;
	unsigned long long result{};
	
	/* Iterating through possibilities until the answer is found */
	for (unsigned long long i = 1;; i++)
	{
		for (size_t j = 1; j <= 20; j++)
		{
			if (i % j != 0)
			{
				break;
			}
			if (j == 20)
			{
				result = i;
				goto finish;
			}
		}
	}
	finish:
	std::cout << "Problem 5, method 1: " << result << std::endl;
}