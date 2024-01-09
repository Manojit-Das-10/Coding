#include<bits/stdc++.h>
using namespace std;


int main()
{
vector<vector<int>>v;
vector<int>v1(10,0);
vector<int>v2(8,1);
vector<int>v4(14,0);
vector<int>v5(1,1);
vector<int>v6(20,0);
vector<int>v7(11,1);

v.push_back(v1);
v.push_back(v2);
v.push_back(v4);
v.push_back(v5);
v.push_back(v6);
v.push_back(v7);

for (int i = 0; i < v.size(); i++)
{
    for (int j = 0; j < v[i].size(); j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    
}


return 0;
}