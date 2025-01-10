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

#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    for (int i = 1; i <= sqrt(n); ++i) {
        if(((n / i + i) / 2) * ((n / i + i) / 2) - ((n / i - i) / 2) * ((n / i - i) / 2) == n){
            return true;
            break;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    if (check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}