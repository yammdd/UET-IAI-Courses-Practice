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
    long long n, i, j, k, l;
    long long sum, max = -1, digits = -1;
    cin >> n;
    char c[n];
    for (i = 0; i < n; i++){
        cin >> c[i];
    }
    for (i = n; i >= 1; i--){
        for (j = n-1; j >= i-1; j--){
            sum = 0;
            for (k = j; k > j-i; k--){
                sum += int(c[k]) - 48;
            }
            if (c[j-i+1] == '0'){
                continue;
            }else{
                if (sum % 3 == 0){
                    if (max == -1){
                        max = j-i+1;
                    }else{
                        for (l = 0; l < i; l++){
                            if (int(c[j-i+1+l]) < int(c[max+l])){
                                break;
                            }else{
                                if (int(c[j-i+1+l]) > int(c[max+l])){
                                    max = j-i+1;
                                    break;
                                }
                            }
                        }
                    }
                    digits = i;
                }
            }
        }
        if (digits != -1){
            break;
        }
    }
    for (i = 0; i < digits; i++){
        cout << c[max+i];
    }
    return 0;
}