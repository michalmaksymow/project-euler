#pragma once
#include <chrono>
#include <iostream>

class Timer
{
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
	std::chrono::duration<float, std::milli> duration;

public: 
	Timer();
	~Timer();
};

