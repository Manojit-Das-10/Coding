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


return 0;
}