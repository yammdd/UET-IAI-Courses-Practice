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
    long long x, y;
    cin >> x;
    int count = 0;
    for (long long i = 1; i <= x+1; i++) {
        if (x * x % i == 0) {
            y = (x * x - i * i) / (2 * i);
            if (y > x && ((x * x - i * i) % (2 * i) == 0)) ++count;
        }
    } 
    cout << count;
    return 0;
}