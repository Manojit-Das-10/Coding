#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
    return (int)sqrt(x);
    // int s=0;
    // int e=x;
    // int ans;
    // while(s<=e)
    // {
    //     int mid=s+(e-s)/2;
    //     if(mid*mid==x)
    //     {
    //         return mid;
    //     }
    //     else if(mid*mid<x)
    //     {
    //         ans = mid;
    //         s=mid+1;
    //     }
    //     else{
    //         e=mid-1;
    //     }
    // }
    // return (int)ans;
    }
};

int main()
{
Solution sol;
int x;
cout<<"Enter the number:";
cin>>x;
int result = sol.mySqrt(x);
// cout << "Square root of " << x << " is: " << result <<endl;
int precision;
cout<<"Enter the range:";
cin>>precision;
double step = 0.1;
double finalans = result;
for (int i = 0; i < precision; i++)
{
    for (double j = finalans; j*j<=x; j=j+step)
    {
        finalans = j;
    }
    step = step/10;
}
cout<< fixed << setprecision(precision)<<"Final ans is: "<<finalans<<endl;

return 0;
}

// Exact Double value of sqrt
/*
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double mySqrt(double x, int precision) {
        double ans = 0.0;
        double step = 1.0;
        for (int i = 0; i < precision; i++) {
            while ((ans + step) * (ans + step) <= x) {
                ans += step;
            }
            step /= 10.0;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    double x;
    cout << "Enter the number: ";
    cin >> x;
    int precision; // Set precision digits after the decimal point
    cout<<"Enter the precision range:";
    cin>>precision;
    double result = sol.mySqrt(x, precision);
    cout << fixed << setprecision(precision) << "Square root of " << (int)x << " is: " << result << endl;
    return 0;
}
*/
