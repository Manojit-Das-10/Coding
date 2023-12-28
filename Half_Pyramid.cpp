#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Input n:";
cin>>n;
for ( int row = 0; row < n; row++)
{
    for ( int col = 0; col < row+1; col++)
    {
        cout<<" * ";
    }
    cout<<endl;
}

return 0;
}