#include "Timer.h"

/*
	Solution to Project Euler problem 1 in C++
	Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

void problem001()
{
	Timer timer; // Starts to measure function time

	const int limit = 1000;
	int result = 0; // Declaring and initializing (to 0) an integer
	for (int i = 3; i < limit; i += 3)
	{
		result += i;
	}
	for (int i = 5; i < limit; i += 5)
	{
		result += i;
	}
	for (int i = 15; i < limit; i += 15)
	{
		result -= i;
	}
	std::cout << "Problem 1: " << result << std::endl;
}

