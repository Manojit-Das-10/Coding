#include<bits/stdc++.h>
using namespace std;

int Binarysearch(vector<int>v){
    int n = v.size();
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(s==e)
        {
            return s;
        }
        if(mid%2==0)
        {
            if(v[mid]==v[mid+1])
            {
                s=mid+2;
            }
            else
            {
                e=mid;
            }
        }
        else{
            if(v[mid]==v[mid-1])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        } 
    }
    return -1;
}

int main()
{
vector<int>v{1,1,2,2,3,3,4,4,3,6,6,4,4};
int ans = Binarysearch(v);
if(ans != -1)
{
    cout<<"Odd element is "<<v[ans]<<" at index "<<ans<<endl;
}
else
{
    cout<<"No odd element."<<endl;
}
return 0;
}