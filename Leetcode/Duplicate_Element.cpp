#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int j=0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if(nums[i] != nums[j])
        {
            i++;
            nums[j] = nums[i];
        }

    }
    return j+1;
     
    }
};
int main()
{


return 0;
}