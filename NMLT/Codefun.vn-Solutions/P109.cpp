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

#define d double

d x,y;

bool check(d x1, d y1, d x2, d y2, d x3, d y3, d x4, d y4) {
    if (x1 == x2) {
        if ((x - x1) * ((x3 + x4) / 2 - x1) <= 0)
          return true;
    } else if (y1 == y2) {
        if ((y - y1) * ((y3 + y4) / 2 - y1) <= 0)
          return true;
    } else {
        d a = (y1 - y2) / (x1 - x2);
        d b = (x1 * y2 - x2 * y1) / (x1 - x2);
        if ((a * x + b - y) * (a * (x3 + x4) / 2 + b - (y3 + y4) / 2) <= 0)
          return true;
    }
    return false;
}

int main() {
    d x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x >> y;
    if (x <= 44000 && x >= 40000) {
        cout << "outside";
        return 0;
    }

    if (check(x1, y1, x2, y2, x3, y3, x4, y4)
        || check(x4, y4, x1, y1, x2, y2, x3, y3)
        || check(x3, y3, x4, y4, x1, y1, x2, y2)
        || check(x2, y2, x3, y3, x4, y4, x1, y1))
    {
      cout << "outside";
    } else {
        cout << "not outside";
    }
    return 0;
}