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
    cout << "Square root of " << x << " is: " << result <<endl;
    return 0;
return 0;
}