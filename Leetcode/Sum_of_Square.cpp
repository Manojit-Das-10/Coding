#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(n % (i+1) == 0)
        {
             sum = sum + nums[i] * nums[i];
        }
    }
    return sum;
    }
};

int main() {
    Solution sol;

    // Test with sample vector
    vector<int> nums = {1, 2, 3, 4, 5}; // Sample vector

    // Call the sumOfSquares method
    int result = sol.sumOfSquares(nums);

    // Print the result
    cout << "Sum of squares of numbers divisible by their index: " << result << endl;

    return 0;
}
