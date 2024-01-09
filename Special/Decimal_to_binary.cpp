#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cout<<"Enter the number:";
cin>>n;
vector<int>ans;
int sum=0;
while (n>0)
{
    sum=n%2;
    ans.push_back(sum);
    // n=n>>1;
    n=n/2;
}
reverse(ans.begin(),ans.end());
for (int i = 0; i <ans.size(); i++)
{
    cout<<ans[i]<<" ";
}

return 0;
}