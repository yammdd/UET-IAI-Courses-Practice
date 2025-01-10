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
#include <string>
using namespace std;

string fibo(int n) {
    string a = "A", b = "B", c;
    if (n == 1) return a;
    if (n == 2) return b;
    for (int i = 3; i <= n; i++) {
        c = b + a;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    cout <<  fibo(n) << endl;
    return 0;
}