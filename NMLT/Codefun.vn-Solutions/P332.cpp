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

int Combination(int k, int n) {
    int r = 1; for (int i = 1; i <= k; i++, n--) r = r * n / i;
    return r;
}
int main() {
    long long k, n;
    cin >> n >> k;
    cout << Combination(n, k) << endl;
    return 0; 
}