#include <iostream>

#include "benchmark/timer.hpp"

int main() {
    Timer timer;

    // Holds number of terms and number
    uint32_t maxTerms{0}, maxIndex{0};

    // Finding which number under one million has the largest sequence - simple brute force method
    for (size_t i = 2; i < 1000000; ++i) {
        uint64_t current{i};
        uint32_t terms{1};

        // Computing Collatz sequence terms for currently considered number
        while (current != 1) {
            if (current % 2 == 0)
                current = current / 2;
            else
                current = (3 * current) + 1;

            terms++;
        }

        // Checking if current one has the most terms
        if (terms > maxTerms) {
            maxTerms = terms;
            maxIndex = i;
        }
    }

    std::cout << "Problem 14: " << maxIndex << std::endl;
}