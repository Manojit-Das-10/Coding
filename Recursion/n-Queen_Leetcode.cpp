#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    unordered_map<int,bool>leftRowCheck;
    unordered_map<int,bool>upperLeftDiagonalCheck;
    unordered_map<int,bool>bottomLeftDiagonalCheck;

    void storeSolution(vector<vector<char>>& board, int n , vector<vector<string>>&ans) {
        vector<string>temp;
        for (int i = 0; i < n; i++) {
            string store="";
            for (int j = 0; j < n; j++) {
                store.push_back(board[i][j]);
            }
            temp.push_back(store);
        }
        ans.push_back(temp);
    }


    bool isSafe(int row, int col, vector<vector<char>>& board, int n) {

        if(leftRowCheck[row] == true|| upperLeftDiagonalCheck[n-1+(col-row)] == true || bottomLeftDiagonalCheck[col+row] == true){
            return false;
        }

        return true;
    }

    void solve(vector<vector<char>>& board, int col, int n , vector<vector<string>>&ans) {
        // Base case
        if (col >= n) {
            storeSolution(board, n, ans);
            return;
        }

        // Solve one case
        for (int row = 0; row < n; row++) {
            if (isSafe(row, col, board, n)) {
                // Placed Queen
                board[row][col] = 'Q';

                // Insert the element in the map
                leftRowCheck[row] = true;
                upperLeftDiagonalCheck[n-1+(col-row)] = true;
                bottomLeftDiagonalCheck[col+row] = true;


                // Recursion
                solve(board, col + 1, n,ans);

                // Backtracking
                board[row][col] = '.';
                leftRowCheck[row] = false;
                upperLeftDiagonalCheck[n-1+(col-row)] = false;
                bottomLeftDiagonalCheck[col+row] = false;
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<vector<char>> board(n, vector<char>(n, '.'));
        solve(board, 0, n , ans);

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter the board size (n): ";
    cin >> n;

    Solution sol;
    vector<vector<string>> solutions = sol.solveNQueens(n);

    cout << "Total number of solutions: " << solutions.size() << endl;
    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }

return 0;
}