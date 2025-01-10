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

int main() {
    char inputChar;
    std::cin >> inputChar;

    if (inputChar >= 'A' && inputChar <= 'Y') {
        char outputChar = inputChar + ('a' - 'A' + 1);
        std::cout << outputChar;
    } else {
        std::cout << 'z';
    }

    return 0;
}
