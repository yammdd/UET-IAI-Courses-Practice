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

int main() {
    int n;
    cin >> n;
    int g = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
        for (int j = 1;j <= n; j++){
            int a;
            cin >> a;
            if(a == 1) {
                cout << abs(g - i) + abs(g - j);
                break;
            }
        }
    return 0;
}