#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    // Base case
    if(n==1){
        return 0;
    }

    if(n==2){
        return 1;
    }

    // RR
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}

int main()
{
int n;
cout<<"Enter the term you want to see:";
cin>>n;

int ans = fibonacci(n);
cout<<n<<"th term  is:"<<ans;


return 0;
}