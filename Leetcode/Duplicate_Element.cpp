#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int j=0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if(nums[i] != nums[j])
        {
            i++;
            nums[j] = nums[i];
        }

    }
    return j+1;
     
    }
};
int main() {
    Solution sol;

    // Test with sample vector
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5}; // Sample vector
    int newSize = sol.removeDuplicates(nums);

    // Print the modified vector and its new size
    cout << "Modified vector after removing duplicates: ";
    for (int i = 0; i < newSize; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "New size of the vector: " << newSize << endl;

    return 0;
}
