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
    int k, count = 0;
    cin >> k;
    s = ' ' + s;
    for (int i = 0; i < s.size() - 1; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == ' ') {
            continue;
        } else {
            s[i] = ' ';
        }
    }
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == ' ' && s[i+1] != ' ') {
            ++count;
            if (count == k) {
                for (int j = i+1; j < s.size(); j++) {
                    cout << s[j];
                    if (s[j+1] == 32) {
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}
