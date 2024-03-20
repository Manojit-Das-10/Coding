#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {
        int n = mat.size();
        vector<int> ans;
        int Onecount = INT_MIN;
        int row = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    count++;
                }
            }
            if (Onecount < count)
            {
                Onecount = count;
                row = i;
            }
        }
        ans.push_back(row);
        ans.push_back(Onecount);
        return ans;
    }
};

int main() {
    Solution sol;

    // Test with a sample matrix
    vector<vector<int>> mat = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };

    // Call the rowAndMaximumOnes method
    vector<int> result = sol.rowAndMaximumOnes(mat);

    // Print the result
    cout << "Row with maximum ones: " << result[0] << ", Maximum ones count: " << result[1] << endl;

    return 0;
}
