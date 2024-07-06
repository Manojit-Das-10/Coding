#include<bits/stdc++.h>
using namespace std;

int maxSegment(int n, int x, int y, int z){
    // Base case
    if(n == 0){
        return 0;
    }
    if(n < 0){
        return INT_MIN;
    }
    
    int ans1 = maxSegment(n-x,x,y,z)+1;
    int ans2 = maxSegment(n-y,x,y,z)+1;
    int ans3 = maxSegment(n-z,x,y,z)+1;
    
    int ans = max(ans1 , max(ans2,ans3));
}

int main()
{
int n = 7;
int x = 5;
int y = 5;
int z = 5;

int ans = maxSegment(n,x,y,z);

if(ans<0){
    ans = 0;
}

cout<<"Maximum no of segment is: "<<ans<<endl;

return 0;
}