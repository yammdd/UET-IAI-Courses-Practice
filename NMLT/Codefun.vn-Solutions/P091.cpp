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
    int n, count1 = 0, count2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxLen = 0;
    int currentLen = 1;
    for (int i = 1; i < n; i++) {
        if ((a[i] > 0 && a[i-1] < 0) || (a[i] < 0 && a[i-1] > 0)) {
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
            currentLen = 1;
        }
    }
    for (int j = 0; j < n; j++){
        if(a[j] < 0) {
            count1++;
        }
    }
    if(count1 == n) {
      cout<<"0";
      return 0;
    }
    for(int j = 0; j < n; j++){
        if(a[j] > 0){
            count2++;
        }
    }
    if(count2 == n) {
      cout<<"0";
      return 0;
    }
    if (currentLen > maxLen) { 
        maxLen = currentLen;
    }
    cout << maxLen << endl;
    return 0;
}