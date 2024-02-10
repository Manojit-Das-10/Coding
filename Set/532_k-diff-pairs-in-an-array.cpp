#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    set<pair<int,int>>ans;
    int i=0;
    int j=1;
    while(j<n)
    {
        int diff = nums[j]-nums[i];
        if(diff==k)
        {
            ans.insert({nums[i],nums[j]});
            i++;
            j++;
        }
        else if(diff > k)
        {
            i++;
        }
        else{
            j++;
        }
        if(i==j)
            {
                j++;
            }
    }
    return ans.size();
    }
};

int main()
{

Solution solution;
vector<int> nums = {3, 1, 4, 1, 5};
int k = 2;
cout << "Number of pairs with difference " << k << ": " << solution.findPairs(nums, k) << endl;

return 0;
}