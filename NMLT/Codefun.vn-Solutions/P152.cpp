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
#include <unordered_map>
using namespace std;

int main() {
    int x[5];
    unordered_map<int, int> ump;
    for (int i = 0; i < 5; ++i) {
        cin >> x[i];
        ump[x[i]]++;
    }
    int maxCount = -1;
    int maxNumber = -1;
    for (const auto& pair : ump) {
        if (pair.second > maxCount || (pair.second == maxCount && pair.first > maxNumber)) {
            maxCount = pair.second;
            maxNumber = pair.first;
        }
    }
    cout << maxNumber << endl;
    return 0;
}