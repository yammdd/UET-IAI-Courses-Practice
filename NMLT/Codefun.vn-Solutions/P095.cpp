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
#include <set>
using namespace std;

#define Code ios::sync_with_stdio(0);
#define by cin.tie(0);
#define Yamm cout.tie(0);

int main() {
    Code by Yamm
    int n, sum = 0, count = 0, sum_ = 0;
    cin >> n;
    int x = 1;
    while (n != 0) {
        sum += x;
        if (sum == n) {
            break;
        }
        x++;
        if (sum > n) {
          count++;
          sum = 0;
          x = count;
        }
    }
    set<int> s;
    for(int i = x; i > 0; --i){
        sum_ += i;
        s.insert(i);
        if(sum_ == n) break;
    }
    for(auto c : s) cout << c <<" ";
    return 0;
}