#include<bits/stdc++.h>
using namespace std;

// time complexity is O(n) and space complexity is O(1)

class Solution {
public:

    bool isVowel(char ch){
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int l = 0;
        int h = s.size()-1;
        while(l<h)
        {
            if(isVowel(s[l]) && isVowel(s[h])){
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(isVowel(s[l])==false){
                l++;
            }
            else{
                h--;
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
string ans = sol.reverseVowels(s);
cout<<"The reverseVowels string is:"<<ans<<endl;



return 0;
}