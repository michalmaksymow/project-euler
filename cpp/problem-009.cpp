#include <iostream>
#include <cmath>

#include "benchmark/timer.hpp"

int main() {
    Timer timer;

    // Brute force method
    for (int a = 1; a < 1000; a++) {
        // Make sure that b is bigger than a by at least 1
        for (int b = a + 1; b < 1000; b++) {
            // Here a + b + c = 1000, so c = 1000 - a - b
            int c = 1000 - a - b;
            // Conditions for a Pythagorean triplet
            if (pow(a, 2) + pow(b, 2) == pow(c, 2) && b < c) {
                // If the condition is met, return the product
                std::cout << "Problem 9: " << (a * b * c) << std::endl;
                return 0;
            }
        }
    }
}
