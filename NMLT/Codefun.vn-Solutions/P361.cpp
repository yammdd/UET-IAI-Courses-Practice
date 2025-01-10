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
    long long a1, b1, c1, a2, b2, c2;
    long long D, Dx, Dy, x, y;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0) {
        if (Dx + Dy == 0)
            cout<<"Inf";
        else
            cout<<0;
        return 0;
    }
    x = Dx / D;
    y = Dy / D;
    if (x > y) swap(x, y);
    cout << x << " " << y;
    return 0;
}