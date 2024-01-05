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


return 0;
}