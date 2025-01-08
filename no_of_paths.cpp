#include <iostream>
#include <vector>

using namespace std;

int countPaths(vector<vector<int>> &matrix, int x, int y, int n, int m) {
    // If out of bounds or on a 0, return 0
    if (x >= n || y >= m || matrix[x][y] == 0) return 0;
    
    // If we reached the destination, count this as a valid path
    if (x == n - 1 && y == m - 1) return 1;

    // Move right and down
    return countPaths(matrix, x + 1, y, n, m) + countPaths(matrix, x, y + 1, n, m);
}

int main() {
    int n = 8, m = 8;
    vector<vector<int>> matrix = {
        {1, 1, 0, 1, 1, 1, 0, 1},
        {1, 0, 1, 1, 0, 1, 1, 1},
        {1, 1, 1, 0, 1, 0, 1, 1},
        {0, 1, 1, 1, 1, 1, 0, 1},
        {1, 0, 1, 0, 1, 1, 1, 0},
        {1, 1, 1, 1, 0, 1, 0, 1},
        {0, 1, 0, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 1, 1, 1, 1}
    };

    int result = countPaths(matrix, 0, 0, n, m);
    cout << "Number of unique paths: " << result << endl;

    return 0;
}
