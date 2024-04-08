#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
    
    //    T.C. - log(nlog(n))
    //    sort(s.begin(),s.end());
    //    sort(t.begin(),t.end());
    //    if(s == t)
    //    {
    //     return true;
    //    }
    //    return false;

    // T.C. - log(n)
    int freqTable[256]={0};
    for(int i=0; i<s.size(); i++)
    {
        // type casting
        freqTable[s[i]]++;
    }
    for(int i=0; i<t.size(); i++)
    {
        freqTable[t[i]]--;
    }
    for(int i=0; i<256; i++)
    {
        if(freqTable[i]!=0)
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
cout<<"enter two strings:"<<endl;
cin>>s>>t;
int ans = sol.isAnagram(s,t);
cout<<"Is it a anagram:";
if(ans == 1){
    cout<<"True";
}
else{
    cout<<"False";
};

return 0;
}