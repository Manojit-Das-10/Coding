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

int main()
{


return 0;
}