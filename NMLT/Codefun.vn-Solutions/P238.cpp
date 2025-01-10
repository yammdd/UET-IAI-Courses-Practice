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
using namespace std;

int main() {
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == 1) cout << "w";
        else if (s[i] == 2) cout << "v";
        else if (s[i] == 3) cout << "u";
        else if (s[i] == 4) cout << "t";
        else if (s[i] == 5) cout << "s";
        else if (s[i] == 6) cout << "r";
        else if (s[i] == 7) cout << "q";
        else if (s[i] == 8) cout << "p";
        else if (s[i] == 9) cout << "o";
        else if (s[i] == 10) cout << "n";
        else if (s[i] == 11) cout << "m";
        else if (s[i] == 12) cout << "l";
        else if (s[i] == 13) cout << "k";
        else if (s[i] == 14) cout << "j";
        else if (s[i] == 15) cout << "i";
        else if (s[i] == 16) cout << "h";
        else if (s[i] == 17) cout << "g";
        else if (s[i] == 18) cout << "f";
        else if (s[i] == 19) cout << "e";
        else if (s[i] == 20) cout << "d";
        else if (s[i] == 21) cout << "c";
        else if (s[i] == 22) cout << "b";
        else if (s[i] == 23) cout << "a";
        else if (s[i] == 24) cout << "z";
        else if (s[i] == 25) cout << "y";
        else if (s[i] == 26) cout << "x";
        else if (s[i] == 27) cout << " ";
    }

    return 0;
}