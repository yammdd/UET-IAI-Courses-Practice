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
    map<int, int> mp;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    int a[5];
    int i = 0;
    for (pair<int, int> it : mp) {
        a[i] = it.second;
        i++;
    }
    if (a[0] == 3 && a[1] == 2 || a[0] == 2 && a[1] == 3) cout << "YES";
    else cout << "NO";
    return 0;
}