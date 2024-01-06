#include<bits/stdc++.h>
using namespace std;

void Printarray(int arr[][3],int row,int col)
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

// void ColPrintarray(int arr[][3],int row, int col)
// {
//     for (int i = 0; i < col; i++)
//     {
//         for (int j = 0; j < row; j++)
//         {
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
    
// }
int main()
{
// int arr[][4]={
//             {1,2,3,4},
//             {5,6,7,8},
//             {9,10,11,12}
//               };

// int row=3;
// int col=4;
// Printarray(arr,row,col);
// cout<<"-----------"<<endl;
// ColPrintarray(arr,row,col);
int arr[3][3];
int row=3;
int col=3;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout<<"input for row index:"<<i<<" col index:"<<j<<endl;
        cin>>arr[i][j];
    }  
}

Printarray(arr,row,col);

return 0;
}