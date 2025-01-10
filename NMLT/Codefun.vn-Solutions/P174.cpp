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
#include <algorithm>
using namespace std;

int main() {
    int a[5], x, lcm = 1;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++) {
        x = __gcd(lcm, a[i]);
        lcm = (lcm * a[i]) / x;
    }
    cout << lcm;
    return 0;
}