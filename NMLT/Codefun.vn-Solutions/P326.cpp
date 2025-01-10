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
#define foe(i, a, b) for (int i = a; i <= b; i++)
#define fol(i, a, b) for (int i = a; i < b; i++)

int visited[200];
vector <int> adj[200];
int cnt = 0, n;
void dfs(int u) {
    visited[u] = 1;
    for(auto x : adj[u]) {
        if (x == n) cnt++;
        if (visited[x] == 0) dfs(x);
        visited[x] = 0;
    }
}

int main() {
    cin >> n;
    foe(i, 1, n - 1)
        adj[i].push_back(i + 1);
    foe(i, 1, n - 1) {
        int x;
        cin >> x;
        if(x != i + 1 && x != i)
            adj[i].push_back(x);
    }
    foe(i, 1, n - 1)
        sort(adj[i].begin(), adj[i].end());
    dfs(1);
    cout << cnt;
    return 0;
}
