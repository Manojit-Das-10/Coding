#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Range:";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i + 2; j++)
        {
            
            if(j==1||j==i+1||i==n-1)
            {
                cout << j<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout << endl;
    }

    return 0;
}