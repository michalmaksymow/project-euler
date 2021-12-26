#include <iostream>
#include <vector>

#include "benchmark/timer.hpp"

#define LIMIT 2000000

// Implementation of sieve of Eratosthenes algorithm for finding prime numbers
std::vector <uint32_t> findPrimesBelowNumber(const uint32_t &number) {
    // Creating a vector of boolean values and initializing each one to true
    std::vector<bool> isPrime(number, true);

    // This loop is the clue of this algorithm. All it does is iterate through the isPrime array, starting with
    // number 2. Number 2 is the first found prime, so it remains being set to true, but each multiple of 2 is set to
    // false since they are not prime numbers (they are multiples of 2). Then the loop goes to number 3, which also
    // happens to be set to true (to be a prime number) and marks each multiple of it as not prime (false). When it
    // gets to number 4, which is already marked as false, skips it. It does so with every number that is less than the
    // square root of the number provided as an argument.
    for (size_t p = 2; p * p <= number; ++p) {
        if (isPrime[p]) {
            for (size_t i = p * p; i <= number; i += p)
                isPrime[i] = false;
        }
    }

    // Creating a vector of integers to hold found prime numbers
    std::vector <uint32_t> primeList;

    // Adding found prime numbers to primeList vector
    for (size_t i = 2; i <= number; ++i) {
        if (isPrime[i])
            primeList.push_back(i);
    }

    return primeList;
}

int main() {
    Timer timer;

    // Used to store sum of primes
    auto sum{0uLL};

    // Finding all primes below 2,000,000
    auto primes = findPrimesBelowNumber(LIMIT);

    // Summing up all the found prime numbers
    for (auto &prime: primes)
        sum += prime;

    std::cout << "Problem 10: " << sum << std::endl;
}
