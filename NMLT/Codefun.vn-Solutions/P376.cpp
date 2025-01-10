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

int main(){
    long long int a, b, c;
    cin >> a >> b >> c;
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        cout << "RIGHT";
    else if ((a * a + b * b > c * c) && (a * a + c * c > b * b) && (b * b + c * c > a * a))
        cout << "ACUTE";
    else if ((a * a + b * b < c * c) || (a * a + c * c < b * b) || (b * b + c * c < a * a))
        cout << "OBTUSE";
    return 0;
}