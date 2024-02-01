#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int maxsum = nums[0];
    int temp = nums[0];
    for(int i=1; i<n; i++)
    {
        temp = max(nums[i],temp + nums[i]);
        maxsum = max(maxsum,temp);
    }
    return maxsum;
    }
};

int main()
{

vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution solution;
    int maxSubArraySum = solution.maxSubArray(nums);

    cout << "Maximum subarray sum: " << maxSubArraySum << endl;

return 0;
}