#include "Timer.h"
#include <iostream>

void problem014() 
{
	Timer startTimer;

	long maxTerms = 0;
	long maxIndex = 0;
	for (int i = 2; i < 1000000; i++) 
	{
		long current = i;
		int terms = 1;
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
}