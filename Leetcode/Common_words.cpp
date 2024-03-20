#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
     int n = words.size();
     vector<int>answer;
     
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<words[i].size();j++)
         {
           if(words[i][j]==x)
           {
           answer.push_back(i);
           break;
           }
         }
         
     }
     return answer;
    }
};

int main()
{
Solution sol;

    // Test with sample vector of strings
    vector<string> words = {"apple", "banana", "orange", "grape", "kiwi"};
    char x = 'a';

    // Call the findWordsContaining function
    vector<int> result = sol.findWordsContaining(words, x);

    // Print the indices of words containing the character 'x'
    cout << "Indices of words containing the character '" << x << "':" << endl;
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

return 0;
}