#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve(vector<string>&ans,int n , int open, int close , string output){
        // Base case
        if(open == 0 & close == 0){
            ans.push_back(output);
            return;
        }

        // Open Bracket
        if(open > 0){
            output.push_back('(');
            solve(ans,n,open-1,close,output);
            // Backtrack
            output.pop_back();
        }

        // Close Bracket
        if(close > open){
            output.push_back(')');
            solve(ans,n,open,close-1,output);
            // Backtrack
            output.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string output="";
        int open = n;
        int close = n;

        solve(ans,n,open,close,output);
        return ans;
    }
};

int main() {
Solution sol;
int n;
cout<<"No. of Bracket:";
cin>>n;
vector<string> result = sol.generateParenthesis(n);

cout << "Generated Parentheses: " << endl;
for (const string& s : result) {
    cout << s << endl;
}


return 0;
}