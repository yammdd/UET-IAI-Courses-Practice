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

bool checkConsecutiveSum(int n) {
    for (int i = 1; i <= n / 3; i++) {
        int sum = 0;
        for (int j = i; j <= i + 2; j++) {
            sum += j;
        }
        if (sum == n) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    if (checkConsecutiveSum(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}