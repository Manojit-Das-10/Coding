#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        int a=1, b=2, ans;
        for(int i=3;i<=n;i++){
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }

    // Using Recursion but Time Limit Exceeded
    // int climbStairs(int n){
    //     if(n==0 || n==1)
    //     return 1;

    //     return climbStairs(n-1) + climbStairs(n-2);
    // }
};

int main()
{
Solution sol;
int n;
cout<<"Enter the number of strirs:";
cin>>n;

int ans = sol.climbStairs(n);
cout<<"The number of ways is:"<<ans<<endl;

return 0;
}