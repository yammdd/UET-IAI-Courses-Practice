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

#include <string>
#include <iostream>
using namespace std;

string csl(string a, string b) {
    int du  = 0;
    int mid = 0;
    string res = "";
    a.insert(0, max(0, (int) (b.length() - a.length())), '0');
    b.insert(0, max(0, (int) (a.length() - b.length())), '0');
    for (int i = a.length()-1; i >= 0; --i) {
        mid = ((int) a[i] - 48) + ((int) b[i] - 48) + du;
        du  = mid / 10;
        res = (char) (mid % 10 + 48) + res;
    }
    if (du > 0) res = "1" + res;
    return res;
}

int main() {
    int m, n, i;
    cin >> m >> n;
    string s, s1, s2;
    for (i = 1; i <= m; i++) {
        cin >> s;
        s1 += s;
    }
    for (i = 1; i <= n; i++) {
        cin >> s;
        s2 += s;
    }
    s = csl(s1, s2);
    i = 1;
    while (i <= s.length()) {
        cout << s[i-1];
        if (i % 50 == 0) cout << endl;
        i++;
    }
    return 0;
}