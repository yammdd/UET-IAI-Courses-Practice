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
#include <iomanip>
using namespace std;

int main() {
    double n, m, k;
    cin >> n >> m >> k;
    int sum = n;
    for (int i = 0; i < k; ++i) {
        n /= m;
        sum += n;
    }
    cout << fixed << setprecision(6) << sum;
    return 0;
}