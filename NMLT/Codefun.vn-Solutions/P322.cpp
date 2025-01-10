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

int visited[100002], parrent[100002];
vector<int> adj[100002];
void dfs(int u) {
    visited[u] = 1;
    for (auto x : adj[u]) {
        if (visited[x] == 0) {
            parrent[x] = u;
            dfs(x);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    int u = n;
    stack<int> save;
    while (u != parrent[u]) {
        save.push(u);
        u = parrent[u];
    }
    while (!save.empty()) {
        cout << save.top() << " ";
        save.pop();
    }
    return 0;
}