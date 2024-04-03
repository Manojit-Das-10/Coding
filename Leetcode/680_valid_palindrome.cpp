#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool checkPalindrome(string s, int i, int j)
    {
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i=0;
        int j = s.size()-1;
        while(i <= j)
        {
            if(s[i] != s[j])
            {
                return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};

int main()
{

Solution solution;

string testString1 = "aba";
string testString2 = "abca";

cout << "Is '" << testString1 << "' a valid palindrome? " << (solution.validPalindrome(testString1) ? "true" : "false") << endl;
cout << "Is '" << testString2 << "' a valid palindrome? " << (solution.validPalindrome(testString2) ? "true" : "false") << endl;


return 0;
}