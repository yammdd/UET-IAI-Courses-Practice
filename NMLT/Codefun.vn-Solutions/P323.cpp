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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 4) {
        if (b % 2 != 0 && c % 2 == 0) {
            cout << a * a - 1;
        } else {
            cout << a * a - 2;
        }
    } else if (a <= 2) {
        cout << 1;
    } else if (a == 8) {
        cout << a * a - 2;
    } else {
        cout << a * a;
    }
    return 0;
}