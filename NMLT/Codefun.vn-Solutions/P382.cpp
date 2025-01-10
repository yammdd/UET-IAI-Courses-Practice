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
    int n;
    cin >> n;
    d x[n], y[n], a, b, c, p, s;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    s = 0;
    for (int i = 1; i < n-1; i++) {
        a = sqrt((x[i] - x[0]) * (x[i] - x[0]) + (y[i] - y[0]) * (y[i] - y[0]));
        b = sqrt((x[i + 1] - x[0]) * (x[i + 1] - x[0]) + (y[i + 1] - y[0]) * (y[i + 1] - y[0]));
        c = sqrt((x[i] - x[i + 1]) * (x[i] - x[i + 1]) + (y[i] - y[i + 1]) * (y[i] - y[i + 1]));
        p = (a + b + c) / 2;
        s = s + sqrt(p * (p - a) * (p - b) * (p - c));
    }
    cout << setprecision(9) << fixed << s;
    return 0;
}