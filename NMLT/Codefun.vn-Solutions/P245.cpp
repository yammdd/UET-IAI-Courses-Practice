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
    int z = 0;
    while (z < s.length()) {
        if (s[z] < 'A' || s[z] > 'Z') cout << s[z];
        else if (s[z] >= 'A' && s[z] <= 'Z') {
            printf("%c", s[z] + 32);
        }
        z++;
    }
    return 0;
}