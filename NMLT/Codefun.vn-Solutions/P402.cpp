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
    double a1, b1, a2, b2, a3, b3;
    cin >> a1 >>  b1 >> a2 >> b2 >> a3 >> b3;
    if ((a1 == a2 && b1 == b2) || (a1 == a3 && b1 == b3) || (a3 == a2 && b3 == b2)) {
        cout << "oo";
        return 0;
    } else {
        int d = 0;
        double x[3],y[3], t;
        if (a1 != a2) {
            x[d] = (b2 - b1) / (a1 - a2);
            y[d] = a1 * x[d] + b1;
            ++d;
        } 
        if (a1 != a3) {
            x[d] = (b3 - b1) / (a1 - a3);
            y[d] = a1 * x[d] + b1;
            ++d;
        }
        if (a2 != a3) {
            x[d] = (b3 - b2) / (a2 - a3);
            y[d] = a2 * x[d] + b2;
            ++d;
        }
        if (x[0] == x[1] && x[1] == x[2] && y[0] == y[1] && y[1] == y[2]) {
            cout << 1 << endl;
            cout << setprecision(2) << fixed << x[0] << " " << y[0];
            return 0;
        }
        cout << d << endl;
        for (int i = 0; i < d-1; i++) {
            for (int j = i+1; j < d; j++) {
                if (x[i] > x[j]) {
                    t = x[i];
                    x[i] = x[j];
                    x[j] = t;
                    t = y[i];
                    y[i] = y[j];
                    y[j] = t;
                } else if (x[i] == x[j] && y[i] < y[j]) {
                    t = y[i];
                    y[i] = y[j];
                    y[j] = t;
                }
            }
        }
        for (int i = 0; i < d; i++) {
            cout << setprecision(2) << fixed << x[i] << " " << y[i];
        }
    }
    return 0;
}