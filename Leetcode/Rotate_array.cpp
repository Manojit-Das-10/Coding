#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int>ans(n);
    for(int i=0; i<n;i++)
    {
        int m = (i+k)%n;
        ans[m] = nums[i];
    }
    nums=ans;
    }
};

int main()
{


return 0;
}