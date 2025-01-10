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
#include <string>
using namespace std;

int main() {
    string a, b;
    int n, k;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        k--;
        if (k >= a.size() || k >= b.size()) cout << "No";
        else if (a[k] == b[k]) cout << "Yes";
        else cout << "No";
        cout << '\n';
    }
    return 0;
}