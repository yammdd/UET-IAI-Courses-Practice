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
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "inf" << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            cout << 1 << endl;
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (a == 1 && b == 0 && c == 1) {
            cout << 2;
            return 0;
        } else if (delta > 0) {
            cout << 2;
        } else if (delta == 0) {
            cout << 1;
        } else {
            cout << 0;
        }
    }
    return 0;
}