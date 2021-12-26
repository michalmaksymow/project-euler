#include <iostream>
#include <cmath>

#include "benchmark/timer.hpp"

int main() {
    Timer timer;

    // Holds the sum of the squares of the first one hundred natural numbers
    uint32_t sumOfSquares{};
    // Holds the square of the sum of the first one hundred natural numbers
    uint32_t squareOfSum{};

    for (size_t i = 1; i <= 100; ++i) {
        sumOfSquares += pow(i, 2); // Adding squares of i's
        squareOfSum += i; // Adding i's together and then rising the sum to the power of 2
    }

    std::cout << "Problem 6: " << (squareOfSum * squareOfSum) - sumOfSquares << std::endl;
}
