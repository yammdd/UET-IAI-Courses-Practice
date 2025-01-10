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
#include <iomanip>

int main() {
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (a != 0) {
        std::cout << std::fixed << std::setprecision(2) << (a + b) + (b - c) + (c * d) + (d / a) << std::endl;
    }

    return 0;
}
