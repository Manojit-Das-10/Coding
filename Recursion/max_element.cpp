#include<bits/stdc++.h>
using namespace std;

int max_Element(int arr[], int n , int i,int maxi){

    // Base Case
    if(i>=n){
        return maxi;
    }

    // Processing
    maxi = max(arr[i],maxi);

    // RR
    return max_Element(arr, n , i+1 , maxi);

}

int main()
{
int arr[7] = {10,30,21,15,44,26,17};
int n = 7;
int i = 0;
int maxi = INT_MIN;

int ans = max_Element(arr,n,i,maxi);

cout<<"The maximum element is: "<<ans;
return 0;
}