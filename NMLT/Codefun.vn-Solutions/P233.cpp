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
#include <vector>
using namespace std;

int main(){
    char c;
    vector<int> d(200, 0);
    while (cin >> c) d[c]++;
    for (int i = '9'; i >= '0'; i--)
        if (d[i] > 0)
            for (int j = 0; j < d[i]; j++)
              cout << (char)i;
    cout << '\n';
    
    for (int i = '1'; i <= '9'; i++)
        if (d[i] > 0) {
            cout << (char)i;
            d[i]--;
            break;
        }

    for (int i = '0'; i <= '9'; i++)
        if (d[i] > 0)
            for (int j = 0; j < d[i]; j++)
              cout << (char)i;
    return 0;
}