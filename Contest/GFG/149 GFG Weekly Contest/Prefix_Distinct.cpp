#include<bits/stdc++.h>
using namespace std;

// Time Complexity - O(n)
// space Complexity - O(n)

class Solution{   
public:
    vector<int> prefixDistinct(int n, vector<int> &arr)
    {
        vector<int>ans;
        unordered_set<int>s;
        for(int i=0; i<n; i++)
        {
            s.insert(arr[i]);
            ans.push_back(s.size());
        }
        return ans;
    }
};

int main()
{
Solution sol;
vector<int>arr;
int n;
cout<<"Enter the size of the array:";
cin>>n;
for (int i = 0; i < n; i++)
{
   int temp;
   cin>>temp;
   arr.push_back(temp);
}
vector<int>ans = sol.prefixDistinct(n,arr);
cout<<"The prefix distinct of the array is:"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<ans[i]<<" ";
}

return 0;
}