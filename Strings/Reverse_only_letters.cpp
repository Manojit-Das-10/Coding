#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isAlphabet(char s){
        if((s >= 97 && s <= 122) || (s >= 65 && s <= 90)) {
            return true;
        }
        return false;
    }

    string reverseOnlyLetters(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<=r) {
            if(isAlphabet(s[l]) && isAlphabet(s[r])) {
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(!isAlphabet(s[l])) {
                l++;
            }
            else {
                r--;
            }
        }
        return s;
    }
};

int main()
{
Solution sol;
string s;
cout<<"Enter the string:";
cin>>s;
string ans = sol.reverseOnlyLetters(s);
cout<<"The reverse only letter string is :"<<ans;

return 0;
}