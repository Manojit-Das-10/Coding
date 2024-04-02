#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isPossibleSolution(vector<int>&stalls,int k,int mid){
        //Can we place k cows, at least mid distance between cows.
        
        int c = 1;
        int pos = stalls[0];
        for(int i=0; i<stalls.size();i++)
        {
            if(stalls[i] - pos >= mid)
            {
                c++;
                pos = stalls[i]; //One more cow has been placed
            }
            
            if(c==k)
            {
                return true;
            }
        }
        
        return false;
        
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int start = 0;
        int end = stalls[stalls.size()-1] - stalls[0];
        int ans = -1;
        
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(isPossibleSolution(stalls,k,mid))
            {
                ans = mid;
                start = mid + 1;
            }
            
            else
            {
                end = mid -1;
            }
        }
        
        return ans;
    }
};

int main()
{

int n, k;
cout<<"Enter the numbers of stall required:";
cin >> n;
cout<<"Enter the number of aggressive cows are present:";
cin >> k;
vector<int> stalls(n);
cout<<"The distance between the stalls:"<<endl;
for (int i = 0; i < n; i++) {
    cin >> stalls[i];
}
// char ch;
// cin >> ch;

Solution obj;
cout<< "The max distance between the aggressive cows is " << obj.solve(n, k, stalls) << endl;

return 0;
}