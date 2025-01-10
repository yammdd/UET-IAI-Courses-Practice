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
    int a, b, c, t;
    cin >> a >> b >> c >> t;
    int count = 0;
    if (a != 0 && b != 0 && c != 0 && t >= 0) {
        for (int x = 0; x <= t / a; x++) {
            for (int y = 0; y <= (t - a * x) / b; y++) {
                int z = (t - a * x - b * y) / c;
                if (a * x + b * y + c * z == t) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}