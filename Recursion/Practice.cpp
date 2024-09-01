#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}

int main() {
int n;
cout<<"term:";
cin>>n;
int ans = fibo(n);
cout<<"Term is:"<<ans;
return 0;
}