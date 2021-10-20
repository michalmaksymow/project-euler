#include "Timer.h"
#include <vector>
#include <math.h>

const long long c_number = 600851475143;

std::vector<long> prime_factors(long long number)
{
	std::vector<long> factors;
	for (long i = 2; i <= sqrt(number); i++)
	{
		while (number % i == 0)
		{
			factors.push_back(i);
			number = number / i;
		}
	}
	if (number > 2)
	{
		factors.push_back(number);
	}
	return factors;
}

int main()
{
	Timer timer;

	int max {};
	std::vector<long> v;
	v = prime_factors(c_number);

	/* Finding maximum value in vector v */
	for (long factor : v)
	{
		if (factor > max)
		{
			max = factor;
		}
	}

	std::cout << "Problem 3: " << max << std::endl;

	return 0;
}