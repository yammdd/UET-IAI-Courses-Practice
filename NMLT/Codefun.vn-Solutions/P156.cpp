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
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() < 5) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}