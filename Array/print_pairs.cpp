#include<bits/stdc++.h>
using namespace std;

void Pairselements(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
             cout<<arr[i]<<","<<arr[j]<<endl;
        }
        
    }
    
}

int main()
{
int arr[]={10,20,30};
int n = 3;
cout<<"pairs Elements are:"<<endl;
Pairselements(arr,n);
return 0;
}