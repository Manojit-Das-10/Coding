#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int i=0;
    int n= nums.size();
    while(i<n-2)
    {
        if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2])
        {
            nums.erase(nums.begin()+i);
            n--;
        }
        else
        {
            i++;
        }
    }  
    return nums.size();
    }
};

int main()
{


return 0;
}