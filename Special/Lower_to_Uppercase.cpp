#include<bits/stdc++.h>
using namespace std;

// T.C. - O(n)
// S.C. - O(1)

void converttouppercase(char arr[])
{
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        arr[i]= arr[i] - 'a' + 'A';
    }
    
}

int main()
{
char arr[100];
cout<<"enter lowercase string:";
cin>>arr;
converttouppercase(arr);
cout<<"Uppercase is "<<arr<<endl;
return 0;
}