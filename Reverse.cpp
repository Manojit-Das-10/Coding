#include<bits/stdc++.h>
using namespace std;

void ReverseNumber(vector<int> &arr, int size, int start, int end)
{
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void PrintArray(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main()
{
int n;
cout<<"Input n:"<<endl;
cin>>n;
vector<int>arr(n);
cout<<"Enter the element in the array:"<<endl;
for (int i = 0; i < arr.size(); i++)
{
    cin>>arr[i];
}
int size = arr.size();
int start = 0;
int end = arr.size()-1;
ReverseNumber(arr,size,start,end);
cout<<"Reverse Array is:"<<endl;
PrintArray(arr,size);

return 0;
}