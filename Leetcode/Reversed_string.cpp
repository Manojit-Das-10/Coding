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

int main()
{


return 0;
}