#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum =0;
    for(int i=0; i<n; i++)
    {
        sum = sum + nums[i];
    }
    int Totalsum = ((n)*(n+1))/2;
    int ans = Totalsum - sum;
    return ans;     
    }
};

int main()
{


return 0;
}