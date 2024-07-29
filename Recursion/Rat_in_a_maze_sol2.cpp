#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
  public:
  
    bool isSafe(int x, int y, vector<vector<int>>& maze, int row, int col, vector<vector<bool>>& visited) {
        return (x >= 0 && x < row && y >= 0 && y < col && maze[x][y] == 1 && !visited[x][y]);
    }
  
    void mazeHelper(vector<vector<int>>& maze, int row, int col, int i, int j, vector<vector<bool>>& visited, vector<string>& path, string output) {
        // Base Case
        if (i == row - 1 && j == col - 1) {
            path.push_back(output);
            return;
        }
    
        // Move Down
        if (isSafe(i + 1, j, maze, row, col, visited)) {
            visited[i + 1][j] = true;
            mazeHelper(maze, row, col, i + 1, j, visited, path, output + 'D');
            visited[i + 1][j] = false; // Backtracking
        }
    
        // Move Left
        if (isSafe(i, j - 1, maze, row, col, visited)) {
            visited[i][j - 1] = true;
            mazeHelper(maze, row, col, i, j - 1, visited, path, output + 'L');
            visited[i][j - 1] = false; // Backtracking
        }
    
        // Move Right
        if (isSafe(i, j + 1, maze, row, col, visited)) {
            visited[i][j + 1] = true;
            mazeHelper(maze, row, col, i, j + 1, visited, path, output + 'R');
            visited[i][j + 1] = false; // Backtracking
        }
    
        // Move Up
        if (isSafe(i - 1, j, maze, row, col, visited)) {
            visited[i - 1][j] = true;
            mazeHelper(maze, row, col, i - 1, j, visited, path, output + 'U');
            visited[i - 1][j] = false; // Backtracking
        }
    }

    vector<string> findPath(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        vector<string> path;
        string output = "";
        
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        
        if (mat[0][0] == 0) {
            return path; // Return empty vector if start position is blocked
        }
        
        visited[0][0] = true;
        mazeHelper(mat, row, col, 0, 0, visited, path, output);
        
        return path;
    }
};

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    
    vector<vector<int>> mat(n, vector<int>(n));
    
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<"Enter value for index ["<<i<<"]"<<"["<<j<<"]:";
            cin >> mat[i][j];
        }
    }
    
    Solution sol;
    vector<string> paths = sol.findPath(mat);
    
    cout << "Paths to reach the end are:" << endl;
    if (paths.empty()) {
        cout << "No path exists" << endl;
    } 
    else {
        for (const string& path : paths) {
            cout << path << endl;
        }
    }
    
    return 0;
}
