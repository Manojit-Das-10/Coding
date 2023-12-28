#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
       string answer;
       int n = words.size();
       for(int i=0; i<n; i++)
       {
           answer.push_back(words[i][0]);
       } 
       return answer == s;
    }
};

int main()
{


return 0;
}