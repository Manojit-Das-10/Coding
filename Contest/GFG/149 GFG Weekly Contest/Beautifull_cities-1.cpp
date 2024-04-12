#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> canTrade(int n, vector<int>& b, int q, vector<vector<int>>& queries) {
        int p[n] = {};
        for(int i = 0; i < n; i++) {
            if(i) {
                if(b[i] == b[i - 1])
                    p[i] = p[i - 1];
                else 
                    p[i] = i;
            }
            else 
                p[i] = 0;
        }
        vector<int> ans;
        for(int i = 0; i < q; i++) {
            auto v = queries[i];
            v[0]--;
            v[1]--;
            if(p[v[1]] <= v[0])
                ans.push_back(1);
            else 
                ans.push_back(0);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int n, q;
    cout << "Enter the size of array b:";
    cin >> n;
    vector<int> b(n);
    cout << "Enter the elements of array b:"<<endl;
    for(int i = 0; i < n; i++)
        cin >> b[i];
    cout << "Enter the number of queries (q):";
    cin >> q;
    vector<vector<int>> queries(q, vector<int>(2));
    cout << "Enter the queries (in the format start end):"<<endl;
    for(int i = 0; i < q; i++)
        cin >> queries[i][0] >> queries[i][1];
    
    vector<int> result = sol.canTrade(n, b, q, queries);
    cout << "Results: ";
    for(auto r : result)
        cout << r << " ";
    cout << endl;
    
    return 0;
}
