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
    string s;
    cin >> s;
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') count1++;
        if (s[i] >= 'a' && s[i] <= 'z') count2++;
        if (s[i] >= 'A' && s[i] <= 'Z') count3++;
    }
    if (count1 > 0 && count2 > 0 && count3 > 0) cout << "Perfect";
    else cout << "Not perfect";
    return 0;
}