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
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    double a = (y[1] - y[0]) / (x[1] - x[0]);
    double b = y[0] - a * x[0];
    for (int i = 2; i < n; i++) {
        if (a * x[i] + b != y[i]) {
            cout << "KHONG";
            return 0;
        }
    }
    cout << "CO";
    return 0;
}