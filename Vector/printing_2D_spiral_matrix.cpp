#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int total_element = m*n;

    int startingRow = 0;
    int endingCol = n-1;
    int endingRow = m-1;
    int startingCol = 0; 
    int count = 0;
    while(count<total_element)
    {
        //Printing StartingRow
        for(int i = startingCol; i<=endingCol && count<total_element;i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        //Printing endingCol
        for(int i = startingRow; i<=endingRow && count<total_element;i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        //Printing endingRow
        for(int i = endingCol; i>=startingCol && count<total_element;i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--; 

        //Printing StartingCol
        for(int i = endingRow; i>=startingRow && count<total_element;i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;

    }
};
int main()
{


return 0;
}