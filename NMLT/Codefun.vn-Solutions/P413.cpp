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
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) cout << a;
    if ((a - b) == (b - c)) {
        if (a < b) cout << c + (b - a);
        else if (a > b) cout << c - (a - b);
    }
    else if ((a / b) == (b / c)) {
        if((a / b) < 1) cout << c * (b / a);
        else if ((a / b) > 1) cout << c * (a / b);
    }
    return 0;
}