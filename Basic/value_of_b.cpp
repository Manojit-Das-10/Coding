#include<bits/stdc++.h>
using namespace std;


int main()
{
int a = 10;
int d = ++a;
int b = d + a++;
int c = b + --a;
cout<<d<<endl;
cout<<b<<endl;
cout<<c<<endl;
return 0;
}