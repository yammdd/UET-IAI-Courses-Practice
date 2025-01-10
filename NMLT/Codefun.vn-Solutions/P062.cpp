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

int main(){
    int n;
    cin >> n;

    long long fibo[50];
    fibo[0] = 0;
    fibo[1] = 1;

	for(int i = 2; i < 50; ++i){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}

	for (int j = 49; j >= 0; --j){
		if(fibo[j] <= n){
			cout << fibo[j];
			break;
		}
	}
    return 0;
}