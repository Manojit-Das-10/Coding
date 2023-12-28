#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,temp;
cout<<"Enter the range: ";
cin>>n;
vector<int>arr(n);
for (int i = 0; i<arr.size(); i++)
{  
     cout<<"Enter the element to be inserted:";
    //  cin>>temp;
    //  arr.push_back(temp);
     cin>>arr[i];

}
cout<<endl;
for (int i = 0; i<arr.size(); i++)
{
    cout<<"The element are : "<<arr[i]<<endl;
}

//  int ans = (sizeof(arr)/sizeof(int));
//  cout<< ans <<endl;

return 0;
}