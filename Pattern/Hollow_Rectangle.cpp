#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cout<<"enter the value of no. of rows :";
cin>>n;
cout<<"enter the value of no. of colume :";
cin>>m;
for ( int row = 0; row < n; row++)
{
    for ( int col = 0; col < m; col++)
    {
        if(row==0||row==n-1||col==0||col==m-1)
        {
            cout<<" * ";
        }
        else
        {
            cout<<"   ";
        }
    }
    cout<<endl;
}

return 0;
}