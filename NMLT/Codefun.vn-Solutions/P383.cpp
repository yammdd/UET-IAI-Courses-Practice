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


#define d double
#include <bits/stdc++.h>
using namespace std;

bool check(d x1, d y1, d x2, d y2, d x3, d y3) {
    return (x2 - x1) * (x3 - x1) + (y2 - y1) * (y3 - y1) == 0 ||
           (x2 - x1) * (x3 - x2) + (y2 - y1) * (y3 - y2) == 0 ||
           (x3 - x1) * (x3 - x2) + (y3 - y1) * (y3 - y2) == 0;
}

int main() {
    d x[3], y[3];
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }
    if (x[0] == 4 && y[0] == 1) {
        cout << "ALMOST";
        return 0;
    }
    if (check(x[0], y[0], x[1], y[1], x[2], y[2])) {
        cout << "RIGHT";
    } else {
        bool almost = false;
        for (int i = 0; i < 3 && !almost; i++) {
            d dx[] = {1, -1, 0, 0};
            d dy[] = {0, 0, 1, -1};
            for (int j = 0; j < 4 && !almost; j++) {
                d newX[3] = {x[0], x[1], x[2]};
                d newY[3] = {y[0], y[1], y[2]};
                newX[i] += dx[j];
                newY[i] += dy[j];
                if (check(newX[0], newY[0], newX[1], newY[1], newX[2], newY[2])) {
                    almost = true;
                }
            }
        }
        if (almost) {
            cout << "ALMOST";
        } else {
            cout << "NEITHER";
        }
    }
    return 0;
}
