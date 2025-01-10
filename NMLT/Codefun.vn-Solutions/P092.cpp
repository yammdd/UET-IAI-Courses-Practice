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

int main(){
    int n, k, maxlen = 0, curlen = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % k == 0) curlen++;
        else if(a[i] % k != 0) {
            if(curlen > maxlen) {
                maxlen = curlen;
            }
            curlen = 0;
        }
    }
    if(curlen > maxlen) maxlen = curlen;
    cout << maxlen;
    return 0;
}