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
    int n, m, u, v;
    cin >> n >> m >> u >> v;
    cout << 2 * (fac(m - 2) / (fac(n - 1) * fac(m - n - 1))) + fac(m - 2) / (fac(n) * fac(m - n - 2));
    return 0;
}