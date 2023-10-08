#include <vector>
#include <cmath>
#include <algorithm>

#include "benchmark/timer.hpp"

std::vector<uint32_t> findPrimeFactors(uint64_t number) {
    std::vector<uint32_t> factors;

    for (size_t i = 2; i <= sqrt(number); ++i) {
        while (number % i == 0) {
            factors.push_back(i);
            number /= i;
        }
    }

    if (number > 2)
        factors.push_back(number);

    return factors;
}

void solve() {
    uint64_t THE_NUMBER = 600851475143LL;

    auto primeFactors = findPrimeFactors(THE_NUMBER);

    auto maxElement = std::max_element(primeFactors.begin(), primeFactors.end());

    std::cout << "Problem 3: " << *maxElement << std::endl;
}

int main() {
    Timer timer;
    solve();
}