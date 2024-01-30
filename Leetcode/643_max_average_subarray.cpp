#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Brute Force method
    // T.C. = O(N^2)
    double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
    int left = 0;
    int right = k-1;
    int maxsum = INT_MIN;
    while(right<n)
    {
        int sum = 0;
        for(int i=left; i<=right; i++)
        {
            sum += nums[i];
        }
         maxsum = max(maxsum,sum);
        left++,right++;
    }
    double maxavg = maxsum / (double) k;
    return maxavg;
    }
};

int main()
{


return 0;
}