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

int n, d[105], a[105], cnt;
bool check() {
    if (d[2 * n] != n) return 0;
    for (int i = 1; i <= 2 * n; i++) {
        if (d[i] > i - d[i]) return 1;
    }
    return 0;
}

void solve(int x) {
    if (x == 2 * n + 1) {
        if (check()) {
            cnt++;
        }
        return;
    }
    for (int i = 0; i <= 1; i++) {
        a[x] = i;
        d[x] = d[x-1] + i;
        solve(x +1);
        d[x] -= i;
    }
}

int main() {
    cin >> n;
    solve(1);
    cout << cnt;
    return 0;
}