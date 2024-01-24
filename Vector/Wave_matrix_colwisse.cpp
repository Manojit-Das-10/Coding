#include<bits/stdc++.h>
using namespace std;

void WavematrixColwise(vector<vector<int>>v)
{
    int m = v.size();
    int n = v[0].size();
    for (int wavematrix= 0; wavematrix < n; wavematrix++)
    {
        if((wavematrix & 1)==0)
        {
            for (int i = 0; i < m; i++)
            {
                cout<<v[i][wavematrix]<<" ";
            }
            
        }
        else
        {
            for (int i = m-1; i >= 0; i--)
            {
                cout<<v[i][wavematrix]<<" ";
            }
            
        }
    }
    
}
int main()
{
vector<vector<int>>v{
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
};
cout<<"Row wise wave : ";
WavematrixColwise(v);
return 0;
}