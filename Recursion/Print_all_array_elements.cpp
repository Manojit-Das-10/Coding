#include<bits/stdc++.h>
using namespace std;

// Space complexity O(n) & Time Complexity O(n^2)

void printSubArray(vector<int>&arr,int start , int end){
    // Base case
    if(end == arr.size()){
        return;
    }
    // Solve One Case
    for (int i = start; i <= end; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // RR
    printSubArray(arr,start,end+1);
    
}

void PrintSubArray_util(vector<int>&arr){
    for (int start = 0; start < arr.size(); start++)
    {
        int end = start;
        printSubArray(arr,start,end);
    }
    
}

int main()
{
vector<int>arr{1,2,3,4,5};
// int n;
// cout<<"Range:";
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     int temp;
//     cin>>temp;
//     arr.push_back(temp);
// }
PrintSubArray_util(arr);


return 0;
}