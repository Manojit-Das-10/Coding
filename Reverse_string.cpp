#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
vector<string>arr(n);
cout<<"Input the string:"<<endl;
for (int i = 0; i < arr.size(); i++)
{
    cin>>arr[i];
}
//  for (int i = 0; i < arr.size(); i++)
//  {
//     cout<<"The string is "<<arr[i]<<" ";
//  }
int start = 0;
int end = arr.size()-1;
while (start<=end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;
}

cout<<"The Reverse string is:"<<endl;
for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}