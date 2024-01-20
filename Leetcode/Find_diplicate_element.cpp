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

int main()
{


return 0;
}