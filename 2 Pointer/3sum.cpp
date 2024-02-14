#include<bits/stdc++.h>
using namespace std;


// T.C. - O(n^2) 
// S.C. - O(n^2) 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        // Sorting the array
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 2; i++) {
            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int l = i + 1;
            int r = n - 1;

            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    // Skip duplicates
                    while (l < r && nums[l] == nums[l + 1])
                    {
                        l++;
                    }
                       
                    while (l < r && nums[r] == nums[r - 1]){
                        r--;
                    }
                       
                    l++;
                    r--;
                }
                else if(sum < 0)
                    l++;
                else
                {
                    r--;
                } 
            }
        }
        return ans;
    }
};

int main()
{

 Solution solution;

    // Example usage:
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = solution.threeSum(nums);

    // Print the result
    for (const auto& triplet : result) {
        cout << "[";
        for (int num : triplet) {
            cout << num << ",";
        }
        cout << "]" << endl;
    }

return 0;
}