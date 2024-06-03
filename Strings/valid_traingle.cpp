#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string isPossible(int a, int b, int c) {
        // code here
        if((a+b > c) && (b+c>a) && (c+a>b))
        {
            return "YES";
        }
        else
        {
            return "NO";
        }
    }
};

int main()
{
Solution sol;
int a, b, c;
cout<<"Enter the triangle size:"<<endl;
cin>>a>>b>>c;
string ans = sol.isPossible(a,b,c);
cout<<ans;
return 0;
}