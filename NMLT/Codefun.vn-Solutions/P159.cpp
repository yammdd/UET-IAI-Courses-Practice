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
    int count = 0;
    for (pair<int, int> it : mp) {
        if (it.second == 2) {
            count++;
        }
    }
    if (count == 2) cout << "YES";
    else cout << "NO";
    return 0;
}