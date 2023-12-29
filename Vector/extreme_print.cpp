#include<bits/stdc++.h>
using namespace std;

void ExtremePrint(vector<int> &arr,int size, int start, int end)
{
   while (start<=end)
   {
    if(start==end)
    {
        cout<<arr[start]<<endl;
    }
    else
    {
        cout<<arr[start]<<endl;
        cout<<arr[end]<<endl;
    }
    start++;
    end--;
   }
   
}

int main()
{
int n;
cout<<"Enter the value of N:"<<endl;
cin>>n;
vector<int>arr(n);
for (int i = 0; i < arr.size(); i++)
{
    cin>>arr[i];
}
int size = arr.size();
int start = 0;
int end = arr.size()-1;

ExtremePrint(arr,size,start,end);

return 0;
}