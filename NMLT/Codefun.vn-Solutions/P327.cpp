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

int mu(int n) {
    ll s = 1;
    for (int i = 0; i < n; i++) {
        s *= 2;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    ll x = mu(n - 2);
    cout << x;
    return 0;
}