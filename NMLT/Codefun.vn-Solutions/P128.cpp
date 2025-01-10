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
    long long int  a, b, c;
    cin >> a >> b >> c;
    if (a < 0 || a > 10 || b < 0 || b > 10 || c < 0 || c > 10) return 0;
    if (((a + b + c) >= 15 && a >= 4 && b >= 4 && c >= 4) && a >= 5 && b >= 5 && c >= 5)
      cout << "Excellent";
    else if(((a + b + c) >= 15 && a >= 4 && b >= 4 && c >= 4) && (a < 5 || b < 5 || c < 5))
      cout << "Medium";
    else if((a + b + c) < 15 || a < 4 || b < 4 || c < 4)
      cout << "Fail";
    return 0;
}