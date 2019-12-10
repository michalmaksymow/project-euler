#include "Timer.h"
#include <thread>

void problem001()
{
	Timer timer;

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
	std::cout << "Sum of multiples: " << result << std::endl;
}

int main()
{
	std::thread t(problem001);
	t.join();

	system("pause");
	return 0;
}

