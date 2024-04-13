#include<bits/stdc++.h>
using namespace std;

// Sliding window Method



class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for(int i=0; i<= n-m; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(needle[j] != haystack[i+j])
                {
                    break;
                }
                if(j == m-1)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};

int main()
{
Solution sol;
string haystack,needle;
cout<<"Enter the string:";
cin>>haystack;
cout<<"Enter the string:";
cin>>needle;
int ans = sol.strStr(haystack,needle);
if(ans != 1){
cout<<"Element found at index:"<<ans<<endl;
}
else{
    cout<<"Element no found."<<endl;
}
return 0;
}