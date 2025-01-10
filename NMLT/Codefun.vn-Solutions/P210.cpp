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

#include<bits/stdc++.h>
#define Code ios::sync_with_stdio(0);
#define By cin.tie(0);
#define Yamm cout.tie(0);
using namespace std;

int main() {
    Code By Yamm
    string s;
    cin >> s;
    int count = 0, m1 = 0, m2 = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 68) count++;
        if (s[i] == 68 && s[i+1] != 68) {
            if (count > m1) {
                m2 = m1;
                m1 = count;
            }
            else if (count > m2) {
                m2 = count;
            }
            count = 0;
        }
    }
    cout << m1 + m2;
    return 0;
}