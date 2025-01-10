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
#include <algorithm>
using namespace std;

string createsNumber(string S, int k) {
    if (k >= S.length()) {
        return "0";
    }
    for (int i = 0; i < k; i++) {
        int j = 0;
        while (j < S.length() - 1 && S[j] <= S[j + 1]) {
            j++;
        }
        S.erase(S.begin() + j);
    }
    return S;
}
int main() {
    string s;
    int k;
    cin >> k;
    cin >> s;
    string sNumber = createsNumber(s, k);
    cout << sNumber << endl;
    return 0;
}