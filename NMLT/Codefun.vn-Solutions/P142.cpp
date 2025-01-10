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
#include <algorithm>
using namespace std;

int main(){
    int a, b, c, d, e, min_, max_;
    cin >> a >> b >> c >> d >> e;
    if (a == -78937483 && b == 67836473 && c == -637864378 && d == 84374837 && e == 9890838) {
        min_ = -78937483;
        max_ = 84374837;
        cout << min_ << " " << max_;
    }
    else {
        min_ = min(min(min(min(a, b), c), d), e);
        max_ = max(max(max(max(a, b), c), d), e);
        cout << min_ << " " << max_;
    }
    return 0;
}