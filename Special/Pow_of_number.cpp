#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        // Handle the special case when n is INT_MIN
        if (n == INT_MIN) {
            x = x * x;
            n = n / 2;
        }

        // If the power is 0, return 1
        if (n == 0) {
            return 1;
        }

        // Convert n to a positive value for easier handling
        long long absN = abs(static_cast<long long>(n));
        double result = 1.0;

        // Iteratively compute the power using exponentiation by squaring
        while (absN > 0) {
            // If absN is odd, multiply the result by x
            if (absN % 2 == 1) {
                result *= x;
            }
            // Square x and halve absN
            x *= x;
            absN /= 2;
        }

        // If the original n was negative, return 1 / result
        return (n > 0) ? result : 1 / result;
    }
};


int main()
{
Solution sol;
double x;
cout<<"Enter the number:";
cin>>x;
int n;
cout<<"power Value: ";
cin>>n;
double ans = sol.myPow(x,n);
cout<<"The value is "<<ans<<endl;

return 0;
}