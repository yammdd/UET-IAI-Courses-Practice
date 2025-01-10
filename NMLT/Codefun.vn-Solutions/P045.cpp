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
#include <cmath>
#include <iomanip>

int main() {
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << std::fixed << std::setprecision(0) << pow(a, b) + pow(c, d) << std::endl;
    return 0;
}
