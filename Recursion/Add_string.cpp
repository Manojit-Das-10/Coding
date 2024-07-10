#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void addRE(string&num1, int p1, string&num2, int p2, int carry, string&ans){
        // Base Case
        if(p1 < 0 && p2 < 0){
            if(carry != 0){
                ans.push_back(carry + '0');    
            }
            return;
        }
        // Solve one case
        int n1 = (p1 >= 0 ? num1[p1]:'0') - '0';
        int n2 = (p2 >= 0 ? num2[p2]:'0') - '0';
        int sum = n1 + n2 + carry;
        int digit = sum % 10;
        carry = sum / 10;
        ans.push_back(digit + '0');

        // RR
        addRE(num1,p1-1,num2,p2-1,carry,ans);
    }

    string addStrings(string num1, string num2) {
        string ans = "";
        addRE(num1,num1.size()-1,num2,num2.size()-1,0,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main()
{
Solution sol;
string num1 , num2;
cout<<"The strings:"<<endl;
cin>>num1>>num2;
string ans = sol.addStrings(num1,num2);
cout<<"Sum is "<<ans<<endl;

return 0;
}