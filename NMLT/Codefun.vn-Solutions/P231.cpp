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
#include <vector>
#define pb push_back
using namespace std;

int main() {
    string s;
    getline(cin, s);
    vector<char> s1, s2, s3;
    int dem1 = 0, dem2 = 0;
    for (int i = 0; i < s.length(); i++) {
        dem1++;
        s1.pb(s[i]);
        if (s[i] == ' ') break;
    }
    for (int j = dem1; j < s.length(); j++) {
        dem2++;
        s2.pb(s[j]);
        if (s[j] == ' ') break;
    }
    for (int z = dem2 + dem1; z < s.length(); z++) {
        s3.pb(s[z]);
    }
    for (char c1 : s3) cout << c1;
    cout << " ";
    for (char c2 : s2) cout << c2;
    for (char c3 : s1) cout << c3;
    return 0;
}