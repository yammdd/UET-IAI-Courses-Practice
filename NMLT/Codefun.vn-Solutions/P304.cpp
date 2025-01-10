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
#define Code ios::sync_with_stdio(0);
#define By cin.tie(0);
#define Yamm cout.tie(0);
#define pb push_back
#define ll long long
using namespace std;

int main() {
    Code By Yamm
    int n, m, c;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> c;
        for (int j = 0; j < n; j++) {
            if ((j + 1) == c) {
                a[j] = INT_MIN;
            }
        }
        for (int j = 0; j < n; j++) {
            if (a[j] != INT_MIN)
                cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}