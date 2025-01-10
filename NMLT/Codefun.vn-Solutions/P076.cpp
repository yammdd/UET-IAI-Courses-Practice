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

bool solve(int a){
    for (int i = 1; i * i <= a; ++i){
        if (i * i == a)
            return true;
    }
    return false;
}
int main(){
    int n, a, count = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a;
        if(solve(a))
            count++;
    }
    cout << count;
}
