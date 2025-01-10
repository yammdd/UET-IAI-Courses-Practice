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
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int max1 = INT_MIN, max2 = INT_MIN, count = 0, z = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= max1) {
            max1 = v[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (v[i] == max1) {
            count++;
        }
    }
    vector<int> b(n - count);
    for (int i = 0; i < n; i++) {
        if (v[i] != max1) {
            b[z] = v[i];
            z++;
        }
    }
    for (int i = 0; i < n - count; i++) {
        if (b[i] > max2) {
            max2 = b[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (v[i] == max2) {
            cout << v[i] << " " << i + 1;
            break;
        }
    }
    return 0;
}