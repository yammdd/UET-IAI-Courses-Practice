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
    int n, n1, n2;
    long long t = -100000;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0 ; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] * a[j] > t) {
                t = a[i] * a[j];
                n1 = i + 1;
                n2 = j + 1;
            }
        }
    }
    cout << n1 << " " << n2;
    return 0;
}
