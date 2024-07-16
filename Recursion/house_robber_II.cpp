#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int robHelper(vector<int>& nums, int start, int end) {
        // Base Case
        if (start > end) {
            return 0;
        }
        // solve case and RE
        int robAmnt1 = nums[start] + robHelper(nums, start + 2, end);
        int robAmnt2 = 0 + robHelper(nums, start + 1, end);
        return max(robAmnt1, robAmnt2);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 0) return 0;

        int case1 = robHelper(nums, 0, n - 2);
        int case2 = robHelper(nums, 1, n - 1);

        return max(case1, case2);
    }
};


int main()
{
Solution sol;
vector<int>nums{2,3,2};

int ans = sol.rob(nums);
cout<<"Max rob amount is: "<<ans<<endl;

return 0;
}