#include "Timer.h"
#include <vector>

/* Brute force method */
int main()
{
	Timer timer;

	unsigned long long result {};
	
	bool breakFirst {};

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
				breakFirst = true;
			}
		}
		if (breakFirst)
			break;
	}

	std::cout << "Problem 5: " << result << std::endl;

	return 0;
}