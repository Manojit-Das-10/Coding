#include<bits/stdc++.h>
using namespace std;

int Maxelement(int arr[][4],int row, int col)
{
    int maxans=INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j< col; j++)
        {
            if(arr[i][j]>maxans)
            {
                maxans=arr[i][j];
            }
        }
        
    }
    return maxans;
}

int main()
{
int arr[][4]={
            {10,20,30,40},
            {45,85,96,36},
            {12,21,23,32}
            };

int row=3;
int col=4;
// Maxelement(arr,row,col);
cout<<"Printing max element:"<<Maxelement(arr,row,col)<<endl;
return 0;
}