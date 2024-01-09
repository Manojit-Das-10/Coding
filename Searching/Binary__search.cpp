#include<bits/stdc++.h>
using namespace std;

int expontial(vector<int>arr,int x){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==x)
        {
            return 1;
        }
        else if (arr[mid]>x)
        {
            e=mid-1;
            
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return 0;

}

int main(){
    vector<int>arr{3,4,5,6,11,13,15,33,56,70};
    int x= 560;
    int ans=expontial(arr,x);
    if(ans==1)
    {
        cout<<"True"<<endl;
    }
    else if(ans==0)
    {
        cout<<"False";
    }
    
}