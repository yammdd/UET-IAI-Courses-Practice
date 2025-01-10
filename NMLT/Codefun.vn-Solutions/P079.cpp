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

#include<iostream>
using namespace std;

int sumDivisor(int a) {
    int sum = 0;
    for (int i = 1; i <= a; ++i){
        if(a % i == 0){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    cout << sumDivisor(n);
}