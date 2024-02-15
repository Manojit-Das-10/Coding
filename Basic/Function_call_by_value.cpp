#include<bits/stdc++.h>
using namespace std;

int incrementby1(int n)
{
    n++;
    return n;
}

int main()
{
int n;
cout<<"Input:";
cin>>n;
n=incrementby1(n);
cout<<"n:"<<n<<endl;

return 0;
}