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
#include <unordered_set>
using namespace std;

bool a26(const string& str) {
    if (str.length() < 26) {
        return false;
    }
    unordered_set<char> letters;
    for (char c : str) {
        if (isalpha(c)) {
            letters.insert(tolower(c));
        }
    }
    return letters.size() == 26;
}
int main() {
    string S;
    getline(cin, S);
    bool isAllLetters = a26(S);
    if (isAllLetters) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}