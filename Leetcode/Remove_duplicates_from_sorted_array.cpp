#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int i=0;
    int n= nums.size();
    while(i<n-2)
    {
        if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2])
        {
            nums.erase(nums.begin()+i);
            n--;
        }
        else
        {
            i++;
        }
    }  
    return nums.size();
    }
};

int main() {
    Solution sol;

    // Test with sample vector
    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3}; // Sample vector
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
