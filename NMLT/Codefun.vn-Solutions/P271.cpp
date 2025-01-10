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
    ll n, x;
    cin >> n >> x;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    if (x >= n) {
        if (x % n == 0) {
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            return 0;
        }
        else
            x = x % n;
    }
    for (ll i = 0; i < x; i++) {
        b[i] = a[n - x + i];
        cout << b[i] << " ";
    }
    for (ll i = x; i < n; i++) {
        b[i] = a[i - x];
        cout << b[i] << " ";
    }
    return 0;
}