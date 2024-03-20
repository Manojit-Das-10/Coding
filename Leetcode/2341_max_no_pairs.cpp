#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int i=0,count=0,n=nums.size();
        while(i<n-1)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
                i+=2;
            }
            else
                i++;
        }
        ans.push_back(count);
        ans.push_back(n-count*2);
        return ans;
    }
};


int main()
{
Solution sol;

    // Test with sample vector
    vector<int> nums = {1, 2, 3, 1, 1, 3}; // Sample vector
    vector<int> result = sol.numberOfPairs(nums);

    cout << "Number of pairs: " << result[0] << endl;
    cout << "Number of unpaired elements: " << result[1] << endl;

return 0;
}