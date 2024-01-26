#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    string ans;
    int carry = 0;
    int i = n - 1;
    int j = m - 1;
    //When two ares same digits
    while (i >= 0 && j >= 0){
        int x = a[i] + b[j] + carry;
        int digit = x % 10;
        carry =  x / 10;
        ans.push_back(digit + '0');
        i--;
        j--;
    }
    // when A is greater digit
    while (i >= 0) {
        int x = a[i] + carry;
        int digit = x % 10;
        carry = x / 10;
        ans.push_back(digit + '0');
        i--;
    }
    //When b is greater digit
    while (j >= 0) {
        int x = b[j] + carry;
        int digit = x % 10;
        carry =  x / 10;
        ans.push_back(digit + '0');
        j--;
    }
    // If carry left
    if (carry) {
        ans.push_back(carry + '0');
    }
    //Removing extra 0's from the left side
    while (ans.size() > 1 && ans[ans.size() - 1] == '0') {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
};
int main()
{


return 0;
}