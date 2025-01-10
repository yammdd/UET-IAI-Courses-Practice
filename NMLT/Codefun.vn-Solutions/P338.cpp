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

int n, m, k, cnt, a[19999];
bool check(int x) {
    for (int i = 1; i <= x; i++) {
        if (a[i] > n || a[i] < 1) {
            return 0;
        }
    } 
    return 1;
}
void solve(int x, int y) {
    if (x == k +1) {
        if (check(x - 1)) ++cnt;
        return;
    }
    for (int i = y; i <= n; i++) {
        a[x] = i;
        solve(x + 1, i);
    }
}
int main() {
    cin >> k >> n;
    solve(1, 1);
    cout << cnt;
    return 0;
}