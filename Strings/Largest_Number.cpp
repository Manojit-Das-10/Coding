#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Time Complexity: O(n log n)
    // Space Complexity: O(n)

    static bool mycomp(string a,string b){
        string t1=a+b;
        string t2=b+a;
        return t1>t2;
    }

    string largestNumber(vector<int>& nums) {
        vector<string>snums;
        for(auto m:nums){
            snums.push_back(to_string(m));
        }

        sort(snums.begin(),snums.end(),mycomp);
        if(snums[0] == "0"){
            return "0";
        }

        string ans = "";
        for(auto st:snums){
            ans += st;
        }
        return ans;

    }
};

int main()
{
Solution sol;
int n;
cout<<"String size:";
cin>>n;
vector<int>nums;
for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    nums.push_back(temp);
}
string ans = sol.largestNumber(nums);
cout<<"The largest number is:"<<ans<<endl;

return 0;
}