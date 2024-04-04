#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int expandAroundIndex(string s, int i, int j)
    {
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j])
        {
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        for(int i=0; i<n; i++)
        {
            // odd substrings
            int oddAns = expandAroundIndex(s,i,i);
            count = count + oddAns;

            // even substrings
            int evenAns = expandAroundIndex(s,i,i+1);
            count = count + evenAns;
        }
        return count;
    }
};

int main()
{
Solution ans;
string s;
cout << "Enter the string:";
cin >> s;
cout << "Number of palindromic substrings: " << ans.countSubstrings(s) << endl;

return 0;
}