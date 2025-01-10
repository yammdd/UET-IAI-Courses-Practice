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

int fac(int n) {
    if (n == 1) return 1;
    else return n * fac(n - 1);
}
int main() {
    string s;
    cin >> s;
    map<char,int> m;
    for (int i = 0; i < s.size(); ++i) {
        m[s[i]]++;
    }
    int x, p = 1;
    for (auto it : m) p *= fac(it.second);
    x = fac(s.size());
    cout << (x / p);
}