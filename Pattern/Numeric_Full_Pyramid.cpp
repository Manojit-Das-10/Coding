#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Input:";
cin>>n;
for ( int row = 0; row < n; row++)
{
    // Space
    for ( int col = 0; col < n-row-1; col++)
    {
        cout<<" ";
    }
    
    for ( int col = 0; col < row+1; col++)
    {
        cout<<row+col+1;
    }
    int st=2*row;
    for ( int col = 0; col < row; col++)
    {
        cout<<st;
        st--;
    }
    
    cout<<endl;
}

return 0;
}