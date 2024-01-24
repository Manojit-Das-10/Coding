#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cout<<"Enter the range:";
cin>>n;
for (int i = 0; i < (n*2)-1; i++)
{
    int cond = i<n?i:n-(i%n)-2;
    // int cond =0;
    // if(i<n)
    // {
    //     cond=i;
    // }
    // else{
    //     cond= (n-(i%n)-2);
    // }
    for (int j = 0; j <= cond; j++)
        {
            cout<<" * ";
        } 
    cout<<endl;
}
return 0;
}