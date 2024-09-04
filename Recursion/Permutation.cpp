#include<bits/stdc++.h>
using namespace std;

void permuteUniqueHelper(vector<int>& nums, vector<vector<int>>&ans,int start){
    // base case
    if(start >= nums.size()){
        ans.push_back(nums);
        return;
    }

    unordered_map<int,bool>visited;

    for(int i=start; i<nums.size(); i++){
        if(visited.find(nums[i]) != visited.end()){
            continue;
        }
        visited[nums[i]]=true;
        swap(nums[i],nums[start]);
        permuteUniqueHelper(nums,ans,start+1);
        swap(nums[i],nums[start]);
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>>ans;
    permuteUniqueHelper(nums,ans,0);
    return ans;
}

int main() {
    int n;
    cout << "Enter Size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> ans = permuteUnique(nums);

    cout << "Unique permutations are: " << endl;
    for(auto& permutation : ans) {
        for(int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
