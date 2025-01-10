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

int main(){
    string z;
    getline(cin, z);
    int a = 0, b = 0, c = 0;
    if (z.length() < 4) {
        cout << "Invalid";
    } else if (z.length() >= 4){
        for (int i = 0; i < z.length(); i++) {
            if (z[i] >= 65 && z[i] <= 90) {
                a++;
            }
            else if (z[i] >= 48 && z[i] <= 57) {
                b++;
            } else if (z[i] >= 97 && z[i] <= 122) {
                c++;
            }
            else {
                cout << "Invalid";
                return 0;
            }
        }
        if(a == 0 or b == 0 or c == 0 or z.length() < 8){
            cout << "Weak";
        } else {
            cout << "Strong";
        }
    }
    return 0;
}