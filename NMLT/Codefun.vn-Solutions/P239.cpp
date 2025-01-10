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
#define ll long long
using namespace std;

int main() {
    ll ta, tb, g, k = 0;
    cin >> ta >> tb >> g;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'r') k += g;
        else {
            ll x = k % (ta + tb);
            if (x < ta) {
                k += ta - x;
            }
            k += g;
        }
    }
    cout << k;
    return 0;
}