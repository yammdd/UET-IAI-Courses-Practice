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

int lucas(int n) {
    if (n == 0)
        return 2;
    if (n == 1)
        return 1;
    else{
        int ln,l1=1,l0=2;
        for(int i=2;i<=n;i++){
            ln = l1+l0;
            l0 =l1;
            l1= ln;
        }
        return ln;
    }
}

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < 1000; i++)
    {
        int num = lucas(i);
        if (isPrime(num))
            v.push_back(num);
    }
    cout << v[n - 1];
    return 0;
}