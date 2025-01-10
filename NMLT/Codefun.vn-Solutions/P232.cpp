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
    int n, x, k;
    string s, y;
    map<int, string> m;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        m[x] = y;
    }
    for (int i = 0; i < k; i++) {
        cin >> x;
        if (m[x] == "") m[x] = "Not found";
        cout << m[x] << "\n";
    }
    return 0;
}