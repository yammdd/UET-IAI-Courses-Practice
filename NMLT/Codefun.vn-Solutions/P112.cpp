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
    double x, y;
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << 1 << " " << 2 << " " << 3 << " " << 4 << endl;
    } else if (x == 0) {
        if (y > 0) {
            cout << 1 << " " << 2 << endl;
        } else {
            cout << 3 << " " << 4 << endl;
        }
    } else if (y == 0) {
        if (x > 0) {
            cout << 1 << " " << 4 << endl;
        } else {
            cout << 2 << " " << 3 << endl;
        }
    } else {
        if (x > 0 && y > 0) {
            cout << 1 << endl;
        }
        else if (x < 0 && y > 0) {
            cout << 2 << endl;
        }
        else if (x < 0 && y < 0) {
            cout << 3 << endl;
        }
        else if (x > 0 && y < 0) {
            cout << 4 << endl;
        }
    }
    return 0;
}