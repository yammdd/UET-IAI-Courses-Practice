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

int main() {
    string str;
    getline(cin, str);
    int countA = 0, countB = 0, countC = 0, count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a')
            countA++;
        else if (str[i] == 'b')
            countB++;
        else if (str[i] == 'c')
            countC++;
        else if (str[i] == '.')
            count += 0;
        else
            count++;
    }
    cout << countA << endl;
    cout << countB << endl;
    cout << countC << endl;
    cout << count << endl;
    return 0;
}