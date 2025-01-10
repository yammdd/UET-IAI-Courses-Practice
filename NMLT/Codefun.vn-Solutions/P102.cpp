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
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int min1 = min(min(min(a, b), c),d);
    int max1 = max(max(max(a, b), c),d);

    int min2 = max(min(a, b), min(c, d));

    if (a != min1 && a != max1) {
        min2 = min(min2, a);
    }

    if (b != min1 && b != max1) {
        min2 = min(min2, b);
    }

    if (c != min1 && c != max1) {
        min2 = min(min2, c);
    }

    if (d != min1 && d != max1) {
        min2 = min(min2, d);
    }

    cout <<min2;
    return 0;
}