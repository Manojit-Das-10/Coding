#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void countArrangement_Helper(vector<int>&v, int&ans, int&n, int curNum){
        // Base case
        if(curNum == n+1){
            ++ans;
            return;
        }

        for(int i = 1 ; i<= n ; i++){
            if( v[i] == 0 && (curNum % i == 0 || i % curNum == 0)){
                v[i] = curNum;
                countArrangement_Helper(v,ans,n,curNum+1);
                // Backtracking
                v[i]=0;
            }
        }
    }

    int countArrangement(int n) {
        vector<int>v(n+1);
        int ans=0;
        countArrangement_Helper(v,ans,n,1);
        return ans;
    }
};

int main() {
Solution sol;

int n;
cout<<"Enter the number:";
cin>>n;

int ans = sol.countArrangement(n);

cout<<"Number of beautiful arrangement is: "<<ans<<endl;

return 0;
}