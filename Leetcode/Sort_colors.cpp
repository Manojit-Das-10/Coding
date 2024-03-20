#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n = nums.size();
    int left = 0;
    int right = n-1;
    int index=0;
    while(index<=right)
    {
        if(nums[index]==0)
        {
            swap(nums[index],nums[left]);
            left++;
            index++;
        }

        else if(nums[index]==2)
        {
            swap(nums[index],nums[right]);
            right--;
        }

        else
        {
            index++;
        }
    }
    
    }
    
};

int main() {
    Solution sol;

    // Test with sample vector
    vector<int> nums = {2, 0, 2, 1, 1, 0}; // Sample vector

    // Call the sortColors method
    sol.sortColors(nums);

    // Print the sorted vector
    cout << "Sorted colors vector:" << endl;
    for (int val : nums) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
