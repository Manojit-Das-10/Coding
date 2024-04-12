#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minJumps(int n, vector<int> &arr) {
        // Code Here
        int ans = n-1;
        unordered_map<int,int>m;
        for(int i=n-1; i>=0; i--){
            if(m.find(arr[i]) != m.end())
            {
                ans = min(ans,n-(m[arr[i]]-i));
            }
            else{
                m[arr[i]] = i;
            }
        }
        
        return ans;
    }
};

int main()
{
Solution sol;
int n;
cout<<"Enter the size of array:";
cin>>n;
vector<int>arr;
for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    arr.push_back(temp);
}
int ans = sol.minJumps(n,arr);
cout<<"Minimum jump to reach last tower is:"<<ans<<endl;
return 0;
}