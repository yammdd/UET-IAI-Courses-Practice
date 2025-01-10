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
#define d double
using namespace std;
    
int main() {
    d x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int dem = 0;
    if (x1 == x2) {
        if ((x4 - x1) * (x3 - x1) >= 0) {
            ++dem;
        }
    } else if (y1 == y2) {
        if ((y4 - y1) * (y3 - y1) >= 0) {
            ++dem;
        }
    } else {
        d a = (y1 - y2) / (x1 - x2);
        d b = (x1 * y2 - x2 *y1) / (x1 - x2);
        if ((a * x4 + b - y4) * (a * x3 + b -y3) >= 0) {
            ++dem;
        }
    }
    if (x1 == x3) {
        if ((x4 - x1) * (x2 - x1) >= 0) {
            ++dem;
        }
    } else if (y1 == y3) {
        if ((y4 - y1) * (y2 - y1) >= 0) {
            ++dem;
        }
    } else {
        d a = (y1 - y3) / (x1 - x3);
        d b = (x1 * y3 - x3 * y1) / (x1 - x3);
        if ((a * x4 + b - y4) * (a * x2 + b - y2) >= 0) {
            ++dem;
        }
    }
    if (x2 == x3) {
        if ((x4 - x2) * (x1 - x2) >= 0) {
            ++dem;
        }
    } else if (y2 == y3) {
        if ((y4 - y2) * (y1 - y2) >= 0) {
            ++dem;
        }
    } else {
        d a = (y2 - y3) / (x2 - x3);
        d b = (x2 * y3 - x3 * y2) / (x2 - x3);
        if ((a * x4 + b - y4) * (a * x1 + b - y1) >= 0) {
            ++dem;
        }
    }
    if (dem == 3) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}