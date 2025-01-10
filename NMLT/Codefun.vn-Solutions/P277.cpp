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
    int n, m;
    cin >> n >> m;
    int a[n][m], d1 = 0, d2 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] != 1 && a[i][j] != 0)
                return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0)
                dem++;
        }
        if (dem == m) {
            d1 += m;
            c1++;
        }
    }
    for (int j = 0; j < m; j++) {
        int dem = 0;
        for (int i = 0; i < n; i++) {
            if (a[i][j] == 0)
                dem++;
        }
        if (dem == n) {
            d2 += n;
            c2++;
        }
    }
    cout << d1 + d2 - c1 * c2;
    return 0;
}