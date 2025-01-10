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

double sum(double a, double b, double c, double d) {
    double x = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    return x;
}

int main() {
    int n;
    cin >> n;
    double x[n], y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    double res = sum(x[0], y[0], x[1], y[1]);
    for (int i = 2; i < n; i++) {
        res += sum(x[i], y[i], x[i-1], y[i-1]);
    }
    printf("%.6lf", res);
    return 0;
}