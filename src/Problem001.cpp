#include "Timer.h"

/*
	Solution to Project Euler problem 1 in C++
	Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

const int limit = 1000;

void problem001()
{
	Timer timer; 

	int result = 0;

	/* Adding every number that is a multiple of 3 and lower than 1000 to the result */
	for (int i = 3; i < limit; i += 3)
	{
		result += i;
	}
	/* Adding every number that is a multiple of 5 and lower than 1000 to the result */
	for (int i = 5; i < limit; i += 5)
	{
		result += i;
	}
	/* Subtracting every number that is a multiple of 15 from the result, because 
	they were counted two times. Ex.: 30 is divisble by 5 and 3, so it were added 
	in the first and in the second "for" loop */
	for (int i = 15; i < limit; i += 15)
	{
		result -= i;
	}
	std::cout << "Problem 1: " << result << std::endl;
}

