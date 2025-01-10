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

long long fac(int n) {
    long long fac = 1;
    for (int i = 2; i <= n; i++) {
        fac *= i;
    }
    return fac;
}

int main() {
    int n, k, m;
    unsigned long long t;
    cin >> k >> n;
    t = fac(k + n - 1) / (fac(k) * (fac(n - 1)));
    cout << t;
    return 0;
}