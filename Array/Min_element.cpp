#include<bits/stdc++.h>
using namespace std;

int Minelement(int arr[][4],int row, int col)
{
    int minans=INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j< col; j++)
        {
            if(arr[i][j]<minans)
            {
                minans=arr[i][j];
            }
        }
        
    }
    return minans;
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
cout<<"Printing Min element:"<<Minelement(arr,row,col)<<endl;
return 0;
}