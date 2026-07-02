#include <stdbool.h>

bool isPalindrome(int x) {
    // Negative numbers and numbers ending in 0 (except 0 itself) cannot be palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversed_half = 0;
    while (x > reversed_half) {
        // Pop the last digit from x and push it to reversed_half
        reversed_half = (reversed_half * 10) + (x % 10);
        x /= 10;
    }

    // For even digits: x == reversed_half
    // For odd digits: x == reversed_half / 10 (removes the middle digit)
    return x == reversed_half || x == reversed_half / 10;
}
