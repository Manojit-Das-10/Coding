#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cout<<"enter the no. of test cases:";
cin>>t;
int x,y;
while (t--)
{
    cout<<"Enter the value of dice x:";
    cin>>x;
    cout<<"Enter the value of dice y:";
    cin>>y;
    if (x+y>6)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}

return 0;
}