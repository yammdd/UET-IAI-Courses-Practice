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

bool isRegularPolygonPossible(double alpha) {
    if (alpha <= 0 || alpha >= 180)
        return false;
    double n = 360 / (180 - alpha);
    if (n != floor(n))
        return false;
    double interiorAngle = (n - 2) * 180 / n;
    if (abs(interiorAngle - alpha) < 1e-9)
        return true;
    return false;
}

int main() {
    double alpha;
    cin >> alpha;
    if (isRegularPolygonPossible(alpha))
        cout << "YES"<< endl;
    else
        cout << "NO\n";
    return 0;
}