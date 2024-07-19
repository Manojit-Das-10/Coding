#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isMatchHelper(string&s, int si, string&p, int pi){
        // Base Case
        if(si == s.size() && pi == p.size()){
            return true;
        }

        if(si == s.size() && pi < p.size()){
            while(pi<p.size()){
                if(p[pi] != '*'){
                    return false;
                }
                pi++;
            }
            return true;
        }

        // Single char matching
        if(s[si] == p[pi] || '?' == p[pi]){
            return isMatchHelper(s,si+1,p,pi+1);
        }

        if(p[pi] == '*'){
            // Treat * as empty or null
            bool CaseA = isMatchHelper(s,si,p,pi+1);

            // let * consume one char
            bool CaseB = isMatchHelper(s,si+1,p,pi);

            return CaseA || CaseB;
        }

        //Char doesn't match
        return false; 
    }

    bool isMatch(string s, string p) {
        int si = 0;
        int pi = 0;
        return isMatchHelper(s,si,p,pi);
    }
};

int main()
{

Solution sol;
string s, p;
cout<<"Enter the s string:";
cin>>s;
cout<<"Enter the p string:";
cin>>p;

bool ans = sol.isMatch(s,p);
if(ans){
    cout<<"String's are matched.";
}
else{
    cout<<"String's are not matched";
}

return 0;
}