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

int main(){
    string s;
    getline(cin, s);
    int count = 1;
    if (s[0] == ' ') count -= 1;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == ' ' && s[i+1] != ' ') count++;
    }
    cout << count;
    return 0;
}