#include "Timer.h"

/* Explanained in Timer.h */

Timer::Timer()
{
	this->start = std::chrono::high_resolution_clock::now();
	this->duration = std::chrono::duration<float, std::milli>::zero();
}

Timer::~Timer()
{
	this->end = std::chrono::high_resolution_clock::now();
	this->duration = end - start;
	std::cout << "This problem took: " << duration.count() << " ms. \n\n";
}
