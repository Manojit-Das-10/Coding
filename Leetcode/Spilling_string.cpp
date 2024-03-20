#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int i,co=0,ans=-1,z=0,o=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1') 
            {
                co++;
            }
        } 
        for(i=0;i<s.length()-1;i++){
            if(s[i]=='0') 
            {
                z++;
            }
            else 
            {
                o++;
            }
            ans=max(ans,z+(co-o));
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test with sample string
    string s = "011101"; // Sample string

    // Call the maxScore method
    int maxScore = sol.maxScore(s);

    // Print the maximum score
    cout << "Maximum score: " << maxScore << endl;

    return 0;
}
