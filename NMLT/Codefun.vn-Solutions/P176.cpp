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
using namespace std;

int main() {
    Code By Yamm
    int t;
    cin >> t;
    int minn = INT_MAX;
    vector<int> v;
    for (int i = 1; i <= sqrt(t); ++i) {
        if (t % i == 0) {
            v.pb(i);
            v.pb(t / i);
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v.size(); ++j) {
            if (abs(v[i] - v[j]) != 0 && (abs(v[i] - v[j]) < minn))
                minn = abs(v[i] - v[j]);
        }
    }
    cout << minn;
    return 0;
}