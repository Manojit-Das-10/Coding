#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int>&v, int s , int e , int key){
    // Base Case
    if(s>e){
        return -1;
    }
    // Processing
    int mid = s + (e-s)/2;
    if(v[mid] == key){
        return mid;
    }
    // RR
    // else if(v[mid] < key){
    //     return binary_search(v,mid+1,e,key);
    // }
    // else{
    //     return binary_search(v,s,mid-1,key);
    // }
    return (v[mid] < key) ? binary_search(v,mid+1,e,key) : binary_search(v,s,mid-1,key);
}

int main()
{
int n;
cout<<"Range:";
cin >> n;
vector<int> v;
for(int i = 0; i < n; ++i) {
    int temp;
    cin >> temp;
    v.push_back(temp);
}

int s = 0;
int e = n-1;
int key;
cout<<"search element:";
cin>>key;

int ans = binary_search(v,s,e,key);

if(ans != -1){
    cout<<"Element found at index: "<<ans;
}
else{
    cout<<"Element not found.";
}

// cout<<"Answer is: "<<ans<<endl;

return 0;
}