#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        int n = nums[nums.size()-1];
        int ans = nums[nums.size()-1];
        for(int i = 1; i<k; i++){
            n+=1;
            ans+=n;
        }
        return ans;
    }
};


int main() {
    Solution sol;

    // Test with sample vector and value of k
    vector<int> nums = {2, 3, 1}; // Sample vector
    int k = 5; // Sample value of k

    // Call the maximizeSum function
    int result = sol.maximizeSum(nums, k);

    // Print the maximized sum
    cout << "Maximized sum: " << result << endl;

    return 0;
}
