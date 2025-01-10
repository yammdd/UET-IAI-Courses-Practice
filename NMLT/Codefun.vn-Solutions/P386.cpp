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

#define d double
#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main() {
    ll s = 0;
    int n;
    cin >> n;
    ll x[n],y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 1; i < n; i++) {
        s = s + sqrt((x[i] - x[i-1]) * (x[i] - x[i-1]) + (y[i] - y[i-1]) * (y[i] - y[i-1]));
    }
    s = s + sqrt((x[n-1] - x[0]) * (x[n-1] - x[0]) + (y[n-1] - y[0]) * (y[n-1] - y[0]));
    cout << s;
    return 0;
}