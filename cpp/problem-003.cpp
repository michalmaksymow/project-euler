#include <vector>
#include <cmath>

#include "benchmark/timer.hpp"

const uint64_t THE_NUMBER = 600851475143LL;

// Finding prime factors of a number using the sieve of Eratosthenes algorithm
std::vector <uint32_t> findPrimeFactors(uint64_t number) {
    std::vector <uint32_t> factors;

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

int main() {
    Timer timer;

    // Finding prime factors of the number defined in the task
    auto primeFactors = findPrimeFactors(THE_NUMBER);

    // Finding maximum value in primeFactors vector
    auto maxElement = std::max_element(primeFactors.begin(), primeFactors.end());

    std::cout << "Problem 3: " << *maxElement << std::endl;
    return 0;
}
