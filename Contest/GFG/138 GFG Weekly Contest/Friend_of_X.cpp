#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string isFriend(int n, int x, int y, vector<int> &arr) {
        // code here
        string ans = "no";
        for(int i = 0; i < n; i++) {
            if(y == arr[i] + x) {
                ans = "yes";
                return ans;
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int x;
        cin >> x;
        
        int y;
        cin >> y;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        Solution obj;
        string res = obj.isFriend(n, x, y, arr);
        
        cout << res << "\n";
    }
    return 0;
}
