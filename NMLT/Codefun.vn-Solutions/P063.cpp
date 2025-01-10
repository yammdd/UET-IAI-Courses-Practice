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

bool isFibonacci(int n) {
    int a = 0;
    int b = 1;
    while (b < n) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return (b == n);
}

int main() {
    int n;
    cin >> n;
    if (isFibonacci(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}