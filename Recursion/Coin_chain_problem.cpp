#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr , int target){
    // Base Case
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }
    // 1 case solve karo
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr,target - arr[i]);
        if(ans != INT_MAX){
            mini = min(mini , ans+1);
        }
    }
    
    return mini;
}

int main()
{
vector<int>arr{2,1};
int target = 5;

int ans = solve(arr,target);
cout<<"Minimum no of coin required: "<<ans<<endl;

return 0;
}