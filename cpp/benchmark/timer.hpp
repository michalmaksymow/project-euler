/*
 * This timer class is used in every problem that I solved
 * to measure the efficiency of each problem implementation.
 *
 * It is the most basic implementation that I could think of, 
 * yet it does the job very well. Basically to start this timer 
 * you only have to initialize it at the beginning of a function 
 * that you want to measure the duration of. When it is initialized, 
 * the constructor Timer() is called, and it saves a timestamp.
 * When the function ends the destructor ~Timer() is called, where 
 * it checks how much time has passed and returns duration in milliseconds.
*/

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
