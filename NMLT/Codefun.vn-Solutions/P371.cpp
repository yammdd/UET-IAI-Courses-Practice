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

signed lcm(long long n, long long k) {
    return n * k / __gcd(n, k);
}

int main() {
    int n, x;
    cin >> n;
    if (n % 2 != 0) x = lcm(n - 2, lcm(n, n - 1));
    else if(n % 3 != 0) x = lcm(n - 3, lcm(n, n - 1));
    else x = lcm(n - 3, lcm(n - 2, n - 1));
    cout << x;
    return 0;
}