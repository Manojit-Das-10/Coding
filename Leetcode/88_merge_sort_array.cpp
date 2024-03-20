#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m,vector<int>& nums2, int n) {
        // Resize nums1 to have enough space for both arrays
        nums1.resize(m + n);

        // Merge the two arrays
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            } 
            else 
            {
                nums1[k--] = nums2[j--];
            }
        }

        // If there are remaining elements in nums2, copy them to nums1
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

    }
};

int main()
{

Solution sol;

    // Test with sample vectors
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    // Call the merge function
    sol.merge(nums1, m, nums2, n);

    // Print the merged array
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

return 0;
}