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
    int n, maxlen = 0, currlen = 0;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) {
            currlen++;
        } else if (a[i] < 0) {
            if (currlen > maxlen) { 
                maxlen = currlen;
            }
            currlen = 0;
        }
    }
    if (currlen > maxlen) {
        maxlen = currlen;
    }
    cout << maxlen;
    return 0;
}