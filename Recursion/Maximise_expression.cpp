#include<bits/stdc++.h>
using namespace std;

    long long maxExpression(vector<vector<int>>& mat, int topRow, int bottomRow, int leftCol, int rightCol, vector<vector<vector<vector<long long>>>>& memo) {
        // Base Case: If there's only one row or one column left, stop recursion
        if (topRow >= bottomRow || leftCol >= rightCol) {
            return 0;
        }

        // Check if the result is already computed
        if (memo[topRow][bottomRow][leftCol][rightCol] != -1) {
            return memo[topRow][bottomRow][leftCol][rightCol];
        }

        long long maxVal = LLONG_MIN;

        // Remove one row and one column and calculate the expression
        for (int i = topRow; i < bottomRow; i++) {
            for (int j = leftCol; j < rightCol; j++) {
                // Calculate the sum of the four submatrices
                long long TL = 0, TR = 0, BL = 0, BR = 0;

                // Sum of Top-left submatrix
                for (int x = topRow; x < i; x++) {
                    for (int y = leftCol; y < j; y++) {
                        TL += mat[x][y];
                    }
                }

                // Sum of Top-right submatrix
                for (int x = topRow; x < i; x++) {
                    for (int y = j + 1; y <= rightCol; y++) {
                        TR += mat[x][y];
                    }
                }

                // Sum of Bottom-left submatrix
                for (int x = i + 1; x <= bottomRow; x++) {
                    for (int y = leftCol; y < j; y++) {
                        BL += mat[x][y];
                    }
                }

                // Sum of Bottom-right submatrix
                for (int x = i + 1; x <= bottomRow; x++) {
                    for (int y = j + 1; y <= rightCol; y++) {
                        BR += mat[x][y];
                    }
                }

                // Compute the expression value
                long long currVal = (TL * BR) + (BL * TR);
                maxVal = max(maxVal, currVal);
            }
        }

        // Store the result in the memoization table
        memo[topRow][bottomRow][leftCol][rightCol] = maxVal;
        return maxVal;
    }

    long long getMax(int n, int m, vector<vector<int>>& mat) {
        // Memoization table to store subproblem results
        vector<vector<vector<vector<long long>>>> memo(n, vector<vector<vector<long long>>>(n, vector<vector<long long>>(m, vector<long long>(m, -1))));

        // Start the recursive function from the full matrix
        return maxExpression(mat, 0, n - 1, 0, m - 1, memo);
    }



int main() {
int n,m;
cout<<"matrix size: ";
cin>>n;
m = n;
vector<vector<int>> mat(n, vector<int>(m));
for (int i = 0; i < n; i++)
{
   for (int j = 0; j < n; j++)
   {
        cin>>mat[i][j];
   }
   
}
long long ans = getMax(n,m,mat);

cout<<"The maxmise expression is:"<<ans;

return 0;
}