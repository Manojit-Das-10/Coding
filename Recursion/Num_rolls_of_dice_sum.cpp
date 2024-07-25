#include<bits/stdc++.h>
using namespace std;


int numRollsToTarget(int n, int k, int target) {
        // Base case
        if(target < 0) return 0;
        if(target == 0 && n == 0) return 1;
        if(target != 0 && n == 0) return 0;
        if(target == 0 && n != 0) return 0;

        int ans = 0;
        for(int i=0; i<=k; i++){
            ans = ans + numRollsToTarget(n-1,k,target-i);
        }

        return ans;
    }


int main()
{
int n , k , target;
cout<<"Enter the no of dice(n):";
cin>>n;

cout<<"Enter the no of faces of dice(k):";
cin>>k;

cout<<"Target:";
cin>>target;

int ans = numRollsToTarget(n,k,target);
cout<<"The number of ways is: "<<ans;

return 0;
}