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
    int count1 = 0, count2 = 0, a;
    for (int i = 1; i <= 5; i++) {
        cin >> a;
        if (a % 2 == 0)
          count1++;
        else
          count2++;
    }
    if(count1 == 4 || count2 == 4) cout << 1;
    else cout << 0;
    return 0;
}