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

bool isSquare(int n) {
    for(int i = 1; i * i <= n; i++) {
        if (i * i == n)
            return true;
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    if (isSquare(n)) cout << 1;
    else cout << 0;
    return 0;
}