#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
     int n = words.size();
     int count = 0;
     for(int i=0 ; i < n ; i++)
     {
         for(int j=i+1 ; j < n ; j++)
         {
             string s = words[j];
             reverse(s.begin(),s.end());
             if(words[i] == s)
             {
                 count ++;
             }
         }
     }  
     return count; 
    }
};

int main() {
    Solution sol;

    // Test with sample vector of strings
    vector<string> words = {"abcd", "dcba", "tac", "cat", "dog", "god"}; // Sample vector
    int pairsCount = sol.maximumNumberOfStringPairs(words);

    // Print the count of pairs
    cout << "Count of pairs with reversed strings: " << pairsCount << endl;

    return 0;
}
