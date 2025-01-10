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
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int i, j;
    cin >> i >> j;
    for (int m = i-1; m <= j-1; m++) {
        if (s[m] >= 'A' && s[m] <= 'Z') s[m] = char(s[m] + 32);
        else if(s[m]>='a' && s[m]<='z') s[m] = char(s[m] - 32);
    }
    cout << s;
    return 0;
}