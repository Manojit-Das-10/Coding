#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     // Brute Force method
//     // T.C. = O(N^2)
//     double findMaxAverage(vector<int>& nums, int k) {
//     int n = nums.size();
//     int left = 0;
//     int right = k-1;
//     int maxsum = INT_MIN;
//     while(right<n)
//     {
//         int sum = 0;
//         for(int i=left; i<=right; i++)
//         {
//             sum += nums[i];
//         }
//          maxsum = max(maxsum,sum);
//         left++,right++;
//     }
//     double maxavg = maxsum / (double) k;
//     return maxavg;
//     }
// };

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
    int i = 0;
    int j = k-1;
    // int maxsum = INT_MIN;
    int sum = 0;
    for(int y=i; y<=j; y++)
    {
        sum += nums[y];
    }
    int maxsum = sum;
    j++;
    while(j<n)
    {
        sum -= nums[i++];
        sum += nums[j++];
        maxsum = max(maxsum , sum);
    }
    double maxavg = maxsum / (double) k;
    return maxavg;
    }
};

int main()
{

vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    Solution solution;
    double maxavg = solution.findMaxAverage(nums, k);

    cout << "Maximum average of " << k << " consecutive elements: " << maxavg << endl;


return 0;
}