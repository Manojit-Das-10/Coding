#include<bits/stdc++.h>
using namespace std;

bool binary_search(vector<vector<int>>v,int row,int col,int target){
    int s=0;
    int e=(row*col)-1;
    while (s<=e)
    {
    int mid = s+(e-s)/2;
    int rindex=mid/col;
    int cindex=mid%col;
        if(v[rindex][cindex]==target)
        {
            return true;
        }
        else if(v[rindex][cindex]<target)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return false;    
}

int main()
{
vector<vector<int>>v=
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}   
    };
int row = 5;
int col = 4;
int target=13;
bool ans = binary_search(v,row,col,target);
if(ans){
    cout<<"Found";
}
else{
    cout<<"Not Found";
}
return 0;
}