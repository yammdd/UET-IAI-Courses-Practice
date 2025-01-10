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

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
    int year;
    cin >> year;
    map<int, string> chp = { 
        {1930, "Uruguay"}, {1934, "Italy"}, {1938, "Italy"}, {1950, "Uruguay"},
        {1954, "West Germany"}, {1958, "Brazil"}, {1962, "Brazil"}, {1966, "England"},
        {1970, "Brazil"}, {1974, "West Germany"}, {1978, "Argentina"}, {1982, "Italy"},
        {1986, "Argentina"}, {1990, "West Germany"}, {1994, "Brazil"},{1998, "France"},
        {2002, "Brazil"}, {2006, "Italy"}, {2010, "Spain"}, {2014, "Germany"}
    };
    if (chp.count(year) > 0) cout << chp[year];
    else cout << "Vietnam";
    return 0;
}