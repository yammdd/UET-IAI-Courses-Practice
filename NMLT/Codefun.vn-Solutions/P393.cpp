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

int fac(int n) {
    long long fac = 1;
    for (int i = 2; i <= n; i++) {
        fac *= i;
        fac = fac % 1000;
    }
    return fac;
}
int main() {
    int n;
    long long t;
    cin >> n;
    if (n >= 15) {
        cout << "0313";
        return 0;
    }
    t = 0;
    for (int i = 1; i <= n; i++) {
        t = t + fac(i);
        t = t % 1000;
    }
    if (t < 10) {
        cout << "000" << t;
    } else if (t < 100) {
        cout << "00" << t;
    } else {
        cout << "0" << t;
    }
    
}