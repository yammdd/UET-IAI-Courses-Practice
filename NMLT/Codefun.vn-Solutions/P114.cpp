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

bool isPrime(int a) {
    if (a < 2) return false;
    else {
        for (int i = 2; i < a; i++) {
            if (a % i == 0) return false;
        }
        return true;
    }
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;
    int c = 0;
    for (int i = 1; i < m; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) c += 11;
        else if (i == 4 || i == 6 || i == 9 || i == 11) c += 10;
        else if (((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0) {
            if (i == 2) c += 10;
        }
        else if(i == 2) c += 9;
    }
    for (int i=1;i<=d;i++) {
        if (isPrime(i)) c++;
    }
    cout << c;
}