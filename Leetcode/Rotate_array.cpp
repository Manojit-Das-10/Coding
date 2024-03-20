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

int main() {
    Solution sol;

    // Test with sample vector and value of k
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7}; // Sample vector
    int k = 3; // Value of k

    // Call the rotate method
    sol.rotate(nums, k);

    // Print the rotated vector
    cout << "Rotated Vector:" << endl;
    for (int val : nums) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
