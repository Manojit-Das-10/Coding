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

int main() {
    Solution sol;

    // Test with sample vector of words and an acronym
    vector<string> words = {"International", "Business", "Machines"}; // Sample vector of words
    string s = "IBM"; // Sample acronym

    // Call the isAcronym method
    bool result = sol.isAcronym(words, s);

    // Print the result
    if (result) {
        cout << "The given words form the acronym." << endl;
    } else {
        cout << "The given words do not form the acronym." << endl;
    }

    return 0;
}
