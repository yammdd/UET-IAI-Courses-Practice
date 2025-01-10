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
    int n, maxlen = 0, curlen = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) {
            if (a[i] > a[i-1]) { 
                curlen++;
            } else { 
                if (curlen > maxlen) {
                    maxlen = curlen;
                }
                curlen = 1;
            }
        }
    }
    if (curlen > maxlen) { 
        maxlen = curlen;
    }
    cout<<maxlen;
    return 0;
}