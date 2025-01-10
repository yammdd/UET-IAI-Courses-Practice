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
#include <iomanip>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2) << a + b << endl;
    cout << fixed << setprecision(2) << a - b << endl;
    cout << fixed << setprecision(2) << a * b << endl;
    cout << fixed << setprecision(2) << a / b << endl;
    return 0;
}