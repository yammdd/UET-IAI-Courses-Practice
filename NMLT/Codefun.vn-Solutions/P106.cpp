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
    int day, month, year;
    cin >> day;
    cin >> month;
    cin >> year;
    int a = (14 - month) / 12;
    int y = year - a;
    int m = month + 12 * a - 2;
    int n = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
    if(n == 0) cout << "Sunday";
    else if(n == 1) cout << "Monday";
    else if(n == 2) cout << "Tuesday";
    else if(n == 3) cout << "Wednesday";
    else if(n == 4) cout << "Thursday";
    else if(n == 5) cout << "Friday";
    else if(n == 6) cout << "Saturday";
}