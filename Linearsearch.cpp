#include <bits/stdc++.h>
using namespace std;
void linearsearch(int ar[], int n, int key)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (ar[i] == key)
        {
            cout << "The element found at position:"<< i << endl;
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "The element not found.";
    }
    // cout << -1 << endl;}
}

int main()
{
    int n;
    cout << "enter the range for the array:"<<endl;
    cin >> n;
    int ar[n];
    int i;
    cout << "Insert the element in the array:"<<endl;
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int key;
    cout << "Enter the search element:"<<endl;
    cin >> key;
    // linearsearch(ar , n , key);

    // cout << position << endl;
    linearsearch(ar, n, key);
    return 0;
}