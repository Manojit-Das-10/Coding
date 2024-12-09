#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle; // To store the result

        // Loop through each row
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1); // Create a row with (i + 1) elements, all initialized to 1

            // Update the elements (except the first and last) based on the previous row
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            // Add the current row to the triangle
            triangle.push_back(row);
        }

        return triangle;
    }
};

int main() {
    Solution sol;

    // Input number of rows
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    // Generate Pascal's Triangle
    vector<vector<int>> result = sol.generate(numRows);

    // Print Pascal's Triangle
    cout << "Pascal's Triangle:\n";
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
