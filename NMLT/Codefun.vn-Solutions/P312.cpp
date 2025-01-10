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
    long long n;
    cin >> n;
    if (n == 0 || n == 1 || n == 2) cout << 1;
    if (n < 0 || n > 10) return 0;
    if (n >= 3) {
        long long fn, f0 = 1, f1 = 1;
        for (int i = 3; i <= n; i++) {
            fn = f1 + f0;
            f0 = f1;
            f1 = fn;
        }
        cout << fn;
    }
    return 0;
}