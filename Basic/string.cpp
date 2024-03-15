#include<bits/stdc++.h>
using namespace std;


int main()
{
string str;
// cin>>str;
getline(cin,str);
cout<<str<<endl;
cout<<"length:"<<str.length()<<endl;
cout<<"is empty"<<str.empty()<<endl;
str.push_back('A');
cout<<str<<endl;
// very important stl function
cout<<str.substr(0,6)<<endl;

string a = "Love";
string b = "Love";
if(a.compare(b))
{
    cout<<"Both same."<<endl;
}
else{
    cout<<"Not same."<<endl;
}
return 0;
}