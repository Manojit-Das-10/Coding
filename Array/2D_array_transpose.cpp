#include<bits/stdc++.h>
using namespace std;

void Printarray(int arr[4][4],int row,int col)
{
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
    
}

void transpose(int arr[4][4],int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
           swap(arr[i][j],arr[j][i]);
        }
        
    }
    
}

int main()
{
int arr[4][4]=
{
    {5,6,21,84},
    {10,20,30,40},
    {45,85,96,36},
    {12,21,23,32}
};

int col=4;
int row=4;
cout<<"Before trasnpose:"<<endl;
Printarray(arr,row,col);

transpose( arr, row, col);

cout<<"After transpose:"<<endl;
Printarray(arr,row,col);


return 0;
}