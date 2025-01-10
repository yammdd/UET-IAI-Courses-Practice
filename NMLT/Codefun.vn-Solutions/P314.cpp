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

long long C(int n) {
    if (n == 0 || n == 1)
        return 0;
    else
        return C(n - 1) + C(n - 2) + pow(2, n - 2);
}
int main() {
    int n;
    cin >> n;
    long long k;
    cout << pow(2, n) - C(n);
    return 0;
}