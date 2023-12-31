#include<bits/stdc++.h>
using namespace std;

void incrementby1(int &n)
{
    n++;
}

int main()
{
int n;
cout<<"input:";
cin>>n;
incrementby1(n);
cout<<"n:"<<n<<endl;

return 0;
}