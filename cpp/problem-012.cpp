#include <iostream>
#include <cmath>

#include "benchmark/timer.hpp"

// Computes nth triangle number by summing up numbers from 1 to n together
uint32_t computeTriangleNumber(uint32_t n) {
    uint32_t number = 0;
    for (size_t i = 1; i <= n; ++i)
        number += i;

    return number;
}

int main() {
    Timer timer;

    // Holds index of checked triangle number
    uint32_t n = 1;

    // Iterate until wanted triangle number is found
    while (++n) {
        auto checkedNumber = computeTriangleNumber(n);

        auto divisors = 0u;

        // Compute number of divisors of currently checked triangle number
        for (size_t i = 1; i * i <= checkedNumber; ++i) {
            if (checkedNumber % i == 0)
                divisors += 2;
        }

        if (divisors > 500) {
            std::cout << "Problem 12: " << checkedNumber << std::endl;
            break;
        }
    }
}
