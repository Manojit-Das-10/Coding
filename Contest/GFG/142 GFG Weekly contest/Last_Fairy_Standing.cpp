#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lastFairyStanding(int n, int k) {
  /*
        int result = 0;
        for (int i = 2; i <= n; ++i) {
            result = (result + k) % i;
        }
        return result + 1;
  */
        k = k-1;
        int idx = k;
        vector<int>v;
        for(int i=1; i<=n; i++)
        {
            v.push_back(i);
        }
        while(v.size()>1)
        {
            v.erase(v.begin() + idx);
            idx = (idx+k) % v.size();
        }
        return v[0];
    }
};

int main()
{

    Solution solution;
    int n, k;
    cout << "Enter the number of fairies (n): ";
    cin >> n;
    cout << "Enter the step size (k): ";
    cin >> k;
    int result = solution.lastFairyStanding(n, k);
    cout << "The last fairy standing is: " << result << endl;

return 0;
}