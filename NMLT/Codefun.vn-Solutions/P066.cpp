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
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    double sum = 0;
    int count = 0;
    int temp = abs(n);

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        count++;
        temp /= 10;
    }

    double average = sum / count;
    cout << fixed << setprecision(2) << average << endl;
    return 0;
}