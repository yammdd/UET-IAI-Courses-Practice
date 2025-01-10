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
    int n, m, maxx = INT_MIN, sum = 0;
    cin >> n >> m;
    vector<int> v;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += a[j][i];
        }
        v.push_back(sum);
        sum = 0;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > maxx) maxx = v[i];
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == maxx) {
            cout << maxx << " " << i + 1;
            break;
        }
    }
    return 0;
}