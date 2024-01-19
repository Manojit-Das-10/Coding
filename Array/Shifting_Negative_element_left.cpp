#include<bits/stdc++.h>
using namespace std;

void ShiftingNegativeElement(int arr[],int n)
{
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
        
    }
    
}

int main()
{
int arr[]={5,7,-14,56,-6,-9,-10};
int n=7;

ShiftingNegativeElement(arr,n);

//Printing array
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}