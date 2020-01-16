#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Timer.h"

void problem007()
{
	Timer timer;

	const int n = 1000000;
	bool* prime = new bool[n + 1];
	for (int i = 0; i < n; i++) 
	{
		prime[i] = true;
	}
	std::vector<int> primeList;

	for (int p = 2; p * p <= n; p++) 
	{
		if (prime[p] == true) 
		{
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	for (int i = 2; i <= n; i++) 
	{
		if (prime[i] == true) 
		{
			primeList.push_back(i);
		}
	}

	std::cout << "Problem 7: " << primeList.at(10000) << std::endl;
}