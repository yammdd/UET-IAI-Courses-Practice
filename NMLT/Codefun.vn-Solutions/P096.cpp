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
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, m, d = 0;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    vector<vector<int>> e(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        int b = INT_MAX;
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] < b) b = a[i][j];
        }
        for (int j = 0; j < m; j++) {
            if (a[i][j] == b) e[i][j] = 1;
        }
    }

    for (int j = 0; j < m; j++) {
        int b = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (a[i][j] > b) b = a[i][j];
        }
        for (int i = 0; i < n; i++) {
            if (a[i][j] == b && e[i][j] == 1) d++;
        }
    }

    cout << d;
    return 0;
}
