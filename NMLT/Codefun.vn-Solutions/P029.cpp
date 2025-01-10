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

int main() {
    long long int a, b, c;
    std::cin >> a >> b >> c;

    long long int a2 = a * a;
    long long int b2 = b * b;
    long long int c2 = c * c;

    if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
        std::cout << 0;
    } else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2) {
        std::cout << 1;
    } else {
        std::cout << 2;
    }

    return 0;
}
