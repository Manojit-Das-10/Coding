#include<bits/stdc++.h>
using namespace std;


int main()
{
cout<<"Enter the range :";
int n;
cin>>n;
int arr[n];
cout<<"Enter the value in the array :"<<endl;
for ( int i = 0; i < n; i++)
{
   cin>>arr[i];
}

cout<<"The array items are :"<<endl;
for ( int i = 0; i < n; i++)
{
    cout<<arr[i]<<endl;
}

for (int i = 0; i < n; i++)
{
    /* code */
    int current = arr[i];
    int j=i-1;
    while (arr[j]>current && j>=0)
    {
        /* code */
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}
cout<<"Sorting o/p :"<<endl;
for (int i = 0; i <n; i++)
{
    /* code */
    cout<<arr[i]<<endl;
}

return 0;
}