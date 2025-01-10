/*
 *
 *    ____  ____        __          ____    ____     ____    ____
 *   |_  _||_  _|      /  \        |_   \  /   _|   |_   \  /   _|
 *     \ \  / /       / /\ \         |   \/   |       |   \/   |
 *      \ \/ /       / ____ \        | |\  /| |       | |\  /| |
 *      _|  |_     _/ /    \ \_     _| |_\/_| |_     _| |_\/_| |_
 *     |______|   |____|  |____|   |_____||_____|   |_____||_____|
 *
 */

#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int smallestDivisor(int n) {
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

int main() {
    int n;
    std::cin >> n;
    if (isPrime(n)) {
        std::cout << "YES" << std::endl;
    } else {
        int divisor = smallestDivisor(n);
        std::cout << divisor << std::endl;
    }
    return 0;
}
