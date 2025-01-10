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
using namespace std;

int main(){
    double r, xA, yA, xB, yB, xC, yC, xD, yD, smax, lenAB, lenAD, sABCD;
    cin >> r >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;
    smax = r * r;
    lenAB = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
    lenAD = sqrt((xA - xD) * (xA - xD) + (yA - yD) * (yA - yD));
    sABCD = lenAB * lenAD;
    if(smax > sABCD) cout << "<";
    else if(smax < sABCD) cout << ">";
    else cout << "=";
}