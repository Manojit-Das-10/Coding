#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
   //Method 1
    // int n = nums.size();
    // sort(nums.begin(),nums.end());
    // for(int i=0; i<n-1; i++)
    // {
    //     if(nums[i]==nums[i+1])
    //     {
    //         return nums[i];
    //     }
    // }
    // return -1;

    // Method 2
    while(nums[0] !=nums[nums[0]])
    {
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
    }
};

int main() {
    Solution sol;

    // Test with sample vector
    vector<int> nums = {1, 3, 4, 2, 2}; // Sample vector
    int duplicate = sol.findDuplicate(nums);

    // Print the duplicate element found
    cout << "Duplicate element in the vector: " << duplicate << endl;

    return 0;
}
