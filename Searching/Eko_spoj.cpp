#include<bits/stdc++.h>
using namespace std;

bool isPossibleSolution(vector<long long int>trees,long long int m,long long mid){
    long long int woodCount = 0;
    for (long long int i = 0; i < trees.size(); i++)
    {
        if(trees[i] > mid)
        {
            woodCount += trees[i] - mid;
        }
    }
    return woodCount >= m;
}

long long int maxBladeHeight(vector<long long int>trees,long long int m){

long long int start = 0 , end , ans = -1;
end = *max_element(trees.begin(),trees.end());

    while (start <= end)
    {
        long long int mid = start + (end-start)/2;
        if(isPossibleSolution(trees,m,mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
long long int n,m;
cout<<"Number of trees present:";
cin>>n;
cout<<"Amount of wood required in meter:";
cin>>m;
vector<long long int> trees;
cout<<"Heights of the trees are:"<<endl;
while (n--)
{
    long long int height;
    cin>>height;
    trees.push_back(height);
}

cout<<"The max blade height:"<<maxBladeHeight(trees,m)<<endl;

return 0;
}