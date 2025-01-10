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

bool isPrime(int n){
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
int main() {
    int n;
    cin >> n;
    if (isPrime(n)) cout << 1;
    else cout << 0;
    return 0;
}