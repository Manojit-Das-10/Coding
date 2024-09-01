#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void combinationSum_Helper(vector<int>& candidates, int target, vector<vector<int>>&ans, vector<int>&v, int index){
        // Base Case
        if(target == 0){
            ans.push_back(v);
            return;
        }
        if(target < 0){
            return;
        }

        for(int i = index; i< candidates.size(); i++){
            if(i > index && candidates[i] == candidates[i-1]){
                continue;
            }
            v.push_back(candidates[i]);
            combinationSum_Helper(candidates,target-candidates[i],ans,v,i+1);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        combinationSum_Helper(candidates,target,ans,v,0);
        // set<vector<int>>st;
        // for(auto e:ans){
        //     st.insert(e);
        // }
        // ans.clear();
        // for(auto e:st){
        //     ans.push_back(e);
        // }
        return ans;
    }
};

int main() {
Solution sol;
int n;
cout<<"Vector Size:";
cin>>n;
vector<int>candidates;
for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    candidates.push_back(temp);
}

int target;
cout<<"Target:";
cin>>target;

vector<vector<int>>ans = sol.combinationSum2(candidates,target);
for(auto &val : ans){
    for(auto &num : val){
        cout<<num<<" ";
    }
    cout<<endl;
}


return 0;
}