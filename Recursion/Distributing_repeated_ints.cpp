#include<bits/stdc++.h>
using namespace std;

bool canDistribute_helper(vector<int>& counts, vector<int>& quantity, int ithcustomer) {
    // Base case
    if (ithcustomer >= quantity.size()) {
        return true;
    }

    for (int i = 0; i < counts.size(); i++) {
        if (counts[i] >= quantity[ithcustomer]) {
            counts[i] -= quantity[ithcustomer];
            if (canDistribute_helper(counts, quantity, ithcustomer + 1)) {
                return true;
            }
            // Backtracking
            counts[i] += quantity[ithcustomer];
        }
    }
    return false;
}

bool canDistribute(vector<int>& nums, vector<int>& quantity) {
    unordered_map<int, int> countMap;
    for (auto num : nums) {
        countMap[num]++;
    }
    
    vector<int> counts;
    for (auto it : countMap) {
        counts.push_back(it.second);
    }
    
    // Sort quantity in descending order
    sort(quantity.rbegin(), quantity.rend()); 
    return canDistribute_helper(counts, quantity, 0);
}

int main() {
    int n, m;

    cout << "Size of the nums vector: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in the nums vector" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Size of the quantity vector: ";
    cin >> m;

    vector<int> quantity(m);
    cout << "Enter the elements in the quantity vector" << endl;
    for (int i = 0; i < m; i++) {
        cin >> quantity[i];
    }

    bool ans = canDistribute(nums, quantity);
    if (ans) {
        cout << "It is possible";
    } else {
        cout << "It is not possible";
    }

    return 0;
}
