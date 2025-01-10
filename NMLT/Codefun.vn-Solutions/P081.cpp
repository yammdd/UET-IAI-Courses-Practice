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

int main(){
    int a, b;
    string s;
    cin >> a >> b;
    string c = to_string(a) + to_string(b);
    for (int i = c.length() - 1; i >= 0; --i) {
        s += c[i];
    }
    cout << s << endl;
    return 0;
}