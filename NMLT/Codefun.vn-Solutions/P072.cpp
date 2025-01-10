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

int solve(int n){
    int s = sqrt(n);
    if (s * s == n)
        return 1;
    return 0;
}
int main(){
    int n;
    cin >> n;
    for (int i = n; i <= 100000; ++i){
        if (solve(i)){
          cout << i << endl;
          break;
        }
    }
    return 0;
}