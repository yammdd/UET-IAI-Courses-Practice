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

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a11, a12, a13, a21, a22, a23, a31, a32, a33, b1, b2, b3, x, y, z, d, dx, dy, dz;
    cin >> a11 >> a12 >> a13 >> b1;
    cin >> a21 >> a22 >> a23 >> b2;
    cin >> a31 >> a32 >> a33 >> b3;
    d = a11 * a22 * a33 + a12 * a23 * a31 + a21 * a32 * a13 - a13 * a22 * a31 - a12 * a21 * a33 - a11 * a32 * a23;
    dx = b1 * a22 * a33 + a12 * a23 * b3 + b2 * a32 * a13 - a13 * a22 * b3 - a12 * b2 * a33 - a23 * a32 * b1;
    dy = a11 * b2 * a33 + b1 * a23 * a31 + a21 * b3 * a13 - a13 * b2 * a31 - b1 * a21 * a33 - a23 * b3 * a11;
    dz = a11 * a22 * b3 + a12 * b2 * a31 + a21 * a32 * b1 - b1 * a22 * a31 - a12 * a21 * b3 - b2 * a32 * a11;
    if (d == 0) {
        if ((dx == 0) && (dy == 0) && (dz == 0))
            cout << "INF";
        else cout << "No solution";
    }
    else {
        x = dx / d;
        y = dy / d;
        z = dz / d;
        cout << setprecision(3) << fixed << x << " " << y << " " << z;
    }
    return 0;
}