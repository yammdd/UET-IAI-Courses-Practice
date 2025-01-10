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
    int n;
    cin >> n;
    double a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0 || a[i] > 10) cout << "-1" << endl;
        if (a[i] >= 9 && a[i] <= 10) cout << "A+" << endl;
        if (a[i] < 9 && a[i] >= 8) cout << "A" << endl;
        if (a[i] < 8 && a[i] >= 7) cout << "B" << endl;
        if (a[i] < 7 && a[i] >= 6) cout << "C" << endl;
        if (a[i] < 6 && a[i] >= 5) cout << "D" << endl;
        if (a[i] < 5 && a[i] >= 0) cout << "E" << endl;
    }
    return 0;
}