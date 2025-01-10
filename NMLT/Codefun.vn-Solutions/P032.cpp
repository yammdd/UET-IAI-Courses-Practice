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

int main() {
    std::string input;
    std::cin >> input;

    int length = input.length();

    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << input[j];
        }
        std::cout << "\n";
    }

    for (int i = length - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            std::cout << input[j];
        }
        std::cout << "\n";
    }

    return 0;
}