#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    if(n <= 2)
    {
        return -1;
    }
    return nums[1];
    }
};

int main() {
    Solution sol;

    // Test with sample vector
    vector<int> nums = {2, 1, 3}; // Sample vector
    int nonMinOrMax = sol.findNonMinOrMax(nums);

    // Print the non-minimum and non-maximum element
    if (nonMinOrMax == -1) {
        cout << "The vector does not contain enough elements." << endl;
    } else {
        cout << "Non-minimum and non-maximum element: " << nonMinOrMax << endl;
    }

    return 0;
}
