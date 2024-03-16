#include<bits/stdc++.h>
using namespace std;

bool comparestring(string a, string b)
{
    if(a.length() != b.length())
    {
        return false;
    }
        
    for (int i = 0; i < a.length(); i++)
    {
        if(a[i] != b[i])
        {
            return false;
        }
    }

    return true;
    
}
int main()
{
// string str;
// // cin>>str;
// getline(cin,str);
// cout<<str<<endl;
// cout<<"length:"<<str.length()<<endl;
// cout<<"is empty"<<str.empty()<<endl;
// str.push_back('A');
// cout<<str<<endl;
// // very important stl function
// cout<<str.substr(0,6)<<endl;

//Compare
// string a = "bovea";
// string b = "bovewzcxvc";
// cout<<a.compare(b)<<endl;
// if(a.compare(b)==0)
// {
//     cout<<"Both same."<<endl;
// }
// else{
//     cout<<"Not same."<<endl;
// }

//Find
// string sen = "Hello guys this your coder boy madboy";
// string tar = "ji";
// cout<<sen.find(tar)<<endl;
// if(sen.find(tar) == string::npos)
// {
//     cout<<"Not Found"<<endl;
// }

//Replace
// string str = "I love you my team members";
// string word = "group";
// str.replace(14,4,word);
// cout<<str<<endl;

// Erase
string str = "this is bhogi the lodu";
str.erase(0,4);
cout<<str<<endl;
return 0;
}