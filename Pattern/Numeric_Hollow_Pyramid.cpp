#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Range : ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // Beginning spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        // Numbers with in between spaces
        int start = 1;
        for (int col = 0; col < 2 * row + 1; col++)
        {
            // 1st & last line
            if (col == 0 || row == n - 1)
            {
                if (col % 2 == 0)
                {
                    cout << start;
                    start++;
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (col == 0)
                {
                    cout << 1;
                }
                else if (col == 2 * row)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}