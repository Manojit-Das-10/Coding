#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isPalindrome(string&s, int start , int end){
        while(start < end)
        {
            if(s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0; i<s.size(); i++)
        {
            for(int j=i; j<s.size(); j++)
            {
                if(isPalindrome(s,i,j))
                {
                    string t = s.substr(i,j-i+1);
                    ans = t.size() > ans.size() ? t : ans;
                }
            }
        }
        return ans;
    }
};

int main() {
Solution sol;

string str;
cout<<"Enter the string:";
cin>>str;

string ans = sol.longestPalindrome(str);

cout<<"Longest substring palindrome is:" <<ans<<endl;

return 0;
}