#include<bits/stdc++.h>
using namespace std;

unordered_map<int,bool>leftRowCheck;
unordered_map<int,bool>upperLeftDiagonalCheck;
unordered_map<int,bool>bottomLeftDiagonalCheck;



void printSolution(vector<vector<char>>& board, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

bool isSafe(int row, int col, vector<vector<char>>& board, int n) {

    if(leftRowCheck[row] == true|| upperLeftDiagonalCheck[n-1+(col-row)] == true || bottomLeftDiagonalCheck[col+row] == true){
        return false;
    }

    return true;
    
    // Check for left row
    // int i = row;
    // int j = col;
    // while (j >= 0) {
    //     if (board[i][j] == 'Q') {
    //         return false;
    //     }
    //     j--;
    // }

    // Check for upper left diagonal
    // i = row;
    // j = col;
    // while (i >= 0 && j >= 0) {
    //     if (board[i][j] == 'Q') {
    //         return false;
    //     }
    //     i--;
    //     j--;
    // }

    // Check for lower left diagonal
    // i = row;
    // j = col;
    // while (i < n && j >= 0) {
    //     if (board[i][j] == 'Q') {
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }

    // return true;
}

void solve(vector<vector<char>>& board, int col, int n) {
    // Base case
    if (col >= n) {
        printSolution(board, n);
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
            solve(board, col + 1, n);

            // Backtracking
            board[row][col] = '-';
            leftRowCheck[row] = false;
            upperLeftDiagonalCheck[n-1+(col-row)] = false;
            bottomLeftDiagonalCheck[col+row] = false;
        }
    }
}

int main() {
    int n;
    cout << "Enter board size: ";
    cin >> n;

    vector<vector<char>> board(n, vector<char>(n, '-'));
    solve(board, 0, n);

    return 0;
}
