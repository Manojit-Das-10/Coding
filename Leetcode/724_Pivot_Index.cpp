#include<bits/stdc++.h>
using namespace std;
//Method 1:
//T.C.=O(n²)
// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {       
//         int n = nums.size();
//         for(int i=0; i<n; i++)
//         {
//             int lsum=0;
//             int rsum=0;
//             for(int j=0; j<i; j++)
//             {
//                 lsum+=nums[j];
//             }
//             for(int j=i+1; j<n; j++)
//             {
//                 rsum+=nums[j];
//             }
//             if(lsum==rsum)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

// Method 2:
//T.C.= O(n)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {   
        vector<int>lsum(nums.size(),0);   
        vector<int>rsum(nums.size(),0);   
        int n = nums.size();
        for(int i=1; i<n; i++)
        {
            lsum[i] = lsum[i-1]+nums[i-1];
        }
        for(int i=n-2; i>=0; i--)
        {
            rsum[i]= rsum[i+1]+nums[i+1];
        }
        for(int i=0; i<n; i++)
        {
            if(lsum[i]==rsum[i])
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{


return 0;
}