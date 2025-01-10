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

#include <iostream>
using namespace std;

int solve(long long i) {
    while (i % 10 == 0)
        i = i / 10;
    return i % 1000000000;
}

int main() {
    long long n, i, r = 1;
    cin >> n;
    for (long long j = 1; j <= n; j++)
    {
        i = solve(j);
        r = r * i;
        r = solve(r);
    }
    cout << r % 10;
    return 0;
}