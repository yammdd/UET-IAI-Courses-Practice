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
    long long int n;
    cin >> n;
    if (n >= 544 && n <= 603) cout << "Tien Ly";
    if (n >= 915 && n <= 965) cout << "Ngo";
    if (n >= 968 && n <= 980) cout << "Dinh";
    if (n >= 980 && n <= 1009) cout << "Tien Le";
    if (n >= 1010 && n <= 1225) cout << "Ly";
    if (n >= 1226 && n <= 1400) cout << "Tran";
    if (n >= 1401 && n <= 1407) cout << "Ho";
    if (n >= 1428 && n <= 1527) cout << "Hau Le";
    if (n >= 1778 && n <= 1802) cout << "Tay Son";
    if (n >= 1802 && n <= 1945) cout << "Nguyen";
    return 0;
}