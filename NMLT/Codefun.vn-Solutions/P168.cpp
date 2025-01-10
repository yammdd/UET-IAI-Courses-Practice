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
using namespace std;

int main() {
    int n, x;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }
    cin >> x;
    if (mp.find(x) != mp.end()) {
        cout << mp[x];
    } else {
        cout << "0";
    }
    return 0;
}