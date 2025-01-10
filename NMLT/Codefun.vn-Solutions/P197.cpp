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
using namespace std;

int n, maxx = INT_MIN;
int main() {
    Code By Yamm
    cin >> n;
    set<int> s;
    if (n >= 100 || n <= 0) return 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto& m : s){
        if(m > maxx) maxx=m;
    }
    cout << maxx;
    return 0;
}