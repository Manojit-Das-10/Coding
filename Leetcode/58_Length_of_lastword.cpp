#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
    int count=0;
    int size=s.size();
    for(int i=size-1;i>=0; i--)
    {
        if(s[i]==' ')
        {
            if(count>0)
            {
                break;
            }
        }
        else
        {
            count++;
        }
    }  
    return count;
    }
};

int main()
{

Solution sol;
// Test with sample string
string s = "Hello World";
int result = sol.lengthOfLastWord(s);
cout << "Length of last word: " << result << endl;
return 0;
}