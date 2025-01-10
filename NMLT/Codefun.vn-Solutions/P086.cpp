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
    int n, sum;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int sumArray = a[0];
    for (int i = 1; i < n; ++i) {
        sumArray += a[i];
        a[i] = a[i] + a[i-1];
    }
    for (int i = 0; i < n; ++i) {
        if(sumArray % a[i] == 0) {
            sum = a[i];
            int check =0;
            int count =1;
            for(int j = i; j < n; ++j){
                check = 1;
                if(a[j] == sum * (count + 1)){
                    count += 1;
                }
                else if(a[j] > sum * (count + 1)){
                    check = 0;
                    break;
                }
            }
            if(check == 1) {
                cout << count;
                break;
            }
        }
    }
    return 0;
}