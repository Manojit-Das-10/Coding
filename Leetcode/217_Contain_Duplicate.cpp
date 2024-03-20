#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size()-1; i++)
    {
        if(nums[i]==nums[i+1])
        {
            return true;
        }
    }   
    return false; 
    }
};

int main()
{
Solution sol;

    // Test with sample vector
    vector<int> nums = {1, 2, 3, 1}; // Sample vector containing duplicates
    bool result = sol.containsDuplicate(nums);

    if (result) {
        cout << "The vector contains duplicates." << endl;
    } else {
        cout << "The vector does not contain duplicates." << endl;
    }

return 0;
}