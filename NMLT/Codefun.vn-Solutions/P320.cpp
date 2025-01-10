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

long long x(int num) {
    if (num <= 1) {
        return 1;
    }
    return num * x(num - 1);
}

long long y(int k, int n) {
    if (k > n) {
        return 0;
    }
    return x(n) / (x(k) * x(n - k));
}

int main() {
    int k, n;
    cin >> k >> n;
    if (k > n) return 0;
    long long result = y(k, n);
    cout << result << endl;
    return 0;
}