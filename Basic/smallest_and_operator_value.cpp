#include<bits/stdc++.h>
using namespace std;

int getSmallest(int n) {
        return (n + 1) & - (n + 1);
}

int main() {
int n;
cout<<"Enter the number:";
cin>>n;

int ans = getSmallest(n);

cout<<"The smallest value is: "<<ans;

return 0;
}