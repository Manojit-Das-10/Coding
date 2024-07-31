#include<bits/stdc++.h>
using namespace std;

void printSolution(vector<vector<char>>&board,int n,int count){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
        
    }
    count++;
    cout<<endl<<endl;    
}

bool isSafe(int row,int col,vector<vector<char>>&board,int n){
    // check for left row
    int i=row;
    int j=col;
    while (j>=0)
    {
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    // check for upper left diagonal
    i=row;
    j=col;
    while (i>=0 && j>=0)
    {
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }

    // check for lower left diagonal
     i=row;
     j=col;
    while (i<n && j>=0)
    {
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }

    return true;
    
}

void solve(vector<vector<char>>&board,int col,int n){
    // Base case
    int count = 0;
    if(col >= n){
        printSolution(board,n,count);
        return;
    }

    // solve one case
    for (int row = 0; row < n; row++)
    {
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            // Recursion
            solve(board,col+1 , n);

            // Backtracking
            board[row][col] = '-';
        }

    }
    
}

int main() {
int n;
cout<<"Enter board size:";
cin>>n;

vector<vector<char>> board(n, vector<char>(n, '-'));
int col=0;

solve(board,col,n);
return 0;
}