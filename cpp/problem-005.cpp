#include <vector>
#include <iostream>

#include "benchmark/timer.hpp"

int main() {
    Timer timer;

    uint64_t result{};

    bool breakFirst{};

    // Iterating through possibilities until the answer is found. Brute force method
    for (uint64_t i = 1;; ++i) {
        for (size_t j = 1; j <= 20; ++j) {
            if (i % j != 0)
                break;

            if (j == 20) {
                result = i;
                breakFirst = true;
            }
        }
        if (breakFirst)
            break;
    }

    std::cout << "Problem 5: " << result << std::endl;
}
