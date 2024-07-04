#include<bits/stdc++.h>
using namespace std;

bool checkSorted (vector<int>&v, int&n , int i){

    // Base Case
    if(i == n-1)
    {
        return true;
    }

    // Processing
    if(v[i+1] < v[i]){
        return false;
    }

    // RR
    return checkSorted(v,n,i+1);


}

int main()
{
int n;
cout<<"Enter the array size: ";
cin>>n;
vector<int> v;
for(int i = 0; i < n; ++i) {
    int temp;
    cin >> temp;
    v.push_back(temp);
}
int i = 0;

bool isSorted = checkSorted(v,n,i);

if(isSorted){
    cout<<"Array is sorted.";
}
else{
    cout<<"Array is not sorted.";
}

return 0;
}