#include <string>

#include "benchmark/timer.hpp"

// Checks if given integer is a palindrome by comparing first to last, second to last - 1 and so on
bool isPalindrome(uint32_t x) {
    auto number = std::to_string(x);

    for (size_t i = 0; i < number.length() / 2; i++) {
        if (number.at(i) != number.at(number.length() - (i + 1)))
            return false;
    }

    return true;
}

int main() {
    Timer timer;

    int max{};

    // Iterates through possible results and check if they are palindromes
    for (size_t i = 999; i > 99; i--) {
        for (size_t j = 999; j > 99; j--) {
            auto result = i * j;
            if (isPalindrome(result) && result > max) {
                max = result;
            }
        }
    }

    std::cout << "Problem 4: " << max << std::endl;
}
