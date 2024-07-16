#include<bits/stdc++.h>
using namespace std;

// TC - O(2^n) & SC - O(n)

class Solution {
public:

    int robHelper(vector<int>& nums,int i){
        // Base Case
        if(i >= nums.size()){
            return 0;
        }
        int robAmnt1 = nums[i] + robHelper(nums,i+2);
        int robAmnt2 = 0 + robHelper(nums,i+1);
        return max(robAmnt1,robAmnt2);
    }

    int rob(vector<int>& nums) {
        return robHelper(nums,0);
    }
};

int main()
{
Solution sol;
vector<int>nums{2,1,1,2};

int ans = sol.rob(nums);
cout<<"The max rob amount is: "<<ans;

return 0;
}