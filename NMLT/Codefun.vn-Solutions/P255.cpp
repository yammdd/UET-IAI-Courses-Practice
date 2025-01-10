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
    int countS = 0, countT = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 's' || s[i] == 'S') countS++;
        if (s[i] == 't'||  s[i] == 'T') countT++;
    }
    if (countS >= countT) cout << "France";
    else cout << "English";
    return 0;
}