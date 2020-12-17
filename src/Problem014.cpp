#include "Timer.h"
#include <iostream>

/*
	Solution to Project Euler problem 14 in C++
	Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

int main() 
{
	Timer startTimer;

	long long current = 0;
	long maxTerms = 0, maxIndex = 0;
	int terms = 0;

	for (long i = 2; i < 1000000; i++) 
	{
		current = i;
		terms = 1;
		while (current != 1) 
		{
			if (current % 2 == 0) 
			{
				current = current / 2;
				terms++;
			}
			else 
			{
				current = (3 * current) + 1;
				terms++;
			}
		}
		if (terms > maxTerms) 
		{
			maxTerms = terms;
			maxIndex = i;
		}
	}

	std::cout << "Problem 14: " << maxIndex << std::endl;

	return 0;
}