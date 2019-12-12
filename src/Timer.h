#pragma once
#include <chrono>
#include <iostream>

/*
	This timer class is used in every problem that I solved
	in order to measure efficiency of each problem implementation.
	It is the most basic implementation that I could think of,
	basicly to start this timer you only have to initialize it 
	at the beginning of a function that you want to measure 
	duration of. When it is initialized, the constructor Timer() 
	is called and it sets a point in time, when the funcion ends the
	destructor ~Timer() is called, where it checks how much time
	has passed and returns duration in milliseconds.
*/

class Timer
{
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
	std::chrono::duration<float, std::milli> duration;

public:
	Timer();
	~Timer();
};

