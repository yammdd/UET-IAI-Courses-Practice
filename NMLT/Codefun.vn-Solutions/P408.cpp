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
    long long n, fib[207];
    cin >> n;
    if (n == 1) {
        cout << 0;
        return 0;
    }
    fib[0] = 1;
    fib[1] = 2;
    long long i = 1;
    while (fib[i] < n) {
        i++;
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    if (fib[i] == n)
        cout << i;
    else
        cout << i - 1;
    return 0;
}