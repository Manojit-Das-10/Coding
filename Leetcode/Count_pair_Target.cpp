#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
    int n = nums.size();
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j < n; j++)
       {
         if(nums[i]+nums[j] < target)
         answer++;
       }
         
    }
    return answer;
    }
    };

int main()
{
Solution sol;

    // Test with sample vector and target value
    vector<int> nums = {1, 3, 5, 7, 9}; // Sample vector
    int target = 10;

    // Call the countPairs function
    int result = sol.countPairs(nums, target);

    // Print the count of pairs whose sum is less than the target
    cout << "Count of pairs whose sum is less than " << target << ": " << result << endl;


return 0;
}