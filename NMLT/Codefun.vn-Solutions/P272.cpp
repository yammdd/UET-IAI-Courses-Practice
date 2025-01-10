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
    int n, x, y;
    long long t[1005];
    cin >> n;
    t[0] = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        t[i] = t[i-1] + a;
    }
    cin >> x >> y;
    long long b = abs(t[x-1] - t[y-1]);
    cout << min(b, t[n] - b);
    return 0;
}