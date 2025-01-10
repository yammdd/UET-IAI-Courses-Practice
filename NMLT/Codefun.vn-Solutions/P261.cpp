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

int main () {
    long long s = 0;
    int a[100005], n, d = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin>>a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] >= 0) {
            s += a[i];
            d++;
        }
    }
    if (d == 0) cout << "0.00";
    else cout << fixed << setprecision(2) << s / (d * 1.0);
    return 0;
}