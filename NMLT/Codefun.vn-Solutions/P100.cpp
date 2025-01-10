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

int sum( int arr[], int n ,int m) {
    int s, i;
    s = 0;
    if (n == m) return arr[n];
    for (i=n;i<=m;i++) {
        s += arr[i];
    }
    return s;
}

int main() {
    int m, k, i;
    cin >> m >> k;
    int a[m];
    for (i = 1; i <= m; i++) {
        cin >> a[i];
    }
    for (i = 1; i <= m; i++) {
        if (sum(a, 1, i) == k * sum(a, i + 1, m)) {
            cout << i << " " << m - i;
            return 0;
        }
        if (sum(a, 1, i) * k == sum(a, i + 1, m)) {
            cout << i << " " << m - i;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}