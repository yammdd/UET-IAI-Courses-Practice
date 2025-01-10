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
    int n, d;
    cin >> n >> d;
    int a[n + 2];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int t = 0, c = 0;
    a[0] = 0;
    int i = 1;
    while (i <= n) {
        if (a[i] < a[c] + d) {
            i++;
        }
        else {
            c = i;
            i++;
            t++;
        }
    }
    cout << t;
    return 0;
}