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
    long long xO, yO, r, xM, yM;
    cin >> xO >> yO >> xM >> yM >> r;
    double x = sqrt((xO - xM) * (xO - xM) + (yO - yM) * (yO - yM));
    if (x <= r) cout << "YES";
    else cout << "NO";
    return 0;
}