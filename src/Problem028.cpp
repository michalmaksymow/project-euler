#include <iostream>
#include <cmath>
#include "Timer.h"

int main()
{
    Timer startTimer;

    unsigned long long sum{1};
    unsigned int length{3};

    while (length <= 1001)
    {
        sum += 4*length*length - 6*(length - 1);
        length += 2;
    } 

    std::cout << sum << std::endl;

    return 0;
}