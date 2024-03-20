#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSum(vector<int>& nums) {
    int n = nums.size();
    int ans=INT_MAX;
    for(int i=0; i<n; i++)
    {
        // if(i>0 && i<n)
        // {
        //     if(nums[i]>nums[i+1] && nums[i] >nums[i-1])
        //         {
        //             sum=i+(i+1)+(i-1);
        //         }
        // }
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(nums[j]>nums[i] && nums[j] >nums[k])
                {
                    ans=min(ans,nums[i]+nums[j]+nums[k]);
                }              
            }
        }
    }
    if(ans==INT_MAX)
    {
        return -1;
    }
    return ans;
    }
};
int main()
{
Solution sol;

    // Test with sample vector
    vector<int> nums = {1, 3, 2, 4, 5}; // Sample vector
    int result = sol.minimumSum(nums);

    if (result == -1) {
        cout << "There are no such elements that satisfy the conditions." << endl;
    } else {
        cout << "Minimum sum of elements satisfying the conditions: " << result << endl;
    }


return 0;
}