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
    int n, k, t, l;
    cin >> n;
    int a[n];
    k = 1;
    for (int i = 0; i < n; i++) {
        cin >>  a[i];
    }
    l = 1;
    while (l > 0) {
        sort(a, a + n);
        l = a[n-1] - a[0];
        k = a[n-1] % a[0];
        if (k == 0) a[n-1] = a[0];
        else a[n-1] =  k;
    }
    t = 0;
    for (int i = 0; i < n; i++) {
        t += a[i];
    }
    cout << t;
    return 0;
}