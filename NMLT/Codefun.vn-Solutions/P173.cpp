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
    int n, count1 = 1, count2;
    cin >> n;
    if (n < 1 || n > 10) return 0;
    cout << "*" << endl;
    for (int i = 1; i <= n; i++) {
        count1 += 2;
        for (int j = 1; j <= count1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    count2 = count1 - 2;
    for (int x = n - 1; x > 0; x--) {
        for (int y = count2; y >= 1; y--) {
            cout << "*";
        }
        count2 -= 2;
        cout << endl;
    }
    cout << "*";
    return 0;
}