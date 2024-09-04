#include<bits/stdc++.h>
using namespace std;
int main()
{
string n;
cout<<"Enter:"<<endl;
getline(cin,n);
replace(n.begin(), n.end(), ' ', '\n');
cout<<n;

return 0;
}