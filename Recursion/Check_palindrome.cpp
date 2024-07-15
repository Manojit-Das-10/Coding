#include<bits/stdc++.h>
using namespace std;

// Time Complexity o(n) & Space Complexity o(n)

bool isPalindrome (string &s , int start , int end){
    // Base case
    if(start >= end){
        return true;
    }
    // solve one solution
    if(s[start] != s[end]){
        return false;
    }
    // RR
    return isPalindrome(s,start+1,end-1);
}

int main()
{
string s;
cout<<"Enter the string:";
cin>>s;
int start = 0;
int end = s.size()-1;

cout<<isPalindrome(s,start,end);

return 0;
}