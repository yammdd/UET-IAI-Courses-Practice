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

string numberToWords(int n) {
    const string units[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const string tenToNineteen[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    const string tens[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (n < 10) {
        return units[n];
    } else if (n < 20) {
        return tenToNineteen[n - 10];
    } else if (n < 100) {
        int tenDigit = n / 10;
        int unitDigit = n % 10;
        string result = tens[tenDigit - 2];
        if (unitDigit != 0) {
            result += "-" + units[unitDigit];
        }
        return result;
    }
    return "";
}

int main() {
    int n;
    cin >> n;
    if (n >= 0 && n < 100) {
        string result = numberToWords(n);
        cout << result << endl;
    } else {
        return 0;
    }
    return 0;
}