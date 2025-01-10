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
    string c;
    for (int i = s.length() - 1; i >= 0; i--) {
        c += s[i];
    }
    int count = 0;
    for (int j = 0; j < s.length() - 1; j++) {
        if (c[j] == s[j]) count++;
    }
    if (count == s.length() - 1) cout << "YES";
    else cout << "NO";
    return 0;
}