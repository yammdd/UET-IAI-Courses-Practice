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

#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int totalElements = rows * cols;

    vector<int> flatMatrix(totalElements);
    for (int i = 0; i < totalElements; i++) {
        cin >> flatMatrix[i];
    }
    sort(flatMatrix.begin(), flatMatrix.end());

    vector<vector<int>> matrix(rows, vector<int>(cols));
    int numLayers = min(rows, cols) / 2 + (min(rows, cols) % 2);
    int index = 0;
    for (int layer = 0; layer < numLayers; layer++) {
        for (int col = layer; col < cols - layer; col++) {
            matrix[layer][col] = flatMatrix[index++];
        }
        for (int row = layer + 1; row < rows - 1 - layer; row++) {
            matrix[row][cols - 1 - layer] = flatMatrix[index++];
        }
        for (int col = cols - 1 - layer; col >= layer; col--) {
            if (index == totalElements) break;
            matrix[rows - 1 - layer][col] = flatMatrix[index++];
        }
        for (int row = rows - 2 - layer; row > layer; row--) {
            if (index == totalElements) break;
            matrix[row][layer] = flatMatrix[index++];
        }
    }

    for (const auto& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}
