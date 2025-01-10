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
#include <algorithm>    
#include <unordered_set> 
#include <string>
using namespace std;

void check(int arr[6], int &index, int &max, int &a) {
    for (int i = 0; i < 6; i++) {
        if (arr[i] == arr[i + 1])
            index ++;
        else {
            if (index > max) max = index;
            index = 1;
            a++;
        }
    }
}

int main() {
    int arr[6];
    int index = 1;
    int  max = 1 ;
    string s = "Alien";
    int a = -1;
    for (int i = 0; i < 6; i++)
        cin >> arr[i];
    sort(arr, arr + 6);
    check(arr, index, max, a);
    unordered_set<int> arrnew(arr, arr + 6);
    if (arrnew.size() <=3) {
        if ((max == 4 && a == 2) || max == 5) s = "Bear";
        if (max == 6 || (max == 4 && a == 1)) s = "Elephant";
    }
    cout << s;
    return 0;
}