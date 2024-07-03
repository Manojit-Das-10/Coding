#include<bits/stdc++.h>
using namespace std;


class NumMatrix {
public:
    vector<vector<int>> sum;
    
    // Constructor to initialize the prefix sum matrix
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        // Compute prefix sums for each row
        for (int i = 0; i < row; i++) {
            for (int j = 1; j < col; j++) {
                matrix[i][j] += matrix[i][j - 1];
            }
        }
        
        // Compute prefix sums for each column
        for (int i = 1; i < row; i++) {
            for (int j = 0; j < col; j++) {
                matrix[i][j] += matrix[i - 1][j];
            }
        }
        
        // Store the computed prefix sum matrix
        sum = matrix;
    }
    
    // Method to compute the sum of the submatrix from (row1, col1) to (row2, col2)
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total = sum[row2][col2];
        
        int extraSum = (col1 != 0 ? sum[row2][col1 - 1] : 0) +
                       (row1 != 0 ? sum[row1 - 1][col2] : 0) -
                       ((row1 != 0 && col1 != 0) ? sum[row1 - 1][col1 - 1] : 0);
        
        return total - extraSum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1, col1, row2, col2);
 */

int main() {
    vector<vector<int>> matrix = {
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}
    };

    NumMatrix* obj = new NumMatrix(matrix);
    int param_1 = obj->sumRegion(2, 1, 4, 3);
    cout << "Sum of region (2, 1, 4, 3): " << param_1 << endl;

    delete obj;
    return 0;
}
