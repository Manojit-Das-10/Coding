#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[] , int n , int i){

    // Base Case
    if(i >= n){
        return;
    }

    // Processing
    cout<<arr[i]<<" ";

    // RR
    printArray(arr , n , i+1);

}

int main()
{
int arr[5] = {10,20,30,40,50};
int n = 5;
int i = 0;

printArray(arr,n,i);

return 0;
}