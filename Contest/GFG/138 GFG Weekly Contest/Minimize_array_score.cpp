#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizeArrayScore(int n, vector<int> &arr) {
        int ans;
        sort(arr.begin(), arr.end());
        ans = arr[0] + arr[n - 1];
        for (int i = 0; i < n / 2; i++) {
            ans = max(ans, arr[i] + arr[n - i - 1]);
        }
        return ans;
    }
};

int main()
{

    int t;
    cout<<"No of Test case:";
    cin >> t;
    while (t--) {
        int n;
        cout<<"Size of the vector:";
        cin >> n;

        vector<int> arr(n);
        cout<<"Enter the element in the vector:"<<endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        int res = obj.minimizeArrayScore(n, arr);

        cout << "The minimize score of the array is: " << res << endl;
    }

return 0;
}