#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    //Transpose
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<matrix[i].size();j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // Reverse
    for(int i=0 ; i<n; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
        
    }
};

int main() {
    Solution sol;

    // Test with a sample matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Call the rotate method
    sol.rotate(matrix);

    // Print the rotated matrix
    cout << "Rotated Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
