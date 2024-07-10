#include<bits/stdc++.h>
using namespace std;

// Space complexity - O(n) && Time Complexity O(n)
void reverseOfStrinf(string&str , int s , int e){
    // Base case
    if(s >=e ){
        return;
    }
    // Solve one case
    swap(str[s],str[e]);

    // RR
    reverseOfStrinf(str,s+1,e-1);
}

int main()
{
string str;
cout<<"Enter the string:";
cin>>str;
int s = 0;
int e = str.size()-1;

reverseOfStrinf(str,s,e);

cout<<"Reverse is: "<<str;

return 0;
}