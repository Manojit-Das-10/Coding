#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
}

int main()
{

vector<int>v;
while (true)
{
    int d;
    cin>>d;
    v.push_back(d);
    cout<<"capacity:"<<v.capacity()<<" size:"<<v.size()<<endl;
}

print(v);
return 0;
}