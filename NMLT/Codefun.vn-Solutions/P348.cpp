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

int tribo(int n) {
    if (n == 1 || n == 2) return 1;
    else {
        int fn, f0 = 0, f1 = 1, f2 = 1;
        for (int i = 3; i <= n; ++i) {
            fn = f0 + f1 + f2;
            f0 = f1;
            f1 = f2;
            f2 = fn;
        }
        return fn;
    }
}
int main() {
    int n;
    cin >> n;
    if (n <= 0 || n > 10) return 0;
    else cout << tribo(n);
    return 0;
}