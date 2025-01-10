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
using namespace std;

int main() {
    int n, m, maxl = 0, curl = 0;
    cin >> n >> m;
    char c;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c == 'H') curl++;
        else {
            if (c == 'L') {
                if (curl > maxl) maxl = curl;
            }
            curl = 0;
        }
    }
    if (curl > maxl) maxl = curl;
    if (maxl < m) cout << "YOLO!";
    else cout << "R. I. P";
    return 0;
}