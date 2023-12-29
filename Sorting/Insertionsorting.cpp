#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int ar[n];
for (int i = 0; i <n ; i++)
{
    /* code */
    cin>>ar[i];
}
for (int i = 0; i < n; i++)
{
    /* code */
    int current = ar[i];
    int j=i-1;
    while (ar[j]>current && j>=0)
    {
        /* code */
        ar[j+1]=ar[j];
        j--;
    }
    ar[j+1]=current;
}
for (int i = 0; i <n; i++)
{
    /* code */
    cout<<ar[i]<<" ";
}
cout<<endl;
return 0;
}