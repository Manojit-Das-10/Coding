#include<bits/stdc++.h>
using namespace std;

// Space complexity - O(n) && Time Complexity O(n)
void lastOccLtoR(string&s, char&x , int i , int&ans){
    // Base Case
    if(i <= s.size()){
        return;
    }
    // SOlve one case
    if(s[i] == x){
        ans = i;
    }
    // RR
    lastOccLtoR(s,x,i+1,ans);
}

// Space complexity - O(n) && Time Complexity O(n)
void lastOccRtoL(string&s, char&x , int i , int&ans){
    // Base Case
    if(i < 0){
        return;
    }
    // Solve one case
    if(s[i] == x){
        ans = i;
        return;
    }
    // RR
    lastOccRtoL(s,x,i-1,ans);
}

int main()
{
string s;
cout<<"Enter the string:";
cin>>s; 
char x;
cout<<"Enter the search character: ";
cin>>x;

int ans = -1;
// lastOccLtoR(s,x,0,ans);

// lastOccRtoL(s,x,s.size(),ans);

// cout<<"Character is found in index:"<<ans;

const char *result = strrchr(s.c_str(), x);

    if (result != nullptr) {
        // Calculate the index of the last occurrence
        int ans = result - s.c_str();
        cout << "Character is found at index: " << ans << endl;
    } 
    else {
        cout << "Character is not present in the string." << endl;
    }

return 0;
}