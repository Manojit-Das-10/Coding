#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0];
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==ans)
            {
                count++;
            }
            else{
                count--;
            }
            if(count==0)
            {
                ans = nums[i+1];
            }
        }
        return ans;
    }
};


int main()
{
vector<int> nums = {3, 3, 4,3,2,3,4}; 
Solution obj; // Create an instance of the Solution class
int result = obj.majorityElement(nums);
cout << "The majority element is: " << result << endl;
return 0;
}