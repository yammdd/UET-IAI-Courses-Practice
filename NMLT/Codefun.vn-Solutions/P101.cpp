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
    int x;
    cin >> x;
    bool found = false;
    for (int i = 1; i <= x; i++) {
        if (i * (i + 1) == 2 * x) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}