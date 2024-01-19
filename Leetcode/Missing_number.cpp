#include<bits/stdc++.h>
using namespace std;

//Method sorting -> T.C.= O(nlog(n))
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int ans;

//         sort(nums.begin(), nums.end());

//         for (int i = 0; i < n; i++) {
//             if (nums[i] != i) {
//                 ans = i;
//                 break;
//             }
//         }

//         return ans;
//     }
// };


//Best Method -> T.C.= O(n)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum =0;
    for(int i=0; i<n; i++)
    {
        sum = sum + nums[i];
    }
    int Totalsum = ((n)*(n+1))/2;
    int ans = Totalsum - sum;
    return ans;     
    }
};

int main()
{


return 0;
}