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

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, maxx = INT_MIN, minn = INT_MAX, s1 = 0, s2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > maxx) maxx = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < minn) minn = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            s1 += (maxx - a[i]);
        }
        else {
            s2 += (a[i] - minn);
        }
    }
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}