#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=0,b=1,n,i,f;
cout<<"Enter the range of the fibonacci series:"<<endl;
cin>>n;
cout<<"The fibonacci series is:"<<endl<<a<<endl<<b<<endl;
for ( i = 3; i <=n; i++)
{
    
    f=a+b;
    a=b;
    b=f;
    cout<<f<<endl;
}

return 0;
}