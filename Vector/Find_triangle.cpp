#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        int i=0;
        int j=1;
        int k=2;
        string equilateral = "equilateral";
        string isosceles = "isosceles";
        string scalene = "scalene";
        string none = "none";
        if(nums[i]>=nums[j]+nums[k] || nums[j]>=nums[i]+nums[k] || nums[k]>=nums[i]+nums[j])
        {
            return none;
        }
        else if(nums[i]==nums[j] && nums[j]==nums[k]){
            return equilateral;
        }
        else if(nums[i]==nums[j] || nums[i]==nums[k] || nums[j]==nums[k])
        {
            return isosceles;
        }
        
        else
        {
            return scalene;
        }
        
    }
};

int main()
{
Solution solution;
vector<int> sides = {3, 4, 5};
string result = solution.triangleType(sides);
cout << "Triangle type: " << result << endl;
return 0;
}