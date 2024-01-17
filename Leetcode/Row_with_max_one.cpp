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

int main()
{

    return 0;
}