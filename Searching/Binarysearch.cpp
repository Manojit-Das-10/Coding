#include <bits/stdc++.h>
using namespace std;
int Binarysearch(int ar[], int n, int key)
{
    int s = 0;
    int e = n;
    while (e <= n)
    {
        {
            int mid = (s + e) / 2;
            if (ar[mid] == key)
            {
                return mid;
            }
            else if (ar[mid] > key)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int key;
    cin >> key;
    cout << Binarysearch(ar, n, key) << endl;
    return 0;
}
