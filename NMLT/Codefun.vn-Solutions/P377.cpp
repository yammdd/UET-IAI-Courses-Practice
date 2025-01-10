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

#include <bits/stdc++.h>
using namespace std;

int main() {
    float x1, x2, x3, x4, y1, y2, y3, y4, a, b;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int k = 0;
    if (x1 == x3) {
        if ((x2 - x1) * (x4 - x1) >= 0) {
            k = 1;
        }
    } else if (y1 == y3) {
        if ((y2 - y1) * (y4 - y1) > 0) {
            k = 1;
        }
    } else {
        a = (y1 - y3) / (x1 - x3);
        b = y1 - a * x1;
        if ((a * x2 + b - y2) * (a * x4 + b - y4) > 0) {
            k = 1;
        }
    }
    if (x2 == x4) {
        if ((x1 - x2) * (x3 - x2) > 0) {
            k = 1;
        }
    } else if (y2 == y4) {
        if ((y1 - y2) * (y3 - y2) > 0) {
            k = 1;
        }
    } else {
        a = (y2 - y4) / (x2 - x4);
        b = y2 - a * x2;
        if ((a * x1 + b - y1) * (a * x3 + b - y3) > 0) {
            k = 1;
        }
    }
    if (k == 0) {
        cout << "CONVEX";
    } else {
        cout << "CONCAVE";
    }
    return 0;
}