#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

// time complexity is O(n * m log m), where 'n' is the number of strings and 'm' is the length of the longest string
// space complexity is O(n)

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(auto str:strs){
            string s = str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            ans.push_back(it -> second);
        }
        return ans;

    }

/*
    // time complexity is O(n * m), where 'n' is the number of strings and 'm' is the length of the longest string
    // space complexity is O(n)

    array<int,256>hash(string s){
        array<int,256>hash = {0};
        for(int i=0; i<s.size();i++){
            hash[s[i]]++;
        }
        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int,256>,vector<string>>mp;
        for(auto str:strs){
            mp[hash(str)].push_back(str);
        }

        vector<vector<string>>ans;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
                    ans.push_back(it -> second);
        }

        return ans;
    }
*/
    
};

int main()
{
Solution sol;
vector<string>strs;
int n;
cout<<"String size:";
cin>>n;
for (int i = 0; i < n; i++)
{
    string temp;
    cin>>temp;
    strs.push_back(temp);
}
vector<vector<string>>ans = sol.groupAnagrams(strs);
cout<<"Group anagrams are:"<<endl;
// Printing the group anagrams
    for (auto group : ans) {
        for (auto str : group) {
            cout << str << " ";
        }
        cout << endl;
    }
return 0;
}