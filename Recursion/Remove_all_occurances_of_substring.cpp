#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void removeOCRE(string&s , string&part){
        int found = s.find(part);

        // part string has been located
        // Remove it
        if(found != string::npos){
            string left_part = s.substr(0,found);
            string right_part = s.substr(found + part.size(),s.size());
            s = left_part + right_part;

            // RR
            removeOCRE(s,part);
        }
        // Base case
        // All the ocuurence of the part string has been removed from the s string
        else{
            return;
        }
    }

    string removeOccurrences(string s, string part) {
        removeOCRE(s,part);
        return s;
    }
};

int main()
{

Solution sol;
string s, part;
cout<<"Enter the main string:";
cin>>s;
cout<<"Enter the substr string:";
cin>>part;

string ans = sol.removeOccurrences(s,part);

cout<<"Answer is:"<<ans<<endl;

return 0;
}