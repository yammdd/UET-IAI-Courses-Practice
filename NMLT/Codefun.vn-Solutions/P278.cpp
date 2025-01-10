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
#define Code ios::sync_with_stdio(0);
#define By cin.tie(0);
#define Yamm cout.tie(0);
#define pb push_back
#define ll long long
using namespace std;

int main() {
    Code By Yamm
    ll n, m, sum = 0;
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (abs(x) > m)
            return 0;
        sum += x;
    }
    if (sum == 0)
        cout << 0;
    else {
        sum = abs(sum);
        if (sum <= m) {
            cout << 1;
            return 0;
        }
        else {
            if (sum % m == 0)
                cout << sum / m;
            else
                cout << sum / m + 1;
            return 0;
        }
    }
    return 0;
}
