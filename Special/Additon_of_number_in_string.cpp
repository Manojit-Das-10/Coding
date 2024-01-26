#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
         string ans;
        int carry = 0;
        int i = n - 1;
        int j = m - 1;
        // When two arrays have same number of digits
        while (i >= 0 && j >= 0) {
            int x = a[i] + b[j] + carry;
            int digit = x % 10;
            carry = x / 10;  // Remove int before carry, to update the carry variable
            ans.push_back(digit + '0');
            i--;
            j--;
        }
        // when A has more digits
        while (i >= 0) {
            int x = a[i] + carry; // Removed the extra '0' here
            int digit = x % 10;
            carry = x / 10;
            ans.push_back(digit + '0');
            i--;
        }
        //When B has more digits
        while (j >= 0) {
            int x = b[j] + carry; // Removed the extra '0' here
            int digit = x % 10;
            carry = x / 10;
            ans.push_back(digit + '0');
            j--;
        }
        // If carry left
        if (carry) {
            ans.push_back(carry + '0');
        }
        //Removing extra 0's from the left side
        while (ans.size() > 1 && ans[ans.size() - 1] == '0') { // updated condition to avoid removing the last non-zero digit
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
int a[] = {9, 9, 9};
int b[] = {1, 2, 3};
Solution s;
string result = s.calc_Sum(a, 3, b, 3);
cout << result << endl;
return 0;
}