#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int numSquareHelper(int n){
        // Base Case
        if(n==0) return 1;
        if(n < 0) return 0;

        int ans = INT_MAX;
        int i = 1;
        int e = sqrt(n);
        while(i <= e){
            int perferSquare = i*i;
            int numOfPerfectSquare = 1 + numSquareHelper(n - perferSquare);
            if(numOfPerfectSquare < ans){
                ans = numOfPerfectSquare;
            }
            i++;
        }
        return ans;
    }

    int numSquares(int n) {
        return numSquareHelper(n) - 1;
    }
};

int main()
{

Solution sol;

int n;
cout<<"Enter the number: ";
cin>>n;

int ans = sol.numSquares(n);
cout<<"Minimum no required for perfect square is:"<<ans;

return 0;
}