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

int main(){
    string s;
    getline(cin, s);
    map<char,int> mp;
    for (int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }
    int m;
    cin >> m;
    char c[m];
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++) {
        if (mp.find(c[i]) != mp.end()) cout << mp[c[i]] << endl;
        else cout << 0 << endl;
    }
    return 0;
}