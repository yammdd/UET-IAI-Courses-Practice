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

int main() {
    int n, sum = 0;
    cin >> n;
    int temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    string ans = n % sum == 0 ? "YES" : "NO";
    cout << ans << endl;
    return 0;
}