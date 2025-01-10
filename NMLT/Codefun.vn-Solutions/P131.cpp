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
#include <set>
using namespace std;

int main() {
    int n, p, q;
    set<int> s;
    cin >> n;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size() == n) cout << "WIN";
    else cout << "LOSE";
    return 0;
}