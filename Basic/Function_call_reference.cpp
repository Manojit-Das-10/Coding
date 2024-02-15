#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Reference variable
    int n = 5;
    //"k" Nickname given to n
    int &k = n;
    // "c" Nickname given to n
    int &c = n;
    cout << "n:" << n << endl;
    cout << "k:" << k << endl;
    cout << "c:" << c << endl;
    k++;
    cout << "n:" << n << endl;
    cout << "k:" << k << endl;
    cout << "c:" << c << endl;

    return 0;
}