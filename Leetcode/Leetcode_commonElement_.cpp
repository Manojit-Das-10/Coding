#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans(2);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums1[i]==nums2[j]){
                    ans[0]++;
                    break;
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(nums1[j]==nums2[i]){
                    ans[1]++;
                    break;
                }
            }
        }
        return ans;
        
    }
};


int main() {
    Solution sol;

    // Test with sample vectors
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {3, 4, 5, 6, 7};

    // Call the findIntersectionValues function
    vector<int> intersectionValues = sol.findIntersectionValues(nums1, nums2);

    // Print the counts of intersection values in both vectors
    cout << "Count of intersection values in nums1: " << intersectionValues[0] << endl;
    cout << "Count of intersection values in nums2: " << intersectionValues[1] << endl;

    return 0;
}
