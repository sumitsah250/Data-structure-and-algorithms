#include <iostream>
#include <vector>

using namespace std;

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

int n = 8, m = 8;
vector<vector<char>> pathMatrix(n, vector<char>(m, ' '));
vector<vector<int>> visited(n, vector<int>(m, 0));
int totalPaths = 0;

// Function to print a matrix with paths visualized
void printPath() {
    cout << "Path Solution #" << totalPaths << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j] == 1) cout << " * ";  // Mark path
            else if (matrix[i][j] == 0) cout << " X ";  // Blocked cell
            else cout << " . ";  // Open cell
        }
        cout << endl;
    }
    cout << "\n--------------------------------\n";
}

// Function to find all paths
void findPaths(int x, int y) {
    if (x >= n || y >= m || matrix[x][y] == 0 || visited[x][y]) return;

    if (x == n - 1 && y == m - 1) {
        totalPaths++;
        visited[x][y] = 1;
        printPath();
        visited[x][y] = 0;
        return;
    }

    visited[x][y] = 1;  // Mark current position

    // Move Right
    findPaths(x, y + 1);

    // Move Down
    findPaths(x + 1, y);

    visited[x][y] = 0;  // Backtrack
}

int main() {
    cout << "Finding all paths from (0,0) to (7,7)...\n";
    findPaths(0, 0);
    cout << "Total Unique Paths: " << totalPaths << endl;
    return 0;
}
