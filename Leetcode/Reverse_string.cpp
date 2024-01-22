#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
    reverse(s.begin(), s.end());

        // Reverse individual words
        istringstream iss(s);
        string word;
        string reversed;

        while (iss >> word) {
            reverse(word.begin(), word.end());
            reversed += word + " ";
        }

        // Remove the trailing space, if any word is 
        if (!reversed.empty()) {
            reversed.pop_back();
        }

        return reversed;
    }
};

int main()
{


return 0;
}