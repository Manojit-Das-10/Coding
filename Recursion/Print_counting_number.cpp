#include<bits/stdc++.h>
using namespace std;

void printCounting(int n){
// Base case
if(n==0)
return;

// Processing
cout<<n<<" ";

// Recursive Relational
printCounting(n-1);
 
}

int main()
{
int n;
cout<<"Enter the value of n:";
cin>>n;

printCounting(n);
return 0;
}