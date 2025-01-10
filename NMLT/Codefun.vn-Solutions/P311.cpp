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
#include <cmath>
using namespace std;

long sqrsum(long a[302][302],int i,int n) {
    long s = 0;
    for (int x = i; x <= n - i + 1; x++) {
        for (int b = i; b <= n - i + 1; b++) {
                s += a[x][b];
        }
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    long a[302][302];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    int i;
    long s = 0;
    if (n % 2 == 1) i = round(n / 2) + 1;
    else i = n / 2;
    while (i >= 1) {
        cout << sqrsum(a, i, n) - s << " ";
        s = sqrsum(a, i, n);
        --i;
    }
    system("pause");
    return 0;
}