#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        
        int left = 1;
        for (int i = 0; i < n; i++) {
            result[i] *= left;
            left *= nums[i];
        }
        
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= right;
            right *= nums[i];
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the array elements:"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> Res = sol.productExceptSelf(nums);
    cout << "The product array is: ";
    for (int num : Res) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
