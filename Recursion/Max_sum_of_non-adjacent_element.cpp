#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v , int i , int sum , int &maxi){
    // Base case
    if(i >= v.size()){
        maxi = max(sum , maxi);
        return;
    }
    

    // Include
    solve(v,i+2,sum+v[i],maxi);

    // Exclude
    solve(v,i+1,sum,maxi);
}

int main()
{
vector<int>v;
int n;
cout<<"Enter the vector range:";
cin>>n;
for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    v.push_back(temp);
}

int sum = 0;
int i = 0;
int maxi = INT_MIN;

solve(v,i,sum,maxi);

cout<<"The maximum non adjacent sum is:"<<maxi<<endl;


return 0;
}