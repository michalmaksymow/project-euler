#include <string>
#include "Timer.h"

/*
	Solution to Project Euler problem 4 in C++
	Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

bool isPalindrome(int x)
{
	std::string number = std::to_string(x);
	for (int i = 0; i < number.length() / 2; i++)
	{
		if (number.at(i) != number.at(number.length() - (i + 1)))
			return false;
	}
	return true;
}

void problem004()
{
	Timer timer;

	int max{};
	int result{};
	for (int i = 999; i > 99; i--)
	{
		for (int j = 999; j > 99; j--)
		{
			result = i * j;
			if (isPalindrome(result) && result > max)
			{
				max = result;
			}
		}
	}
	std::cout << "Problem 4: " << max << std::endl;
}