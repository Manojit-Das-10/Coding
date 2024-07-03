#include<bits/stdc++.h>
using namespace std;

void mini_Element(int arr[], int n , int i,int& mini){

    // Base Case
    if(i>=n){
        return;
    }

    // Processing
    mini = min(arr[i],mini);

    // RR
    return mini_Element(arr, n , i+1 , mini);

}

int main()
{
int arr[7] = {10,30,21,15,44,26,17};
int n = 7;
int i = 0;
int mini = INT_MAX;

mini_Element(arr,n,i,mini);

int ans = mini;

cout<<"The maximum element is: "<<ans;
return 0;
}