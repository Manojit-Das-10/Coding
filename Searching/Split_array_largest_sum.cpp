#include<bits/stdc++.h>
using namespace std;

// Time complexity: O(n log r)
// Space complexity: O(1)

class Solution {
public:
    bool check(vector<int> nums,int n,int k,int t){
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            if(k == 0) return false;
            if(sum == t){
                sum = 0;
                k--;
            }
            else if(sum >t){
                sum = nums[i];
                if(nums[i]>t) return false;
                k--;
            }
        }
        if(sum!=0 and k == 0) return false;
        return true;
    }

    int splitArray(vector<int>& nums, int K) {
        int N = nums.size();
        int l = 1;
        int r = accumulate(nums.begin(),nums.end(),0ll);
        int ans=0;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(check(nums,N,K,mid)){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};

int main()
{
Solution sol;
vector<int>nums;
int n;
cout<<"Enter the array size:";
cin>>n;
for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
   nums.push_back(temp);
}
int K;
cout<<"Split sub-array size:";
cin>>K;
int ans = sol.splitArray(nums,K);
cout<<"The Max sum of Split array is:"<<ans<<endl;
return 0;
}