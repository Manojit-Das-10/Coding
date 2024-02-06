#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long kMaxSubarray(int n, int k, vector<int> &arr) {
        long long ans = LLONG_MIN; // Use LLONG_MIN instead of INT_MIN
        for (int i = 0; i < n; i++) {
            long long sum = 0;
            for (int j = i; j < n && j < i+k; j++) {
                sum += arr[j];
            }
            ans = max(ans, sum); // Moved max computation out of the inner loop
        }
        return ans;
    }
};

int main() {
    int t;
    cout<<"No of test case:";
    cin >> t;
    while(t--) {
        int n;
        cout<<"Vector size:";
        cin >> n;
        
        int k;
        cout<<"Subarray size:";
        cin >> k;
        
        vector<int> arr(n);
        cout<<"Insert the Element in the vector:"<<endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }
        
        Solution obj;
        long long res = obj.kMaxSubarray(n, k, arr);
        
        cout << "Max sum of subarray is: " << res << endl;
    }
    return 0;
}
