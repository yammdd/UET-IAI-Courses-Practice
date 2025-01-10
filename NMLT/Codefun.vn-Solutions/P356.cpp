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

#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Inf";
            } else {
                cout << "NO";
            }
        } else {
            cout << setprecision(2) << fixed << -c / b;
        }
    } else {
        double delta = b * b - 4 * a * c, x1, x2;
        if (delta < 0) {
            cout << "NO";
        } else if (delta == 0) {
            cout << setprecision(2) << fixed << -b / (2 * a);
        } else {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            if (x1 < x2) {
                cout << setprecision(2) << fixed << x1 << " " << x2;
            } else {
                cout << setprecision(2) << fixed << x2 << " " << x1;
            }
        }
    }
    return 0;
}