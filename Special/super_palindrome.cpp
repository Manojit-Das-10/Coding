#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function to check if a number is a palindrome
    bool isPalindrome(long long num) {
        string str = to_string(num);
        string rev_str = str;
        reverse(rev_str.begin(), rev_str.end());
        return str == rev_str;
    }

    int countSuperPalindrome(int l, int r) {
        int count = 0;
        // The upper limit for the square root is sqrt(10^9) which is 31622
        for (long long i = 1; i <= 31622; ++i) {
            long long square = i * i;
            if (square >= l && square <= r && isPalindrome(square)) {
                count++;
            }
        }
        return count;
    }
};

int main()
{
Solution sol;
int l , r;
cout<<"Enter the left and right range:"<<endl;
cin>>l>>r;
int ans = sol.countSuperPalindrome(l,r);
cout<<ans;
return 0;
}