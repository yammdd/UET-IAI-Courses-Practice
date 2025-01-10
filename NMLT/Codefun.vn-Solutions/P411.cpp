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

long long gt(int n) {
    long long gt = 1;
    for (long long i = 2; i <= n; i++)
    {
        gt *= i;
    }
    return gt;
}
int main() {
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << "Yes";
        return 0;
    }
    else {
        cout << "No";
        return 0;
    }
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += gt(i);
    }

    if (gt(n + 1) % sum == 0) {
        cout << "Yes";
    }
    else {
        cout << "N0";
    }
    return 0;
}