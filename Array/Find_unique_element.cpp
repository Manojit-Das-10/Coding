#include<bits/stdc++.h>
using namespace std;

int UniqueElement(vector<int>&arr)
{
    int Ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        Ans = Ans ^ arr[i];
    }
    return Ans;
}

int main()
{
int n;
cout<<"Input of n:";
cin>>n;
vector<int>arr(n);
for (int i = 0; i < arr.size(); i++)
{
    cin>>arr[i];
}
int size = arr.size();
int Answer = UniqueElement(arr);

cout<<"The unique element is :"<<Answer<<endl;

return 0;
}