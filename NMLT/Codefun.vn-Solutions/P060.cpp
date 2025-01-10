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

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); ++i){
        if(a % i == 0)
            return false;
    }
    return a > 1;
}

int main(){
    int n;
    cin >> n;
    for (int a = n; a > 2; --a){
        if (isPrime(a)){
            cout << a;
            break;
        }
    }
}