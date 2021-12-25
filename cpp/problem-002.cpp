#include <vector>

#include "benchmark/timer.hpp"

int main() {
    Timer timer;

    int result{};

    // Initializing sequence with two first terms
    std::vector<int> sequence{1, 2};

    // Filling sequence with Fibonacci elements that are lower than 4000000
    do {
        sequence.push_back(sequence[sequence.size() - 1] + sequence[sequence.size() - 2]);
    } while (sequence[sequence.size() - 1] + sequence[sequence.size() - 2] < 4000000);

    // Adding together those elements that are even
    for (int i = 0; i < sequence.size(); ++i) {
        if (sequence[i] % 2 == 0) {
            result += sequence[i];
        }
    }

    std::cout << "Problem 2: " << result << std::endl;
}