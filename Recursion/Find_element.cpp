#include<bits/stdc++.h>
using namespace std;

int find_Element(string arr, int i, int n, char key,vector<int>&ans){
    // Base Case
    if(i>=arr.size()){
        return -1;
    }
    // Processinng
    if(arr[i] == key){
        ans.push_back(i);
    }
    // RR
    return find_Element(arr,i+1,n,key,ans);
}

int main()
{
string arr = "manojitdas";
int n = arr.length();
int i = 0;
char key = 'a';
vector<int>ans; 

find_Element(arr,i,n,key,ans);
cout<<"Printing answer:"<<endl;
for(auto val:ans){
    cout<<val<<" index"<<endl;
}

return 0;
}