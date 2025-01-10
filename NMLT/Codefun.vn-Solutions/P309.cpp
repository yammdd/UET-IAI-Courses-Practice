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
#include <map>
#include <climits>
using namespace std;

int main() {
    int n, m, maxx = INT_MIN;
    cin >> n >> m;
    int a[n][m];
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] > maxx) maxx = a[i][j];
            mp[a[i][j]]++;
        }
    }
    for (auto it : mp) {
        if(it.first == maxx) cout << it.second;
    }
    return 0;
}