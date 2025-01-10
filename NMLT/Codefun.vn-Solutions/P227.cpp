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
#include <map>
using namespace std;

int d;
int main() {
    string s, x;
    map<char,int> m;
    getline(cin, s);
    getline(cin, x);
    for (int i = 0; i < s.size(); i++)
        m[s[i]] = 1;
    for (int i = 0; i < x.size(); i++)
        if (m[x[i]]) d++;
    cout << d;
    return 0;
}