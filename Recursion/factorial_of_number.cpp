#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    
    // Base case
    if(n==1){
        return 1;
    }

    // Recursive Relation
    int ans = n * factorial(n-1);
    
    return ans;
}

int main()
{
int n;
cout<<"Enter the value of n:";
cin>>n;

int ans = factorial(n);

cout<<"Ans is:"<<ans<<endl;
return 0;
}