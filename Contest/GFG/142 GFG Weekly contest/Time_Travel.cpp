#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int timeTravel(int n, vector<int> &arr) {
        // code here
        int ans=0;
        if(n==0)
        {
            return 0;
        }
        int l=0,r=l+1;
        while(r<n)
        {
            if(arr[l]<arr[r])
            {
                ans = ans + 1;
            }
            
            else if(arr[l]>arr[r])
            {
                ans = ans + 2;
            }
            
            l++,r++;
        }
        return ans;
    }
};


int main()
{
    Solution sol;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = sol.timeTravel(n, arr);
    cout << "Result: " << result << endl;
    return 0;
}