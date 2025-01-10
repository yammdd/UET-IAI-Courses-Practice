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
#define ll long long
#define pb push_back
using namespace std;

int n, x, ans = 0;
bool b[43];
vector<int> a[43];

void dfs(int u) {
    b[u] = 1;
    if (u == n) ans++;
    for (int i = 0; i < a[u].size(); i++)
        if (b[a[u][i]] == 0) {
            dfs(a[u][i]);
        }
    b[u] = 0;
}

int main() {
    cin >> n;
    for (int i = 1; i < n - 1; i++) {
        a[i].pb(i + 1);
        a[i].pb(i + 2);
    }
    a[n - 1].pb(n);
    dfs(1);
    cout << ans;
    return 0;
}