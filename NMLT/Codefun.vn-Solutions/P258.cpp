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
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int count1 = 0, count2 = 0;
    if (a.size() != b.size()) return 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) count1++;
        else if((a[i] == (b[i] - 32)) || (a[i] == (b[i] + 32))) count2++;
    }
    if (count1 == a.size()) cout << 1;
    else if(count2 == a.size()) cout << 2;
    else cout << 3;
    return 0;
}