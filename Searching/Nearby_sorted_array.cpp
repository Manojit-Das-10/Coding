#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>v,int target){
    int n = v.size();
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;

        if(v[mid]==target)
        {
            return mid;
        }
        if(v[mid+1]<n && v[mid+1]==target)
        {
            return mid+1;
        }
        if(v[mid-1]>=0 && v[mid-1]==target)
        {
            return mid-1;
        }
        else if(target>v[mid])
        {
            s=mid+2;
        }
        else{
            e=mid-2;
        }
    }
    return -1;
    
}

int main()
{
vector<int>v{10,3,40,20,50,80,70};
int target;
cout<<"Enter the target element:";
cin>>target;
int ans = binarysearch(v,target);
if(ans!=-1){
cout<<"The "<<target<<" element found at index "<<ans<<endl;
}
else{
    cout<<"Element not found."<<endl;
}
return 0;
}