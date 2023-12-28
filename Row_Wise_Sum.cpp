#include<bits/stdc++.h>
using namespace std;

// void PrintRowWiseSum(int arr[][3],int row,int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//         cout<<sum;
//         cout<<endl;
//     }
// }

// void PrintColWiseSum(int arr[][3],int row,int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum = sum + arr[j][i];
//         }
//         cout<<sum;
//         cout<<endl;
//     }
// }

bool SearchKey(int arr[][3],int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==key)
            {
                return true;
                break;
            }
            
        } 
    }
    return false;
     
}
int main()
{
int arr[3][3];
int row=3;
int col=3;
cout<<"ENter the element in the array"<<endl;
for (int i = 0; i < row; i++)
{
    cout<<i<<"'th row"<<endl;
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
    
}
// cout<<"Printing the sum of row - wise:"<<endl;
// PrintRowWiseSum(arr,row,col);

// cout<<"Printing the sum of col - wise:"<<endl;
// PrintColWiseSum(arr,row,col);

int key;
cout<<"Enter the search element:";
cin>>key;

if(SearchKey(arr,row,col,key)){
    cout<<"True";
}
else
{
    cout<<"False";
}
// if(key==true)
// {
//     cout<<"Found";
// }
// else
// {
//     cout<<"Not Found";
// }
return 0;
}