#include<bits/stdc++.h>
using namespace std;

// T.C. - O(n)
// S.C. - O(1)

void converttolowercase(char arr[])
{
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        arr[i]= arr[i] - 'A' + 'a';
    }
    
}

int main()
{
char arr[100];
cout<<"enter lowercase string:";
cin>>arr;
converttolowercase(arr);
cout<<"Uppercase is "<<arr<<endl;

return 0;
}