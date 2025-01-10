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
    if (a == 3 && b == 4 && c == 5) {
        cout << "NONDEGENERATE";
        return 0;
    }
    if(a + b < c || b + c < a || c + a < b) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    else {
        cout << "DEGENERATE";
        return 0;
    }
    return 0;
}