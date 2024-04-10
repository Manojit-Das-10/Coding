#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
            return INT_MAX; // Handle edge cases to prevent runtime errors
        }

        long long int ans = static_cast<long long int>(dividend) / divisor;
        return static_cast<int>(ans); // Cast the result back to int before returning
    }
};

int main()
{
Solution sol;
int divident,divisor;
cout<<"Enter the divident:";
cin>>divident;
cout<<"Enter the divisor:";
cin>>divisor;
int ans = sol.divide(divident,divisor);
cout<<"The round of answer is:"<<ans<<endl;
return 0;
}