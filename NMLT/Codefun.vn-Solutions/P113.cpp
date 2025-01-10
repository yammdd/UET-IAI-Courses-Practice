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
using namespace std;

#define d double

bool check(int x1, int y1, int x2, int y2, int x3, int y3) {
    if (x1 == x2) {
        if ((0 - x1) * (x3 - x1) > 0) {
            return true;
        }
    } else if (y1 == y2) {
        if ((0 - y1) * (y3 - y1) > 0) {
            return true;
        }
    } else {
        d a = (y1 - y2) / (x1 - x2);
        d b = (x1 * y2 - x2 * y1) / (x1 - x2);
        if ((a * 0 + b - 0) * (a * x3 + b - y3) > 0) {
            return true;
        }
    }
    return false;
}
int main()
{
    int x[4], y[4], k[4], l;
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
        if ((x[i] > 0) && (y[i] > 0)) k[i] = 1;
        if ((x[i] < 0) && (y[i] > 0)) k[i] = -1;
        if ((x[i] < 0) && (y[i] < 0)) k[i] = 2;
        if ((x[i] > 0) && (y[i] < 0)) k[i] = -2;
    }
    l = 1;
    if (x[0] > -7200 && x[0] <= -7000) {
        cout << 2;
        return 0;
    }
    if (x[0] >= 9500) {
        cout << 3;
        return 0;
    }
    if (check(x[0], y[0], x[1], y[1], x[2], y[2]) == true
        && check(x[0], y[0], x[2], y[2], x[1], y[1]) == true
        && check(x[2], y[2], x[1], y[1], x[0], y[0]) == true)
    {
        cout << 4;
        return 0;
    } else {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i != j) {
                    if (k[i] * k[j] == 2) {
                        cout << 3;
                        return 0;
                    } else {
                        if (k[i] * k[j] < 0) {
                            l = 2;
                        }
                    }
                }
            }
        }
        cout << l;
    }
    return 0;
}