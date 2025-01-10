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
    int n, m, c[10000], count, t;
    char a[100][100], b[10000];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    count = 0;
    for (int i = 1; i < n-1; i++) {
        for (int j = 1; j < m-1; j++) {
            if (a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1] && a[i][j] == a[i+1][j] && a[i][j] == a[i][j+1]) {
                t = 0;
                for (int k = 0; k < count; k++) {
                    if (a[i][j] == b[k]) {
                        c[k]++;
                        t = 1;
                    }
                }
                if (t == 0) {
                    b[count] = a[i][j];
                    c[count] = 1;
                    count++;
                }
            }
        }
    }
    for (int i = 97; i <= 122; i++) {
        for (int j = 0; j < count; j++) {
            if (b[j] == i) {
                cout << b[j] << " " << c[j] << endl;
            }
        }
    }
    return 0;
}