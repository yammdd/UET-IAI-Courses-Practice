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
using namespace std;

int main() {
    double a, b;
    char c;
    cin >> a >> b >> c;
    if (c == '+') cout << fixed << setprecision(2) << a + b;
    if (c == '-') cout << fixed << setprecision(2) << a - b;
    if (c == '*') cout << fixed << setprecision(2) << a * b;
    if (c == '/') cout << fixed << setprecision(2) << a / b;
    return 0;
}