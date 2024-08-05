#include<bits/stdc++.h>
using namespace std;

    void solve(vector<string>&ans,int index,string output,vector<string>&mapping,string digits){
        // Base case
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }
        // Solve 1 case
        int digit = digits[index] - '0';
        string value = mapping[digit];
        for(int i=0 ; i < value.length(); i++){
            char ch = value[i];
            // Include
            output.push_back(ch);
            // Recursion
            solve(ans,index+1,output,mapping,digits);
            // backtrack
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length() == 0){
            return ans;
        }
        string output = "";
        int index = 0;
        vector<string>mapping(10);
        mapping[2]="abc";
        mapping[3]="def";
        mapping[4]="ghi";
        mapping[5]="jkl";
        mapping[6]="mno";
        mapping[7]="pqrs";
        mapping[8]="tuv";
        mapping[9]="wxyz";

        solve(ans,index,output,mapping,digits);

        return ans;
    }


int main() {
string digits;
cout<<"Enter Number:";
cin>>digits;
vector<string> result = letterCombinations(digits);

cout << "Letter Combinations: " << endl;
for (const string& s : result) {
    cout << s << endl;
}


return 0;
}