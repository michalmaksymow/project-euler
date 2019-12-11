#include "Timer.h"
#include <vector>

/*
	Solution to Project Euler problem 2 in C++
	Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

void problem002()
{
	Timer timer; // Starts to measure function time

	int result{};
	std::vector<int> sequence{ 1, 2 };
	do
	{
		sequence.push_back(sequence[sequence.size() - 1] + sequence[sequence.size() - 2]);
	} while (sequence[sequence.size() - 1] + sequence[sequence.size() - 2] < 4000000);
	for (int i = 0; i < sequence.size(); i++)
	{
		if (sequence[i] % 2 == 0)
		{
			result += sequence[i];
		}
	}
	std::cout << "Problem 2: " << result << std::endl;
}