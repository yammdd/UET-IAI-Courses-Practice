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
#define Code ios::sync_with_stdio(0);
#define By cin.tie(0);
#define Yamm cout.tie(0);
#define pb push_back
#define ll long long
using namespace std;

int main() {
    Code By Yamm
    int n, count = 0;
    cin >> n;
    if (n <= 0 || n >= 1000)
        return 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n / 2; ++j) {
            for (int k = 0; k <= n / 5; ++k) {
                if (i * 1 + j * 2 + k * 5 == n) {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}