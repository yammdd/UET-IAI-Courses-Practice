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
#define d double
using namespace std;

int main() {
    int n, t, count = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            t = (n - i) / j + 1;
            count += t - 1;
        }
    }
    cout << count;
    return 0;
}