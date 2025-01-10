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
    int n, minn = INT_MAX;
    cin >> n;
    int a[n];
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < minn) minn = a[i];
        mp[a[i]]++;
    }
    for (auto it : mp) {
        if (it.first == minn) {
            cout << it.first << " " << it.second;
            break;
        }
    }
    return 0;
}