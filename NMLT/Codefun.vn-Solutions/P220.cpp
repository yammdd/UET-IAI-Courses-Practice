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
#define ll long long
using namespace std;

int main() {
    ll n, m, k, maxx = LLONG_MIN;
    cin >> n >> m >> k;
    ll a[1005][1005];
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            int t;
            cin >> t;
            a[i][j] = a[i-1][j] + a[i][j-1] + t - a[i-1][j-1];
        }
    }
    for (ll i = k; i <= n; i++) {
        for (ll j = k; j <= m; j++) {
            maxx = max(maxx, a[i][j] - a[i][j-k] - a[i-k][j] + a[i-k][j-k]); 
        }
    }
    cout << maxx;
    return 0;
}