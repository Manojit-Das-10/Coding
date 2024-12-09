#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;

            // Compare mid with its next element
            if (nums[mid] > nums[mid + 1]) {
                // Peak lies in the left half (including mid)
                right = mid;
            }
            else {
                // Peak lies in the right half (excluding mid)
                left = mid + 1;
            }
        }
        // Left will converge to the peak element
        return left;
    }
};


int main() {
Solution sol;

vector<int>nums;
int n;
cout<<"Range:";
cin>>n;

for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    nums.push_back(temp);
}

int ans = sol.findPeakElement(nums);

cout<<"The is peak element present in the index: "<<ans<<endl;


return 0;
}