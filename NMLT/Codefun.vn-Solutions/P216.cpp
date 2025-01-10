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
    string s, x;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        x += s[i];
        if (s[i] == 's' && s[i + 1] == 'h') {
            x += " ";
        }
    }
    if (x.find("hendricks") != string::npos) {
        cout << "HENDRICKS FOUND.";
    } else {
        cout << "TRASH DOCUMENT.";
    }
    return 0;
}