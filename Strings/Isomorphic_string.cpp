#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256]={0};
        bool istCharMapped[256]={0};
        for(int i=0; i<s.size(); i++)
        {
            if(hash[s[i]] == 0 && istCharMapped[t[i]] == 0){
                hash[s[i]] = t[i];
                istCharMapped[t[i]] = true;
            }
        }
        for(int i=0; i<s.size(); i++)
        {
            if(char(hash[s[i]]) != t[i])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
Solution sol;
string s,t;
cout<<"Enter the first string value:";
cin>>s;
cout<<"Enter the second string value:";
cin>>t;
bool ans = sol.isIsomorphic(s,t);
if(ans == 1){
    cout<<"Is they are isomorphic:True"<<endl;
}
else{
cout<<"Is they are isomorphic:False"<<endl;
}
return 0;
}