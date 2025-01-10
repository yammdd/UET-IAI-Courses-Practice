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

bool isPrime(int n) {
    if (n <= 1) {
        return false;}
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++) {
        if (n % a[j] == 0 && isPrime(a[j]) && a[j] != 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}