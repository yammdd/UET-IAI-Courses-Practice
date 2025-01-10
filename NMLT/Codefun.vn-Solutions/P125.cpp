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
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c;
    if (a == 0) {
        d = -c / b;
        cout << fixed << setprecision(2) << d << endl;
        return 0;
    }
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > x2)
            cout << fixed << setprecision(2) << x2 << " " << x1 << endl;
        else
            cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        cout << fixed << setprecision(2) << x << endl;
    } else {
        cout << "No solution" << endl;
    }
    return 0;
}