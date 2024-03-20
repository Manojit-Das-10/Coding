#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
    string ans ="";
    for(int i=0;i<s.length();i++)
    {
        // Checking for length of the ans
        if(ans.length()>0)
        {
            if(ans[ans.length()-1] == s[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }

        else{
            ans.push_back(s[i]);
        }
       
    }
    return ans;
    }
};

int main()
{
string s;
cout<<"Enter the string value:";
cin>>s;
Solution Solution;
string ans = Solution.removeDuplicates(s);
cout<<"After removing duplicate element the string is :"<< ans <<endl;
return 0;
}