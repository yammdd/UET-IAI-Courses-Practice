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
    int n, count1 = 0, count2 = 0;
    cin >> n;
    if (n == 1) cout << "YES";
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n % 2 == 0) {
        for (int j = 0; j < n / 2; j++) {
            if (a[j] == a[n-1-j]) count1++;
        }
        if (count1 == n/2) cout << "YES";
        else cout << "NO";}
    if (n % 2 == 1) {
        for (int z = 0; z < (n - 1) / 2; z++) {
            if((a[z] == a[n-1-z]) && a[z] != a[(n-1)/2] && a[n-1-z] !=a[(n-1)/2]) count2++; 
        }
        if (count2 == (n- 1 ) / 2) cout << "YES";
        else cout << "NO";
    }
    return 0;
}