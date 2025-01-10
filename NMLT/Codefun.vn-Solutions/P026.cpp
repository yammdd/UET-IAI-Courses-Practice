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
    int a, b, c;
    int min = std::min(std::min(a, b), c);
    int max = std::max(std::max(a, b), c);
    int mid = a + b + c - min - max;
    std::cout << min << " " << mid << " " << max;
    return 0;
}
