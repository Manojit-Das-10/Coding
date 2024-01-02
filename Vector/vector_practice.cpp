#include<bits/stdc++.h>
using namespace std;

void fun(int n , int arr[])
{
    cout<<"Array elements are:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main()
{
 int n;
 cout<<"Range:";
 cin>>n;
//  int arr[n];
int *arr = new int[n];
 for (int i = 0; i < n; i++)
 {
    // cin>>arr[i];
    int data;
    cin>>data;
    arr[i]=data;
 }
 
 for (int i = 0; i < 3; i++)
 {
    cin>>arr[i];
 }
 
fun(n,arr);
return 0;
}
