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
    int n, quan = 0;
    cin >> n;
    for (int i = 1; i <= n ; i++) {
        int x;
        cin >> x;
        quan += x;
        if (quan < 0) {
            cout << "DEFEATED AT CITY" << " " << i;
            break;
        }
    }
    if(quan >= 0) cout << "VICTORY";
    return 0;
}