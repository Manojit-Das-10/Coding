#include<bits/stdc++.h>
using namespace std;

int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};
char direction[4] = {'D','L','R','U'};

bool isSafe(int x , int y , int maze[][4] , int row , int col , vector<vector<bool>>&visited){
    if(
        ((x >= 0 && x < row) && (y >= 0 && y < col)) &&
        (maze[x][y] == 1) &&
        (visited[x][y] == false)
    ){
        return true;
    }

    else{
        return false;
    }
}

void mazeHelper(int maze[][4] , int col , int row , int i , int j , vector<vector<bool>>&visited , vector<string>&path, string output){
    // Base Case
    if(i == row-1 && j == col-1 ){
        path.push_back(output);
        return;
    }

    for (int k = 0; k < 4; k++)
    {
       int newx = i + dx[k];
       int newy = j + dy[k];
       char dir = direction[k];
       if(isSafe(newx,newy,maze,row,col,visited)){
            visited[newx][newy] = true;
            mazeHelper(maze,col,row,newx,newy,visited,path,output+dir);
            // Backtraking
            visited[newx][newy] = false;       
        }
    }
    

    // Solve one case

    /*
    // Down - i+1,j 
    if(isSafe(i+1,j,maze,row,col,visited)){
        visited[i+1][j] = true;
        mazeHelper(maze,col,row,i+1,j,visited,path,output+'D');
        // Backtraking
        visited[i+1][j] = false;       
    }

    // Left - i,j-1 
    if(isSafe(i,j-1,maze,row,col,visited)){
        visited[i][j-1] = true;
        mazeHelper(maze,col,row,i,j-1,visited,path,output+'L');
        // Backtraking
        visited[i][j-1] = false;       
    }


    // Right - i,j+1 
    if(isSafe(i,j+1,maze,row,col,visited)){
        visited[i][j+1] = true;
        mazeHelper(maze,col,row,i,j+1,visited,path,output+'R');
        // Backtraking
        visited[i][j+1] = false;       
    }

    // Down - i-1,j 
    if(isSafe(i-1,j,maze,row,col,visited)){
        visited[i][j] = true;
        mazeHelper(maze,col,row,i-1,j,visited,path,output+'U');
        // Backtraking
        visited[i-1][j] = false;       
    }
    */
}

int main() {
int maze[][4] = {
                    {1,0,0,0},
                    {1,1,0,1},
                    {1,1,0,0},
                    {0,1,1,1}
};

if(maze[0][0] == 0){
    cout<<"No Path Exists."<<endl;
    return 0;
}

int col = 4;
int row = 4;

vector<string>path;
string output = "";

vector<vector<bool>>visited(row,vector<bool>(col,false));
// Source value already visited
visited[0][0] = true;

mazeHelper(maze,col,row,0,0,visited,path,output);

cout<<"Printing the path:"<<endl;
for(auto i:path){
    cout<<i<<" ";
}

if(path.size() == 0){
    cout<<"No Path exists.";
}

return 0;
}